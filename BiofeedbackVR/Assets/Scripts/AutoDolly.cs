using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class AutoDolly : MonoBehaviour
{
    public float m_DurationInSeconds = 20f;
    public CinemachineSmoothPath m_DollyPath;
    public int m_LastWaypoint;

    private CinemachineTrackedDolly dolly;
    private int lastWayPoint;
    private float startTime, elapsedTime, counter;

    void Awake()
    {
        dolly = GetComponent<CinemachineVirtualCamera>().GetCinemachineComponent<CinemachineTrackedDolly>();
        lastWayPoint = m_DollyPath.m_Waypoints[m_DollyPath.m_Waypoints.GetLength()];
        startTime = Time.time;
    }

    void Update()
    {
        elapsedTime = Time.time - startTime;

        if (elapsedTime <= m_DurationInSeconds)
        {
            counter = Mathf.Lerp(0, m_LastWaypoint, elapsedTime / m_DurationInSeconds);
        }

        dolly.m_PathPosition = counter;
    }
}
