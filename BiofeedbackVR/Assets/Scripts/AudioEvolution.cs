using System.Collections;
using UnityEngine;
using UnityEngine.Audio;

public class AudioEvolution : MonoBehaviour
{
    [Header("Audio")]
    public AudioMixer m_AudioMixer;

    [Header("Evolution")]
    public HeartrateReader m_HeartrateReader;
    [Range(0f, 1f)]
    public float m_MutationProbability;
    public float m_MinValue, m_MaxValue;
    public float m_RecordTime = 60f;
    
    private int m_ExposedParametersQnty = 2;
    private Genotype m_Genotype, m_CurrentCopy;

    public struct Genotype
    {
        private float[] features;
        private int fitness;

        public int Fitness
        {
            get
            {
                return fitness;
            }

            set
            {
                fitness = value;
            }
        }

        public float[] Features
        {
            get
            {
                return features;
            }

            set
            {
                features = value;
            }
        }
    }

    private void Start()
    {
        //m_Population = CreatePopulation(m_PopulationSize, m_MinValue, m_MaxValue);
        m_Genotype = CreateGenotype(m_MinValue, m_MaxValue);

        m_AudioMixer.SetFloat("Pitch", m_Genotype.Features[0]);
        m_AudioMixer.SetFloat("Distortion", m_Genotype.Features[1]);

        FirstEvaluation();
    }

    private Genotype CreateGenotype(float min, float max)
    {
        Genotype genotype = new Genotype();

        genotype.Features = new float[m_ExposedParametersQnty];

        for (int i = 0; i < m_ExposedParametersQnty; i++)
        {
            genotype.Features[i] = Random.Range(min, max);
        }

        return genotype;
    }

    private void FirstEvaluation()
    {
        StartCoroutine(RecordFitness(m_RecordTime));
    }

    IEnumerator RecordFitness(float time)
    {
        yield return new WaitForSeconds(time);
        //Debug.Log(m_RecordTime + " seconds, fitness: " + m_HeartrateReader.GetHeartrate());

        m_CurrentCopy.Fitness = m_HeartrateReader.GetHeartrate();

        CompareFitness();
    }

    private void Evolve()
    {
        m_CurrentCopy = m_Genotype;

        m_CurrentCopy.Features = new float[m_ExposedParametersQnty];

        for (int i = 0; i < m_ExposedParametersQnty; i++)
        {
            // crossover was useless because we're not using the whole population pool anyway
            
            // mutation
            if (Random.Range(0f, 1f) < m_MutationProbability)
            {
                m_CurrentCopy.Features[i] = Random.Range(m_MinValue, m_MaxValue);
            }
            else
            {
                m_CurrentCopy.Features[i] = m_Genotype.Features[i];
            }
        }
        
        m_AudioMixer.SetFloat("Pitch", m_CurrentCopy.Features[0]);
        m_AudioMixer.SetFloat("Distortion", m_CurrentCopy.Features[1]);

        StartCoroutine(RecordFitness(m_RecordTime));
    }

    private void CompareFitness()
    {
        if (m_Genotype.Fitness > m_CurrentCopy.Fitness || m_Genotype.Fitness == 0)
        {
            m_Genotype = m_CurrentCopy;
            Debug.Log("Fitness chosen: new - " + m_Genotype.Fitness);
        }
        else
        {
            Debug.Log("Fitness chosen: old - " + m_Genotype.Fitness);
        }

        float pitch, distortion;
        m_AudioMixer.GetFloat("Pitch", out pitch);
        m_AudioMixer.GetFloat("Distortion", out distortion);
        Debug.Log("Pitch " + pitch);
        Debug.Log("Distortion " + distortion);

        Evolve();
    }
}