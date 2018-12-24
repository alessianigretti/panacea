using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FogController : MonoBehaviour
{
    public int m_Node = 13;
    public float m_FogDensity = 0.1f;

    private AutoDolly dolly;

    void Start()
    {
        dolly = gameObject.GetComponent<AutoDolly>();
    }

    void Update()
    {
        if (dolly.GetCounter() >= m_Node)
        {
            RenderSettings.fogDensity = Mathf.Lerp(RenderSettings.fogDensity, m_FogDensity, Time.deltaTime);
        }
    }
}
