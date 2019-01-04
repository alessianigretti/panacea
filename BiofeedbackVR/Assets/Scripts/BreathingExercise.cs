using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class BreathingExercise : MonoBehaviour
{
    public AutoDollyCart m_dollyCart;
    public int m_BreatheInSeconds = 7;
    public int m_BreatheOutSeconds = 8;
    public ParticleSystem m_BreatheIn, m_BreatheOut;
    
    private float pathPosition;
    private bool triggered = false;

    void Update()
    {
        if (!triggered)
        {
            pathPosition = m_dollyCart.GetCounter();
            
            if (pathPosition > 1f)
            {
                PlayAndWait(m_BreatheIn, m_BreatheInSeconds);
            }
            else if (pathPosition > 3f)
            {
                triggered = true;
                StopAllCoroutines();
                m_BreatheIn.emissionRate = 0f;
                m_BreatheOut.emissionRate = 0f;
            }
        }
	}

    void PlayAndWait(ParticleSystem particles, int waitTime)
    {
        particles.Play();
        particles.emissionRate = 10f;
        StartCoroutine(WaitAndStop(particles, waitTime));
    }

    IEnumerator WaitAndStop(ParticleSystem particles, int timeInSeconds)
    {
        yield return new WaitForSeconds(timeInSeconds);
        particles.emissionRate = 0f;
        StartCoroutine(Pause(particles, 3));
    }

    IEnumerator Pause(ParticleSystem particlesPlaying, int timeInSeconds)
    {
        yield return new WaitForSeconds(timeInSeconds);

        particlesPlaying.Stop();

        if (particlesPlaying.name == "Breathe In Particles")
        {
            PlayAndWait(m_BreatheOut, m_BreatheOutSeconds);
        }
        else if (particlesPlaying.name == "Breathe Out Particles")
        {
            PlayAndWait(m_BreatheIn, m_BreatheInSeconds);
        }
    }
}
