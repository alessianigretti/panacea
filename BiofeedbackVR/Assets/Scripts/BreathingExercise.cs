using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class BreathingExercise : MonoBehaviour
{
    public CinemachineVirtualCamera m_Vcam;
    public int m_BreatheInSeconds = 7;
    public int m_BreatheOutSeconds = 8;
    public ParticleSystem m_BreatheIn, m_BreatheOut;

    private CinemachineTrackedDolly dolly;
    private float pathPosition;
    private bool triggered = false;

    void Start()
    {
        dolly = m_Vcam.GetCinemachineComponent<CinemachineTrackedDolly>();
    }

    void Update()
    {
        if (!m_BreatheIn.isPlaying && !triggered)
        {
            pathPosition = dolly.m_PathPosition;
            
            if (pathPosition > 0.99f)
            {
                triggered = true;
                PlayAndWait(m_BreatheIn, m_BreatheInSeconds);
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
