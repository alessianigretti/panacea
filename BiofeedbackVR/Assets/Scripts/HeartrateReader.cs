using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class HeartrateReader : MonoBehaviour
{
    public string m_Url = "https://clever-deer-30.localtunnel.me/heartrate/GET";

    private int m_Heartrate;

    void Start()
    {
        StartCoroutine(Wait(.5f));
    }

    public int GetHeartrate()
    {
        return m_Heartrate;
    }

    IEnumerator Wait(float seconds)
    {
        yield return new WaitForSeconds(seconds);

        StartCoroutine(GetInfo());
    }

    IEnumerator GetInfo()
    {
        UnityWebRequest www = UnityWebRequest.Get(m_Url);

        yield return www.SendWebRequest();

        //m_Heartrate = System.Convert.ToInt32(www.downloadHandler.text);
        //Debug.Log(m_Heartrate);

        int hr;
        if (System.Int32.TryParse(www.downloadHandler.text, out hr))
        {
            m_Heartrate = hr;
        }

        StartCoroutine(Wait(1f));
    }
}