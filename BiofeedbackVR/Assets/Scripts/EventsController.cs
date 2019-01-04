using UnityEngine;

public class EventsController : MonoBehaviour
{
    public AutoDollyCart dolly;

    public int m_NodeEvent = 13;
    public float m_FogDensity = 0.1f;
    private bool eventStarted = false;    

    void Update()
    {
        if (!eventStarted && dolly.GetCounter() >= m_NodeEvent)
        {
            eventStarted = true;
            RenderSettings.fogDensity = Mathf.Lerp(RenderSettings.fogDensity, m_FogDensity, Time.deltaTime);
        }
    }
}
