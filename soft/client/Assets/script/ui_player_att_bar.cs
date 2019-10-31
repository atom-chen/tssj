
using UnityEngine;
using System.Collections;

public class ui_player_att_bar : MonoBehaviour {
	
	public GameObject m_bar;
	
	public int m_att_max_type = 0;
	public int m_att_cur_type = 0;
	public float m_att_max_value = 0;
	
	public float m_old_value = 0;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
		float _max = sys._instance.m_self.get_att((e_player_attr)m_att_max_type);
		float _cur = sys._instance.m_self.get_att ((e_player_attr)m_att_cur_type);
		
		if(m_att_max_value > 0.0f)
		{
			_max = m_att_max_value;
		}
		
		if(m_old_value != _cur)
		{
			m_old_value = _cur;
			m_bar.GetComponent<UISprite>().fillAmount = _cur / _max;
		}
		
	}
}
