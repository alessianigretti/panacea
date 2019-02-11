using System;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using UnityEngine;
using UnityEngine.Networking;

public class HeartrateReader : MonoBehaviour
{
    private string m_ServerUrl;
    private int m_Heartrate;

    void Start()
    {
        StartCoroutine(Wait(.5f));
        m_ServerUrl = GetLocalIPAddress() + ":8080/heartrate/GET";
    }

    public int GetHeartrate()
    {
        return m_Heartrate;
    }

    private static string GetLocalIPAddress()
    {
        var host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                return ip.ToString();
            }
        }
        throw new Exception("No network adapters with an IPv4 address in the system!");
    }

    IEnumerator Wait(float seconds)
    {
        yield return new WaitForSeconds(seconds);

        StartCoroutine(GetInfo());
    }

    IEnumerator GetInfo()
    {
        UnityWebRequest www = UnityWebRequest.Get(m_ServerUrl);

        yield return www.SendWebRequest();

        int hr;
        if (System.Int32.TryParse(www.downloadHandler.text, out hr))
        {
            m_Heartrate = hr;
        }

        StartCoroutine(Wait(1f));
    }
}