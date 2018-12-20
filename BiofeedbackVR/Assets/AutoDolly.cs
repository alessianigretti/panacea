using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class AutoDolly : MonoBehaviour
{
    public float m_DurationInSeconds = 20f;

    private CinemachineTrackedDolly dolly;
    private float startTime, elapsedTime, counter;

    void Awake()
    {
        dolly = GetComponent<CinemachineVirtualCamera>().GetCinemachineComponent<CinemachineTrackedDolly>();
        startTime = Time.time;
    }

    void Update()
    {
        elapsedTime = Time.time - startTime;

        if (elapsedTime <= m_DurationInSeconds)
        {
            counter = Mathf.Lerp(0, 1, elapsedTime / m_DurationInSeconds);
        }

        dolly.m_PathPosition = counter;
    }
}
