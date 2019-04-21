using System.Collections;
using UnityEngine;
using UnityEngine.Audio;

/// <summary>
/// Manipulates and evolves audio features via genetic algorithm.
/// </summary>
public class AudioEvolution : MonoBehaviour
{
    /// <summary>
    /// References to audio mixer and features.
    /// </summary>
    [Header("Audio")]
    public AudioMixer m_AudioMixer;
    public float m_MinPitch = 50f;
    public float m_MaxPitch = 150f;
    public float m_MinWetmix = 0f;
    public float m_MaxWetmix = 100f;
    public float m_MinResonance = 1f;
    public float m_MaxResonance = 10f;
    public float m_MinDepth = 0f;
    public float m_MaxDepth = 0.1f;

    /// <summary>
    /// GA-related variables.
    /// </summary>
    [Header("Evolution")]
    public HeartrateReader m_HeartrateReader;
    [Range(0f, 1f)]
    public float m_MutationProbability = 0.8f;
    public float m_RecordTime = 10f;

    /// <summary>
    /// Helper variables for heartrate recording.
    /// </summary>
    [Header("Recording")]
    public CsvWriter m_CsvWriter;
    private bool m_UsingGA;

    private Genotype m_Genotype, m_CurrentCopy;

    /// <summary>
    /// Holds information about each genotype.
    /// </summary>
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

    /// <summary>
    /// Called before the first frame update.
    /// Initialises GA elements and starts evolution.
    /// </summary>
    private void Start()
    {
        m_UsingGA = m_CsvWriter.m_UserData.UsingGA;

        if (m_UsingGA)
        {
            m_Genotype = CreateGenotype();
            
            m_AudioMixer.SetFloat("Echo Wetmix", m_Genotype.Features[0]);
            m_AudioMixer.SetFloat("Chorus Depth", m_Genotype.Features[1]);
        }

        FirstEvaluation();
    }

    /// <summary>
    /// Called once per frame. Linearly interpolates current audio feature value to new value.
    /// </summary>
    private void Update()
    {
        if (m_UsingGA)
        {
            if (m_CurrentCopy.Features != null)
            {
                float currentValue;
                m_AudioMixer.GetFloat("Echo Wetmix", out currentValue);
                m_AudioMixer.SetFloat("Echo Wetmix", Mathf.Lerp(currentValue, m_CurrentCopy.Features[0], Time.deltaTime / 10));
                m_AudioMixer.GetFloat("Chorus Depth", out currentValue);
                m_AudioMixer.SetFloat("Chorus Depth", Mathf.Lerp(currentValue, m_CurrentCopy.Features[1], Time.deltaTime / 10));
            }
        }
    }

    /// <summary>
    /// Creates and returns new Genotype object.
    /// </summary>
    /// <returns>New Genotype object.</returns>
    private Genotype CreateGenotype()
    {
        Genotype genotype = new Genotype();

        genotype.Features = new float[2];
        
        genotype.Features[0] = Random.Range(m_MinWetmix, m_MaxWetmix) / 100f;
        genotype.Features[1] = Random.Range(m_MinDepth, m_MaxDepth);

        return genotype;
    }

    /// <summary>
    /// Launches coroutine to start recording heartrate values.
    /// </summary>
    private void FirstEvaluation()
    {
        StartCoroutine(RecordFitness(m_RecordTime));
    }

    /// <summary>
    /// Records heartrate values every "time" seconds.
    /// </summary>
    /// <param name="time">Seconds of interval between each recording.</param>
    /// <returns>IEnumerator to iterate through seconds.</returns>
    private IEnumerator RecordFitness(float time)
    {
        yield return new WaitForSeconds(time);

        m_CurrentCopy.Fitness = m_HeartrateReader.GetHeartrate();
        m_CsvWriter.Save(m_CurrentCopy.Fitness);

        if (m_UsingGA)
        {
            CompareFitness();
        }
        else
        {
            StartCoroutine(RecordFitness(m_RecordTime));
        }
    }

    /// <summary>
    /// Performs mutation on current audio features.
    /// </summary>
    private void Evolve()
    {
        m_CurrentCopy = m_Genotype;

        // crossover was ignored because only a specific genotype was used each round instead of whole population
            
        // mutation
        if (Random.Range(0f, 1f) < m_MutationProbability)
        {
            m_CurrentCopy.Features[0] = Random.Range(m_MinWetmix, m_MaxWetmix) / 100f;
            m_CurrentCopy.Features[1] = Random.Range(m_MinDepth, m_MaxDepth);
        }

        StartCoroutine(RecordFitness(m_RecordTime));
    }

    /// <summary>
    /// Fitness function. Chooses which genotype to keep and pass onto next generation.
    /// </summary>
    private void CompareFitness()
    {
        if (m_Genotype.Fitness == 0)
        {
            m_Genotype.Fitness = m_CurrentCopy.Fitness;
        }
        else if (m_Genotype.Fitness > m_CurrentCopy.Fitness)
        {
            m_Genotype = m_CurrentCopy;
        }

        float wetmix, depth;
        m_AudioMixer.GetFloat("Echo Wetmix", out wetmix);
        m_AudioMixer.GetFloat("Chorus Depth", out depth);

        Evolve();
    }
}