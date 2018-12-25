using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioEvolution : MonoBehaviour
{
    public int m_Iterations;
    public int m_PopulationSize;
    [Range(0f, 1f)]
    public float m_CrossoverProbability, m_MutationProbability;
    public float m_MinValue, m_MaxValue;

    private AudioMixerController m_Controller;
    private Genotype[] m_Population;
    private int m_PreviousGenotypeIndex, m_CurrentGenotypeIndex;

    public struct Genotype
    {
        private float[] features;
        private float fitness;

        public float Fitness
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

    public AudioEvolution(AudioMixerController controller)
    {
        m_Controller = controller;
    }

    private void Start()
    {
        m_Population = CreatePopulation(m_PopulationSize, m_MinValue, m_MaxValue);

        for (int i = 0; i < m_Iterations; i++)
        {
            Evolve();
        }
    }

    private Genotype[] CreatePopulation(int size, float min, float max)
    {
        Genotype[] population = new Genotype[size];

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < population[i].Features.Length; j++)
            {
                population[i].Features[j] = Random.Range(min, max);
            }
        }

        return population;
    }

    private void Evolve()
    {
        int newIndex = Random.Range(0, m_Population.Length);
        Genotype current = m_Population[m_CurrentGenotypeIndex];
        Genotype newGenotype = m_Population[newIndex];

        for (int i = 0; i < current.Features.Length; i++)
        {
            // crossover
            if (Random.Range(0f, 1f) < m_CrossoverProbability)
            {
                float newGene = newGenotype.Features[i];
                current.Features[i] = newGene;
            }

            // mutation
            if (Random.Range(0f, 1f) < m_MutationProbability)
            {
                float newGene = Random.Range(m_MinValue, m_MaxValue);
                current.Features[i] = newGene;
            }
        }

        StartCoroutine(RecordFitness(60f));
    }

    IEnumerator RecordFitness(float time)
    {
        yield return new WaitForSeconds(time);

        m_Population[m_CurrentGenotypeIndex].Fitness = m_Controller.GetHeartrate();
    }
}