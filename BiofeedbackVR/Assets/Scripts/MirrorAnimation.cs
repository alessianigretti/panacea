using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

/// <summary>
/// Handles animation of background kaleidoscope through manipulation
/// of offset and roll values.
/// </summary>
public class MirrorAnimation : MonoBehaviour
{
    public float m_DurationInSeconds = 10f;
    public float m_TargetOffset = -100f;
    public float m_TargetRoll = 800f;

    private Kino.Mirror mirror;
    private float startTime, elapsedTime, offset, roll;

    /// <summary>
    /// Called when script is loaded. Initialises mirror and time.
    /// </summary>
    private void Awake()
    {
        mirror = GetComponent<Kino.Mirror>();
        startTime = Time.time;
    }

    /// <summary>
    /// Called once per frame.
    /// Linearly interpolates and assigns values to offset and roll.
    /// </summary>
    private void Update()
    {
        elapsedTime = Time.time - startTime;

        if (elapsedTime <= m_DurationInSeconds)
        {
            offset = Mathf.Lerp(0, m_TargetOffset, elapsedTime / m_DurationInSeconds);
            roll = Mathf.Lerp(0, m_TargetRoll, elapsedTime / m_DurationInSeconds);
        }

        mirror.SetOffset(offset);
        mirror.SetRoll(roll);
    }
}
