using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class AutoDollyCart : MonoBehaviour
{
    public float m_DurationInSeconds = 20f;
    public CinemachineSmoothPath m_DollyPath;

    [Header("Debug")]
    public int m_StartLerp = 0;
    
    private int lastWayPoint;
    private float startTime, elapsedTime, counter;

    void Awake()
    {
        lastWayPoint = m_DollyPath.m_Waypoints.Length - 1;
        startTime = Time.time;
    }

    void Update()
    {
        elapsedTime = Time.time - startTime;

        if (elapsedTime <= m_DurationInSeconds)
        {
            counter = Mathf.Lerp(m_StartLerp, lastWayPoint, elapsedTime / m_DurationInSeconds);
        }

        transform.position = m_DollyPath.EvaluatePositionAtUnit(counter, 0);
    }

    public float GetCounter()
    {
        return counter;
    }
}
