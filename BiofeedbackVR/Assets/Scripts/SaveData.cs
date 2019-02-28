using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// Stores data from UI elements to CachedData struct.
/// </summary>
public class SaveData : MonoBehaviour
{
    public InputField m_Id, m_UserName;
    public Toggle m_UsingGA, m_Recording;

    [HideInInspector]
    public CachedData m_CachedData;

    /// <summary>
    /// Struct to temporarily cache user data.
    /// </summary>
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

    /// <summary>
    /// Called before the first frame update.
    /// Calls DontDestroyOnLoad on script to make user data persist throughout scenes.
    /// </summary>
    private void Start()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    /// <summary>
    /// Stores data to CachedData struct and loads first scene.
    /// </summary>
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
