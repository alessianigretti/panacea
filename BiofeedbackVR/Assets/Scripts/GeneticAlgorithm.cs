using System;
using System.Collections.Generic;

public class GeneticAlgorithm
{
    private List<float> m_Population;
    private int m_Iterations;

	public GeneticAlgorithm(List<float> population, int iterations)
	{
        m_Population = population;
        m_Iterations = iterations;
        Run();
	}

    private void Run()
    {
        for (int i = 0; i < m_Iterations; i++)
        {

        }
    }
}
