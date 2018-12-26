using System.Collections;
using UnityEngine;
using UnityEngine.Audio;

public class AudioEvolution : MonoBehaviour
{
    [Header("Audio")]
    public AudioMixer m_AudioMixer;
    public float m_MinPitch = 0.5f;
    public float m_MaxPitch = 1.5f;
    public float m_MinWetmix = 0f;
    public float m_MaxWetmix = 100f;
    public float m_MinResonance = 1f;
    public float m_MaxResonance = 10f;
    public float m_MinDepth = 0f;
    public float m_MaxDepth = 1f;

    [Header("Evolution")]
    public HeartrateReader m_HeartrateReader;
    [Range(0f, 1f)]
    public float m_MutationProbability;
    public float m_RecordTime = 60f;

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
        m_Genotype = CreateGenotype();

        m_AudioMixer.SetFloat("Pitch", m_Genotype.Features[0]);
        m_AudioMixer.SetFloat("Echo Wetmix", m_Genotype.Features[1]);
        m_AudioMixer.SetFloat("Lowpass Resonance", m_Genotype.Features[2]);
        m_AudioMixer.SetFloat("Chorus Depth", m_Genotype.Features[3]);

        FirstEvaluation();
    }

    private Genotype CreateGenotype()
    {
        Genotype genotype = new Genotype();

        genotype.Features = new float[4];

        genotype.Features[0] = Random.Range(m_MinPitch, m_MaxPitch);
        genotype.Features[1] = Random.Range(m_MinWetmix, m_MaxWetmix);
        genotype.Features[2] = Random.Range(m_MinResonance, m_MaxResonance);
        genotype.Features[3] = Random.Range(m_MinDepth, m_MaxDepth);

        return genotype;
    }

    private void FirstEvaluation()
    {
        StartCoroutine(RecordFitness(m_RecordTime));
    }

    IEnumerator RecordFitness(float time)
    {
        yield return new WaitForSeconds(time);
        
        m_CurrentCopy.Fitness = m_HeartrateReader.GetHeartrate();

        CompareFitness();
    }

    private void Evolve()
    {
        m_CurrentCopy = m_Genotype;

        // crossover was useless because we're not using the whole population pool anyway
            
        // mutation
        if (Random.Range(0f, 1f) < m_MutationProbability)
        {
            m_CurrentCopy.Features[0] = Random.Range(m_MinPitch, m_MaxPitch);
            m_CurrentCopy.Features[1] = Random.Range(m_MinWetmix, m_MaxWetmix);
            m_CurrentCopy.Features[2] = Random.Range(m_MinResonance, m_MaxResonance);
            m_CurrentCopy.Features[3] = Random.Range(m_MinDepth, m_MaxDepth);
        }

        m_AudioMixer.SetFloat("Pitch", m_CurrentCopy.Features[0]);
        m_AudioMixer.SetFloat("Echo Wetmix", m_CurrentCopy.Features[1]);
        m_AudioMixer.SetFloat("Lowpass Resonance", m_CurrentCopy.Features[2]);
        m_AudioMixer.SetFloat("Chorus Depth", m_CurrentCopy.Features[3]);

        StartCoroutine(RecordFitness(m_RecordTime));
    }

    private void CompareFitness()
    {
        if (m_Genotype.Fitness == 0)
        {
            m_Genotype.Fitness = m_CurrentCopy.Fitness;
            Debug.Log("Initial fitness: " + m_Genotype.Fitness);
        }
        else if (m_Genotype.Fitness > m_CurrentCopy.Fitness)
        {
            m_Genotype = m_CurrentCopy;
            Debug.Log("Fitness chosen: new - " + m_Genotype.Fitness);
        }
        else
        {
            Debug.Log("Fitness chosen: old - " + m_Genotype.Fitness);
        }

        float pitch, wetmix, resonance, depth;
        m_AudioMixer.GetFloat("Pitch", out pitch);
        m_AudioMixer.GetFloat("Echo Wetmix", out wetmix);
        m_AudioMixer.GetFloat("Lowpass Resonance", out resonance);
        m_AudioMixer.GetFloat("Chorus Depth", out depth);
        Debug.Log("Pitch " + pitch);
        Debug.Log("Wetmix " + wetmix);
        Debug.Log("Resonance " + resonance);
        Debug.Log("Depth " + depth);

        Evolve();
    }
}