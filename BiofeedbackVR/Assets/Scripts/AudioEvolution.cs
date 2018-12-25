using System.Collections;
using UnityEngine;
using UnityEngine.Audio;

public class AudioEvolution : MonoBehaviour
{
    [Header("Audio")]
    public AudioMixer m_AudioMixer;

    [Header("Evolution")]
    public HeartrateReader m_HeartrateReader;
    public int m_Iterations;
    public int m_PopulationSize;
    [Range(0f, 1f)]
    public float m_CrossoverProbability, m_MutationProbability;
    public float m_MinValue, m_MaxValue;

    private float m_ExposedPitch, m_ExposedDistortion;
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

        for (int i = 0; i < m_ExposedParametersQnty; i++)
        {
            genotype.Features[i] = Random.Range(min, max);
        }

        return genotype;
    }

    private void FirstEvaluation()
    {
        StartCoroutine(RecordFitness(60f));
    }

    IEnumerator RecordFitness(float time)
    {
        yield return new WaitForSeconds(time);
        Debug.Log("60 seconds, fitness: " + m_HeartrateReader.GetHeartrate());

        m_CurrentCopy.Fitness = m_HeartrateReader.GetHeartrate();

        CompareFitness();
    }

    private void Evolve()
    {
        m_CurrentCopy = m_Genotype;

        /*int[] validIndices = new int[m_Population.Length - 1];
        for (int i = 0; i < validIndices.Length; i++)
        {
            if (i != m_CurrentGenotypeIndex)
            {
                validIndices[i] = i;
            }
        }
        m_NewIndex = validIndices[Random.Range(0, validIndices.Length)];
        Genotype newGenotype = m_Population[m_NewIndex];*/

        for (int i = 0; i < m_ExposedParametersQnty; i++)
        {
            // crossover was useless because we're not using the whole pool anyway
            /*if (Random.Range(0f, 1f) < m_CrossoverProbability)
            {
                float newGene = newGenotype.Features[i];
                m_CurrentCopy.Features[i] = newGene;
            }*/

            // mutation
            if (Random.Range(0f, 1f) < m_MutationProbability)
            {
                m_CurrentCopy.Features[i] = Random.Range(m_MinValue, m_MaxValue);
            }
        }
        
        m_AudioMixer.SetFloat("Pitch", m_CurrentCopy.Features[0]);
        m_AudioMixer.SetFloat("Distortion", m_CurrentCopy.Features[1]);

        StartCoroutine(RecordFitness(60f));
    }

    private void CompareFitness()
    {
        if (m_Genotype.Fitness > m_CurrentCopy.Fitness || m_Genotype.Fitness == 0)
        {
            m_Genotype = m_CurrentCopy;
        }

        Evolve();
    }
}