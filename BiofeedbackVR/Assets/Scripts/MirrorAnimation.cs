using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class MirrorAnimation : MonoBehaviour
{
    public float m_DurationInSeconds = 10f;
    public float m_TargetOffset = -100f;
    public float m_TargetRoll = 800f;

    private Kino.Mirror mirror;
    private float startTime, elapsedTime, offset, roll;

    void Awake()
    {
        mirror = GetComponent<Kino.Mirror>();
        startTime = Time.time;
    }

    void Update()
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
