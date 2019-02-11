using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SaveData : MonoBehaviour
{
    public InputField m_Id, m_UserName;
    public Toggle m_UsingGA, m_Recording;

    [HideInInspector]
    public CachedData m_CachedData;

    public struct CachedData
    {
        private string cachedIp, cachedId, cachedName;
        private bool cachedUsingGA;

        public string Id
        {
            get { return cachedId; }
            set { cachedId = value; }
        }

        public string Name
        {
            get { return cachedName; }
            set { cachedName = value; }
        }

        public bool UsingGA
        {
            get { return cachedUsingGA; }
            set { cachedUsingGA = value; }
        }
    }
    

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    public void StoreData()
    {
        if (m_Recording.isOn)
        {
            m_CachedData.Id = m_Id.text;
            m_CachedData.Name = m_UserName.text;

            if (m_UsingGA.isOn)
            {
                m_CachedData.UsingGA = true;
            }
        }

        SceneManager.LoadScene(1);
    }
}
