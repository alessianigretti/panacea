using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerAnimation : MonoBehaviour
{
    public GameObject m_Camera;

    private Animation anim;

    void Start()
    {
        anim = GetComponent<Animation>();
    }

    void Update()
    {
        if (!anim.isPlaying && transform.position.z - m_Camera.transform.position.z <= 3f)
        {
            anim.Play();
        }
    }
}
