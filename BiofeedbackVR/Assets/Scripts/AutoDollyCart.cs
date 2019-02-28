using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

/// <summary>
/// 
/// </summary>
public class AutoDollyCart : MonoBehaviour
{
    public float m_DurationInSeconds;
    public CinemachineSmoothPath m_DollyPath;

    private int startLerp = 0;
    private int lastWaypoint;
    private float startTime, elapsedTime, counter;

    /// <summary>
    /// Called when script is loaded. Initialises waypoints and time.
    /// </summary>
    private void Awake()
    {
        lastWaypoint = m_DollyPath.m_Waypoints.Length - 1;
        startTime = Time.time;
    }

    /// <summary>
    /// Called once per frame.
    /// Linearly interpolates between start and end int values.
    /// Assigns interpolated value to DollyPath every frame.
    /// </summary>
    private void Update()
    {
        elapsedTime = Time.time - startTime;

        if (elapsedTime <= m_DurationInSeconds)
        {
            counter = Mathf.Lerp(startLerp, lastWaypoint, elapsedTime / m_DurationInSeconds);
        }

        transform.position = m_DollyPath.EvaluatePosition(counter);
    }

    /// <summary>
    /// Returns interpolated value at current time.
    /// </summary>
    /// <returns>Interpolated value.</returns>
    public float GetCounter()
    {
        return counter;
    }
}
