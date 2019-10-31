
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class land_gift_sub : MonoBehaviour {

	public int m_id;
	public int m_is_chose;
	public int m_need_day = 0;
	public int m_can_get = 0;
	public int m_land_day = 0;
	public GameObject m_get;
	public GameObject m_ylq;
	public GameObject m_desc;
	public GameObject m_num;
	public GameObject m_view;
	public GameObject m_scro;
	public List<s_t_reward> rewards = new List<s_t_reward>();
	// Use this for initialization
	void Start () {
	
	}

	public void reset()
	{
		m_desc.GetComponent<UILabel>().text = string.Format(game_data._instance.get_t_language ("land_gift_sub.cs_26_55"), m_need_day.ToString ());//累计登陆{0}天可以领取以下奖励
		m_num.GetComponent<UILabel>().text = m_land_day.ToString() + "/" + m_need_day.ToString ();
		for (int i = 0; i < rewards.Count; ++i)
		{
			GameObject _obj = icon_manager._instance.create_reward_icon(rewards[i].type ,rewards[i].value1 ,rewards[i].value2 ,rewards[i].value3);
			if(m_is_chose == 1)
			{
				_obj.AddComponent<UIDragScrollView>().scrollView = m_view.GetComponent<UIScrollView>();
			}
			_obj.transform.parent = m_view.transform;
			_obj.transform.localScale = new Vector3(1,1,1);
			_obj.transform.localPosition = new Vector3(-225 + i * 99,-17,0);
			_obj.AddComponent<UIDragScrollView>().scrollView = m_scro.GetComponent<UIScrollView>(); 
		}
		if(m_can_get == 1)
		{
			m_get.SetActive(false);
			m_ylq.SetActive(true);
		}
		else
		{
			if(m_land_day < m_need_day)
			{
				m_get.SetActive(true);
				m_get.GetComponent<BoxCollider>().enabled = false;
				m_get.GetComponent<UISprite>().set_enable(false);
				m_ylq.SetActive(false);
			}
			else
			{
				m_get.SetActive(true);
				m_get.GetComponent<BoxCollider>().enabled = true;
				m_get.GetComponent<UISprite>().set_enable(true);
				m_ylq.SetActive(false);
			}
		}
	}

	public void click(GameObject obj)
	{
		if (obj.name == "get")
		{
			if(m_is_chose == 1)
			{
				root_gui._instance.show_select_item_gui(m_id,rewards,"huodong_land_lj",1);
			}
			else
			{
				s_message _message = new s_message();
				_message.m_type = "huodong_land_lj";
				_message.m_ints.Add (0);
				_message.m_ints.Add (m_id);
				cmessage_center._instance.add_message(_message);
			}
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
