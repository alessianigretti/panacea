using System.Collections;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.Networking;

public class AudioMixerController : MonoBehaviour
{
    public AudioMixer m_AudioMixer;
    public string m_Url;

    private AudioEvolution m_GA;
    private int m_Heartrate;
    private float m_ExposedPitch;

    void Start()
    {
        m_GA = new AudioEvolution(this);
        bool result = m_AudioMixer.GetFloat("Pitch", out m_ExposedPitch);
        Debug.Log(m_ExposedPitch);
    }

    void Update()
    {
        StartCoroutine(GetInfo());
    }

    public int GetHeartrate()
    {
        return m_Heartrate;
    }

    IEnumerator GetInfo()
    {
        UnityWebRequest www = UnityWebRequest.Get(m_Url);

        yield return www.SendWebRequest();

        m_Heartrate = System.Convert.ToInt32(www.downloadHandler.text);
        Debug.Log(m_Heartrate);
    }
}