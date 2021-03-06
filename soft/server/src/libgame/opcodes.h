#ifndef __OPCODES_H__
#define __OPCODES_H__

enum opself_t
{
	BEG_SELF_MESSAGE		= 0,

	SELF_PLAYER_LOAD_SPORT,
	SELF_PLAYER_LOAD_LOOK,
	SELF_START_BOSS,
	SELF_PLAYER_LOAD_RECHARGE,
	SELF_START_GUILD_BOSS,
	SELF_PLAYER_LOAD_TREASURE,
	SLEF_PLAYER_LOAD_GUILD_APPLY,
	SLEF_PLAYER_BOSS_CHANGE_NAME,
	SELF_PLAYER_LOAD_SPORT_SAODANG,
	SELF_PLAYER_LOAD_HUODONG_MODIFY,
	SELF_PLAYER_LOAD_HUODONG_TANSUO,
	SELF_PLAYER_LOAD_GUILD_KICK,
	SELF_PLAYER_LOAD_LIBAO_EXCHANGE,

	END_SELF_MESSAGE		= 4999,
};

enum oppush_t
{
	BEG_PUSH_MESSAGE = 5000,

	PMSG_CHAT,
	PMSG_GUNDONG,
	PMSG_RECHARGE_HEITAO,
	PMSG_LIBAO,
	PMSG_LOGIN_HEITAO,
	PMSG_VOTE,
	PMSG_HUODONG,
	PMSG_RECHARGE_APPLE,
	PMSG_PVP_PUSH,
	PMSG_PVP_PULL,
	PMSG_PVP_FIGHT,
	PMSG_PVP_REWARD,
	PMSG_TEAM_ENTER,
	PMSG_BINGYUAN_FIGHT,
	PMSG_SOCIAL_TEAM_INVITE,
	PMSG_BINGYUAN_BUY,
	PMSG_BINGYUAN_REWARD,
	PMSG_TEAM_PULL,
	PMSG_DS_FIGHT,
	PMSG_MOFANG_POINT,
	PMSG_SOCIAL_INVITE_CODE_CREATE,
	PMSG_SOCIAL_INVITE_CODE_INPUT,
	PMSG_SOCIAL_INVITE_CODE_LEVEL,
	PMSG_SOCIAL_INVITE_CODE_PULL,
	PMSG_DS_TIME_BUY,
	PMSG_DS_GM,
	PMSG_GUILDFIGHT_LOOK_BUSHU,
	PMSG_GUILDFIGHT_LOOK_PIPEI,
	PMSG_GUILDFIGHT_BUSHU,
	PMSG_GUILDFIGHT_LOOK_ZHANJI,
	PMSG_GUILDFIGHT_FIGHT,
	PMSG_GUILDFIGHT_BUY,
	PMSG_GUILDFIGHT_REWARD,
	PMSG_GUILDFIGHT_MATCH,
	PMSG_GUILDFIGHT_BAOMING,
	PMSG_GUILDFIGHT_LOOK_XIUZHAN,
	PMSG_GUNDONG_SERVER,

	END_PUSH_MESSAGE = 9999,
};

enum opclient_t
{
	BEG_CLIENT_MESSAGE		= 10000,

	/// sys
	CMSG_ENTER_WORLD,
	CMSG_LEAVE_WORLD,
	
	/// player
	CMSG_CLIENT_LOGIN		= 10100,
	CMSG_PLAYER_NAME,
	CMSG_GM_COMMAND,
	CMSG_CLIENT_RELOAD,
	CMSG_PLAYER_TASK,
	CMSG_ACTIVE_REWARD,
	CMSG_ACTIVE_SCORE_REWARD,
	CMSG_RECHARGE,
	CMSG_FIRST_RECHARGE,
	CMSG_VIP_REWARD,
	CMSG_DJ,
	CMSG_DJTEN,
	CMSG_TILI_REWARD,
	CMSG_ONLINE_REWARD,
	CMSG_DAILY_SIGN,
	CMSG_PLAYER_LOOK,
	CMSG_RANDOM_EVENT_LOOK,
	CMSG_RANDOM_EVENT_GET,
	CMSG_PLAYER_ZSNAME,
	CMSG_PLAYER_CHECK,
	CMSG_DRESS_ON,
	CMSG_DRESS_OFF,
	CMSG_DRESS_BUY,
	CMSG_LIBAO,
	CMSG_PLAYER_TEMPLATE,
	CMSG_RECHARGE_CHECK_EX,
	CMSG_DRESS_UNLOCK,
	CMSG_DAILY_SIGN_REWARD,
	CMSG_DRESS_UNLOCK_ACHIEVE,
	CMSG_CHANGE_NAME,
	CMSG_CHENGHAO_ON,
	CMSG_PLAYER_QIECUO,
	CMSG_CHANGE_NALFLAG,

	/// item
	CMSG_ITEM_SELL			= 10200,
	CMSG_ITEM_APPLY,
	CMSG_ITEM_QUICK_APPLY,
	CMSG_SHOP_CHECK,
	CMSG_SHOP_REFRESH,
	CMSG_SHOP_BUY,
	CMSG_SHOP_XG,
	CMSG_ITEM_FENJIE,
	CMSG_SHOP_EQUIP,
	CMSG_SPORT_SHOP_BUY,
	CMSG_SPORT_MUBIAO,
	CMSG_TTT_SHOP_BUY,
	CMSG_TTT_SHOP_MUBIAO,
	CMSG_TTT_BAOZANG,
	CMSG_GUILD_SHOP_BUY,
	CMSG_GUILD_MUBIAO,
	CMSG_BOSS_SHOP_BUY,
	CMSG_ITEM_DIRECT_BUY,
	CMSG_GUILD_TIME_BUY,
	CMSG_ITEM_HECHENG,
	CMSG_ITEM_SELL_ALL,
	CMSG_HUIYI_SHOP,
	CMSG_LIEREN_SHOP,
	CMSG_HUIYI_LUCK_SHOP,
	CMSG_BY_SHOP_BUY,
	CMSG_BY_MUBIAO,
	CMSG_GUILD_SHOP_EX_BUY,
	CMSG_CHONGZHIFANPAI_BUY,
	CMSG_PET_SHOP_BUY,
	CMSG_PET_SHOP_REFRESH,
	CMSG_MOFANG_BUY,

	/// mission
	CMSG_MISSION_FIGHT_END	= 10300,
	CMSG_MISSION_REWARD,
	CMSG_MISSION_SAODANG,
	CMSG_HBB_LOOK,
	CMSG_HBB_REFRESH,
	CMSG_HBB_FIGHT_END,	
	CMSG_MISSION_GOUMAI,
	CMSG_TTT_FIGHT_END,
	CMSG_TTT_VALUE_LOOK,
	CMSG_TTT_VALUE,
	CMSG_TTT_REWARD,
	CMSG_TTT_CZ,
	CMSG_XJBZ_GET,
	CMSG_XJBZ_BUY,
	CMSG_YB_REFRESH,
	CMSG_YB_GW,
	CMSG_YB_ZH,
	CMSG_YB,
	CMSG_YB_JIASU,
	CMSG_YB_FINISH,
	CMSG_YB_LOOK,
	CMSG_YB_LOOK_EX,
	CMSG_YB_YBQ_FIGHT_END,
	CMSG_YB_REWARD,
	CMSG_ORE_FIGHT_END,
	CMSG_MISSION_FIRST,
	CMSG_TTT_SANXING,
	CMSG_TTT_SAODANG,
	CMSG_QIYU_FIGHT_END,
	CMSG_QIYU_CHECK,

	/// role
	CMSG_ZHENXING			= 10400,
	CMSG_ROLE_EQUIP,
	CMSG_CHOUKA,
	CMSG_ROLE_UPGRADE,
	CMSG_ROLE_TUPO,
	CMSG_ROLE_JINJIE,
	CMSG_ROLE_SUIPIAN,
	CMSG_ROLE_XUNLIAN,
	CMSG_ROLE_XUNLIAN_FINISH,
	CMSG_ROLE_SKILLUP,
	CMSG_ROLE_DRESS_ON,
	CMSG_ROLE_DUIHUAN,
	CMSG_ROLE_CHONGSHENG,
	CMSG_ROLE_FENJIE,
	CMSG_ROLE_ALL_EQUIP,
	CMSG_ROLE_SHENGPIN,
	CMSG_ROLE_XQ_LOOK,
	CMSG_ROLE_YH_LOOK,
	CMSG_ROLE_YH_SELECT,
	CMSG_ROLE_HUIYI_CHOU,
	CMSG_ROLE_HUIYI_JIHUO,
	CMSG_ROLE_HUIYI_ZHANPU,
	CMSG_ROLE_HUIYI_GAIYUN,
	CMSG_ROLE_HUIYI_FANPAI,
	CMSG_ROLE_SUIPIAN_GAIZAO,
	CMSG_ROLE_DUIXING,
	CMSG_ROLE_DUIXING_UP,
	CMSG_ROLE_DUIXING_ON,
	CMSG_ROLE_HOUYUAN,
	CMSG_GUANGHUAN_ON,
	CMSG_GUANGHUAN_LEVEL,
	CMSG_GUANGHUAN_INIT,
	CMSG_ROLE_BSKILL_LEVELUP,
	CMSG_PET_ON,
	CMSG_PET_GUARD,
	CMSG_PET_LEVEL,
	CMSG_PET_JINJIE,
	CMSG_PET_STAR,
	CMSG_PET_DUIHUAN,
	CMSG_PET_INIT,
	CMSG_PET_FENJIE,
	CMSG_ROLE_HUIYI_STAR,
	CMSG_ROLE_HUIYI_RESET,

	/// equip
	CMSG_EQUIP_ENHANCE		= 10500,
	CMSG_EQUIP_SELL,
	CMSG_EQUIP_GAIZAO,
	CMSG_EQUIP_GAIZAO1,
	CMSG_EQUIP_LOCK,
	CMSG_EQUIP_KC,
	CMSG_EQUIP_SUIPIAN,
	CMSG_EQUIP_STAR,
	CMSG_EQUIP_GAIZAO_TEN,
	CMSG_EQUIP_AUTO_ENHANCE,
	CMSG_EQUIP_JINLIAN,
	CMSG_EQUIP_INIT,
	CMSG_EQUIP_RONGLIAN,

	/// post
	CMSG_POST_LOOK			= 10600,
	CMSG_POST_GET,
	CMSG_POST_VIEW,

	/// sport
	CMSG_SPORT_LOOK			= 10700,
	CMSG_SPORT_TOP,
	CMSG_SPORT_FIGHT_END,
	CMSG_SPORT_REWARD,
	CMSG_SPORT_SHOP_VIEW,
	CMSG_SPORT_SHOP_REFRESH,
	CMSG_SPORT_SAODANG,

	/// social
	CMSG_CHAT				= 10800,
	CMSG_SOCIAL_LOOK,
	CMSG_SOCIAL_RAND,
	CMSG_SOCIAL_ADD,
	CMSG_SOCIAL_LOOK_NEW,
	CMSG_SOCIAL_AGREE,
	CMSG_SOCIAL_DELETE,
	CMSG_SOCIAL_SONG,
	CMSG_SOCIAL_SHOU,
	CMSG_CHAT_PLAYER,
	CMSG_TEAM_INVITE_LOOK,
	CMSG_SOCIAL_CODE_LOOK,

	/// boss
	CMSG_BOSS_LOOK			= 10900,
	CMSG_BOSS_LOOK_EX,
	CMSG_BOSS_FIGHT_END,
	CMSG_BOSS_ACTIVE_REWARD,
	CMSG_BOSS_ACTIVE_LOOK,
	CMSG_BOSS_ITEM_APPLY,
	CMSG_BOSS_HIT_REWARD,
	CMSG_BOSS_RANK,
	CMSG_BOSS_SAODANG,

	/// guild
	CMSG_GUILD_CREATE		= 11000,
	CMSG_GUILD_APPLY,
	CMSG_GUILD_AGREE,
	CMSG_GUILD_JOIN,
	CMSG_GUILD_OPEN,
	CMSG_GUILD_LIST_RECOMMEND,
	CMSG_GUILD_QUERY,
	CMSG_GUILD_MODIFY_ICON,
	CMSG_GUILD_MODIFY_BULLETIN,
	CMSG_GUILD_CHANGE_MEMBER_DUTY,
	CMSG_GUILD_SET_JOIN_CONDITION,
	CMSG_GUILD_SIGN_IN,
	CMSG_GUILD_KICK_MEMBER,
	CMSG_GUILD_LEAVE,
	CMSG_GUILD_DISMISS,
	CMSG_GUILD_MEMBER_VIEW,
	CMSG_GUILD_RANKING,
	CMSG_GUILD_ACTIVITY,
	CMSG_GUILD_SHOW_BOSS,
	CMSG_GUILD_BOSS_LOOK,
	CMSG_GUILD_BOSS_LOOK_EX,
	CMSG_GUILD_BOSS_GUAI_LOOK,
	CMSG_GUILD_BOSS_GUAI_FIGHT,
	CMSG_GUILD_BOSS_GUAI_FIGHT_END,
	CMSG_GUILD_BOSS_FIGHT,
	CMSG_GUILD_BOSS_FIGHT_END,
	CMSG_GUILD_SIGN_REWARD,
	CMSG_GUILD_GUWU,
	CMSG_GUILD_MESSAGE_VIEW,
	CMSG_GUILD_MESSAGE_ADD,
	CMSG_GUILD_MESSAGE_DELETE,
	CMSG_GUILD_MESSAGE_TOP,
	CMSG_GUILD_MISSION_BUY,
	CMSG_GUILD_MISSION_COMPLETE_REWARD,
	CMSG_GUILD_MISSION_CENG_REWARD,
	CMSG_GUILD_MISSION_RANKING,
	CMSG_GUILD_KEJI_OPEN,
	CMSG_GUILD_KEJI_UPLEVEL,
	CMSG_GUILD_KEJI_STUDY,
	CMSG_GUILD_KEJI_SKILLUP,
	CMSG_GUILD_TANHE,
	CMSG_GUILD_RED_VIEW,
	CMSG_GUILD_RED_DELIVER,
	CMSG_GUILD_RED_ROB,
	CMSG_GUILD_RED_TARGET,
	CMSG_GUILD_MISSION_COMPLETE_REWARD_VIEW,
	CMSG_GUILD_MODIFY_GUILD_NAME,
	CMSG_GIILD_JT_APPLY,
	CMSG_GUILD_JT_LOOK,
	CMSG_GUILD_JT_BUSHU,
	CMSG_GUILD_JT_FIGHT,
	CMSG_GUILD_JT_BUY,
	CMSG_GUILD_JT_REWARD,

	// rank
	CMSG_RANK_VIEW			= 12000,
	CMSG_RANK_TTT_VIEW,
	CMSG_RANK_XJBK_VIEW,
	CMSG_RANK_ORE_VIEW,
	CMSG_RANK_HUIYI_VIEW,

	// huodong
	CMSG_HUODONG4_VIEW		= 13000,
	CMSG_HUODONG4_PTTQ,
	CMSG_HUODONG_KAIFU_LOOK,
	CMSG_HUODONG_KAIFU_REWARD,
	CMSG_HUODONG_CZJH_BUY,
	CMSG_HUODONG_CZJH_GET,
	CMSG_HUODONG_VIEW,
	CMSG_HUODONG_LJCZ_VIEW,
	CMSG_HUODONG_LJCZ,
	CMSG_HUODONG_DBCZ_VIEW,
	CMSG_HUODONG_DBCZ,
	CMSG_HUODONG_DLSL_VIEW,
	CMSG_HUODONG_DLSL,
	CMSG_HUODONG_EXCHANGE_VIEW,
	CMSG_HUODONG_EXCHANGE,
	CMSG_HUODONG_VIP_LIBAO,
	CMSG_HUODONG_WEEK_LIBAO,
	CMSG_HUODONG_HYHD_VIEW,
	CMSG_HUODONG_HYHD,
	CMSG_HUODONG_DJDH_VIEW,
	CMSG_HUODONG_DJDH,
	CMSG_HUODONG_RQDL_VIEW,
	CMSG_HUODONG_RQDL,
	CMSG_HUODONG_JIERI_VIEW,
	CMSG_HUODONG_XHQD_VIEW,
	CMSG_HUODONG_TANBAO_VIEW,
	CMSG_HUODONG_TANBAO_DICE,
	CMSG_HUODONG_TANBAO_MUBIAO,
	CMSG_HUODONG_TANBAO_SHOP,
	CMSG_HUODONG_FANPAI_VIEW,
	CMSG_HUODONG_FANPAI,
	CMSG_HUODONG_FANPAI_CZ,
	CMSG_HUODONG_ZHUANPAN_VIEW,
	CMSG_HUODONG_ZHUANPAN,
	CMSG_HUODONG_MANYOU_VIEW,
	CMSG_HUODONG_MANYOU,
	CMSG_HUODONG_MANYOU_EVENT,
	CMSG_HUODONG_MANYOU_MUBIAO,
	CMSG_HUODONG_MANYOU_EVENT_REFRESH,
	CMSG_HUODONG_MANYOU_DEL,
	CMSG_HUODONG_CZJH_RS,
	CMSG_HUODONG_MOFANG_VIEW,
	CMSG_HUODONG_MOFANG_START,
	CMSG_HUODONG_MOFANG_ALL,
	CMSG_HUODONG_MOFANG_REFRESH,
	CMSG_HUODONG_MOFANG_RESET,
	CMSG_HUODONG_MOFANG_CHOU,
	CMSG_HUODONG_MOFANG_TARGET,
	CMSG_HUODONG_YUEKA_VIEW,
	CMSG_HUODONG_YUEKA_REWARD,
	CMSG_HUODONG_HUIGUI_REWARD,
	CMSG_HUODONG_ZHICHONG_VIEW,


	// treasure
	CMSG_TREASURE_EXPAND = 15000,
	CMSG_TREASURE_ENHANCE,
	CMSG_TREASURE_JINLIAN,
	CMSG_TREASURE_LOCK,
	CMSG_TREASURE_INIT,
	CMSG_TREASURE_HECHENG,
	CMSG_TREASURE_EQUICP,
	CMSG_TREASURE_VIEW,
	CMSG_TREASURE_PROTECT,
	CMSG_TREASURE_BUY,
	CMSG_TREASURE_FIGHT,
	CMSG_TREASURE_FIGHT_END,
	CMSG_TREASURE_SAODANG,
	CMSG_TREASURE_REPORT,
	CMSG_TREASURE_POINT,
	CMSG_TREASURE_REPORT_EX,
	CMSG_TREASURE_RONGLIAN,
	CMSG_TREASURE_ZHUZAO,
	CMSG_TREASURE_YIJIAN_SAODANG,
	CMSG_TREASURE_STAR,

	// pvp
	CMSG_PVP_VIEW = 16000,
	CMSG_PVP_REFRESH,
	CMSG_PVP_BUY,
	CMSG_PVP_FIGHT_END,
	CMSG_PVP_RANK,
	CMSG_PVP_LOOK,
	CMSG_PVP_ACTIVE,
	CMSG_TEAM_ENTER,
	CMSG_BINGYUAN_FIGHT_END,
	CMSG_TEAM_INVITE,
	CMSG_BINGYUAN_BUY_REWARD,
	CMSG_DS_FIGHT_BUY,
	CMSG_DS_FIGHT_END,
	CMSG_DS_ACTIVE,
	CMSG_DS_TIME_BUY,
	CMSG_PVP_GUILD_ZHANGKUANG_LOOK,
	CMSG_PVP_GUILD_ZHANJI_LOOK,
	CMSG_PVP_GUILD_FIGHT,

	TMSG_BUDAN = 19900,
	TMSG_GONGGAO,
	TMSG_RECHARGE_HEITAO,
	TMSG_KICK,
	TMSG_HUODONG,
	TMSG_PVP_PUSH,
	TMSG_PVP_PULL,
	TMSG_PVP_FIGHT,
	TMSG_PVP_REWARD,
	TMSG_TEAM_ENTER,
	TMSG_TEAM_INVITE,
	TMSG_BINGYUAN_FIGHT,
	TMSG_BINGYUAN_BUY,
	TMSG_BINGYUAN_REWARD,
	TMSG_TEAM_PULL,
	TMSG_HUODONG_MODIFY,
	TMSG_SERVER_STAT,
	TMSG_DS_FIGHT,
	TMSG_MOFANG_POINT,
	TMSG_INVITE_CODE_CREATE,
	TMSG_INVITE_CODE_INPUT,
	TMSG_INVITE_CODE_LEVEL,
	TMSG_INVITE_CODE_PULL,
	TMSG_DS_TIME_BUY,
	TMSG_DS_GM,
	TMSG_PVP_GUILD_LOOK_BUSHU,
	TMSG_PVP_GUILD_LOOK_PIPEI,
	TMSG_PVP_GUILD_BUSHU,
	TMSG_PVP_GUILD_LOOK_JINRIZHANJI,
	TMSG_PVP_GUILD_FIGHT,
	TMSG_PVP_GUILD_MATCH,
	TMSG_PVP_GUILD_BAOMING,
	TMSG_PVP_GUILD_REWARD,
	TMSG_PVP_GUILD_TARGET,
	TMSG_PVP_GUILD_LOOK_XIUZHAN,
	TMSG_GAG,
	TMSG_LIBAO_EXCHANGE,
	TMSG_CHIZHONG,

	END_CLIENT_MESSAGE		= 19999,
};

enum opserver_t
{
	BEG_SERVER_MESSAGE		= 30000,

	SMSG_CHAT,
	SMSG_GUNDONG,

	CMSG_ENTER_TEAM_SERVER,
	SMSG_ENTER_TEAM_SERVER,
	CMSG_CREATE_TEAM,
	SMSG_CREATE_TEAM,
	CMSG_ENTER_TEAM,
	SMSG_ENTER_TEAM,
	CMSG_LEAVE_TEAM,
	CMSG_KICK_TEAM,
	SMSG_LEAVE_TEAM,
	CMSG_PREPARE_TEAM,
	SMSG_PREPARE_TEAM,
	CMSG_FIGHT_TEAM,
	SMSG_FIGHT_TEAM,
	CMSG_MATCH_TEAM,
	SMSG_MATCH_TEAM,
	CMSG_END_MATCH_TEAM,
	SMSG_END_MATCH_TEAM,
	SMSG_MATCH_TEAM_TIMEOUT,
	CMSG_OPEN_TEAM,
	SMSG_OPEN_TEAM,
	CMSG_CHAT_TEAM,
	SMSG_CHAT_TEAM,
	CMSG_MOVE_TEAM,
	SMSG_MOVE_TEAM,
	CMSG_VIEW_TEAM_MEMBER,
	SMSG_VIEW_TEAM_MEMBER,
	CMSG_SOCIAL_INVITE,
	SMSG_INVITE_ADD,
	SMSG_INVITE_REMOVE,
	SMSG_INVITE_REMOVE_SOCIAL,
	SMSG_TEAM_EXIST,
	SMSG_TEAM_NOT_EXIST,
	SMSG_TEAM_FULL,
	SMSG_CHANGE_TEAM_STAT,
	CMSG_STOP_FIGHT_TEAM,
	SMSG_STOP_FIGHT_TEAM,
	SMSG_BINGYUAN_FIGHT_END,
	CMSG_INVITE_ALL,
	SMSG_INVITE_ALL,
	SMSG_CHANGE_REWARD_NUM,
	CMSG_VIEW_CHENGHAO_RANK,
	SMSG_VIEW_CHENGHAO_RANK,
	CMSG_TEAM_URGE,
	SMSG_TEAM_URGE,
	CMSG_LEADER_PREPARE,
	CMSG_TEAM_URGE_CHANGE,
	SMSG_TEAM_URGE_CHANGE,
	CMSG_VIEW_DS_RANK,
	SMSG_VIEW_DS_RANK,
	CMSG_QIECUO,
	SMSG_QIECUO,


	CMSG_DS_MATCH = 31000,
	SMSG_DS_MATCH,
	SMSG_DS_FIGHT_END,
	SMSG_DS_RESET,
	SMSG_DS_MATCH_TIMEOUT,
	CMSG_DS_MATCH_STOP,
	SMSG_DS_MATCH_STOP,
	SMSG_DS_MATCH_CD,

	SMSG_GUNDOG_SERVER = 32000,

	END_SERVER_MESSAGE		= 39999,
};

enum operror_t
{
	BEG_ERROR_MESSAGE		= 20000,
	ERROR_JEWEL,						// 钻石不足
	ERROR_GOLD,							// 金币不足
	ERROR_TILI,							// 体力不足
	ERROR_JJCPOINT,						// 竞技场点数不足
	ERROR_MWPOINT,						// 魔王点数不足
	ERROR_LEVEL,						// 等级不足
	ERROR_CAILIAO,						// 材料不足
	ERROR_TS,							// 探索次数不足
	ERROR_PASSWORD,						// 密码错误
	ERROR_PCK,							// pck错误
	ERROR_PCK_GOLD,						// pck金币错误
	ERROR_PCK_JEWEL,					// pck钻石错误
	ERROR_FENGHAO,						// 您的账号已被停封，请联系管理员
	ERROR_GAG,                          // 您已被禁言, 请联系管理员
	ERROR_SKILL_POINT,                  // 技能点不足 
	ERROR_XINPIAN,						// 数码芯片不足

	/// player
	ERROR_SIG				= 20100,	// sig错误
	ERROR_NAME_ILL,						// 非法名字
	ERROR_NAME_HAS,						// 名字已存在
	ERROR_NAME_EMPTY,					// 名字为空
	ERROR_NAME_LONG,					// 名字太长
	ERROR_NO_TEMPLATE,					// 头像不存在
	ERROR_TASK_FINIED,					// 任务已完成
	ERROR_TASK_PID,						// 任务存在前置
	ERROR_TASK_TJ,						// 任务条件未达成
	ERROR_ZHOUKA,						// 已经购买周卡
	ERROR_YUEKA,						// 已经购买月卡
	ERROR_HAS_RECHARGE_ID,				// 已经买过
	ERROR_RECHARGE_ID,					// 需要前置
	ERROR_DJ_NUM,						// 点金次数已满
	ERROR_TILI_REWARD,					// 今日已领
	ERROR_TILI_FULL,					// 体力已满
	ERROR_HAS_FIRST_REWARD,				// 已经领过了
	ERROR_ONLINE_REWARD_TIME,			// 领取时间未到
	ERROR_TILI_ADD,						// 购买次数达到上限
	ERROR_TS_ADD,						// 购买次数达到上限
	ERROR_RECHARGE,						// 充值验证失败
	ERROR_SCORE_NOT_ENOUTH,				// 任务积分不足
	ERROR_LIBAO_NO,						// 没有该礼包码
	ERROR_LIBAO_USED,					// 礼包码已被使用
	ERROR_LIBAO_PT,						// 礼包码平台错误
	ERROR_LIBAO_NUM,					// 您已经领取过该种礼包了
	ERROR_LOGIN,						// 登入失败请重新登入平台
	ERROR_HUODONG_TICKET,				// 奖券不足
	ERROR_BEKILL,						// 您的账号已经在其他设备上登录
	ERROR_HUODONG_TIME_OUT,				// 活动时间已到
	ERROR_ENERGY,						// 能量不足
	ERROR_SUIPIAN_NOT,					// 碎片数量不足
	ERROR_ENERGY_ADD,					// 购买能量次数达到上限
	ERROR_HONOR,						// 竞技点数数不足
	ERROR_FIGHT_TIME,					// 战斗请求过于频繁
	ERROR_PVP_MATCH,					// 未匹配到对手
	ERROR_INVALID_SOCIAL_CODE,			// 无效的邀请码
	ERROR_ERROR_SOCIAL_CODE,			// 无法使用邀请码

	/// item
	ERROR_ITEM_FULL			= 20200,	// 装备背包已满
	ERROR_ITEM_NULL,					// 物品不存在
	ERROR_SHOP_NULL,					// 商店类型不存在
	ERROR_SHOP_SELLED,					// 该物品已售空

	/// mission
	ERROR_MISSION_NOPEN		= 20300,	// 关卡未开放
	ERROR_MISSION_CISHU,				// 剩余次数不足
	ERROR_MISSION_REWARD_GET,			// 已经领过奖励了
	ERROR_MISSION_REWARD_STAR,			// 星星不足
	ERROR_MISSION_SAODANG_STAR,			// 未达到三星
	ERROR_MISSION_SAODANG_NUM,			// 免费扫荡次数不足
	ERROR_YB_FINISH,					// 该玩家已经结束运送
	ERROR_YB_MAX,						// 该玩家已经无法被抢夺
	ERROR_ORE_EMPTY,					// 该矿点已发生变化
	ERROR_ORE_CHANGE,					// 该矿点已被其他人抢先一步攻占
	ERROR_TREASURE_PROTECT,				// 该玩家处于免战保护
	ERROR_TREASURE_SUIPIAN_NO,			// 该玩家的碎片已被其他人抢先一步抢夺
	ERROR_TREASURE_SUIPIAN_FULL,		// 你已经拥有该碎片
	ERROR_TREASURE_BAG_FULL,			// 宝物格子已满
	ERROR_TREASURE_SAODANG,				// 抢夺5次不能对玩家使用
	ERROR_TEAM_ENTER_FAIL,				// 进入组队活动失败

	/// role
	ERROR_ROLE_FULL			= 20400,	// 伙伴已满
	ERROR_ROLE_MAXSTAR,					// 星数已满
	ERROR_ROLE_LOCK,					// 伙伴锁定
	ERROR_SHENGJI_LEVEL,				// 伙伴等级不足
	ERROR_PIECE_NOT_ENOUGH,				// 碎片不足
	ERROR_STONE_NOT_ENOUGH,				// 合成石不足
	ERROR_SELECT_TYPE,					// 合成类型错误
	ERROR_SELECT_ROLE,					// 伙伴选择错误
	ERROR_PET_FULL,						// 宠物太多，请先分解一些
	/// equip
	ERROR_EQUIP_ENHANCEUP	= 20500,	// 已到达强化上限
	ERROR_GAIZAO_MAX,					// 无法改造
	ERROR_EQUIP_FULL,					// 装备已满
	ERROR_EQUIP_LOCK,					// 装备锁定

	/// sport
	ERROR_SPORT_ADD			= 20600,	// 购买次数达到上限
	ERROR_SPORT_REWARD,					// 条件未达成
	ERROR_SPORT_HAD_REWARD,				// 重复领取
	ERROR_SPORT_NUM,					// 次数不足

	/// boss
	ERROR_BOSS_NEXT_TIME	= 20700,	// 在复活中
	ERROR_BOSS_TIME,					// BOSS战未开启
	ERROR_BOSS_HAS_GW,					// 已经鼓舞过了

	/// social
	ERROR_CHAT_TEXT_LENGTH	= 20800,	// 输入过长
	ERROR_SOCIAL_MAX_ADD,				// 好友数量达到上限
	ERROR_SOCIAL_MAX_APPLY,				// 申请数量达到上限
	ERROR_SOCIAL_HAS_ADD,				// 该玩家已经是您的好友了
	ERROR_SOCIAL_HAS_APPLY,				// 您已经向该玩家申请过了
	ERROR_SOCIAL_MAX_ADD_TARGET,		// 对方好友数量达到上限
	ERROR_CHAT_NOT_ONLINE,				// 该玩家不在线
	ERROR_CHAT_TIME,					// 发言间隔过短

	/// guild
	ERROR_DIAMOND_NOT_ENOUGH			= 20900,		// 军团创建费用不足
	ERROR_JOIN_GUILD_TIME_LIMITED,						// 您退出军团还未到24小时，请稍后再尝试
	ERROR_GUILD_FULL,									// 该军团人数已满，请尝试加入其他军团
	ERROR_JOIN_GUILD_CONDITION_LIMITED,					// 您未达到军团加入条件，请选择加入其他军团
	ERROR_RECOMMEND_GUILD_NULL,							// 没有符合你的公会
	ERROR_GUILD_QUERY_NULL,								// 没有找到你搜索的公会
	ERROR_GUILD_AUTHORITY_REFUSE,						// 权限不足
	ERROR_MEMBER_NOT_EXIT,								// 该成员不存在或已经离开公会
	ERROR_CHANGE_DUTY,									// 您尚未对该成员职位做任何更改
	ERROR_GUILD_BF_INVALID,								// 公会战斗力设置不合法
	ERROR_SIGN_IN_INVALID,								// 签到类型错误
	ERROR_HAS_SIGN_IN,									// 今天已经签到了
	ERROR_LEAVE_GUILD_LIMITED,							// 请将其他成员设置为军长后才可离开公会
	ERROR_BOSS_HAS_OPEN,								// 军团探险已经开启
	ERROR_BOSS_COUNT_LIMITED,							// 军团探险本周开启次数已达上限
	ERROR_GUILD_BELONG,									// 你已经是军团的一员了
	ERROR_OP_SELF,										// 不能对自己操作
	ERROR_GUILD_SENATOR_LIMITED,						// 副军团长最多只能有三个
	ERROR_CONTRIBUTION,									// 贡献值不足
	ERROR_ITEM_EMPTY,									// 物品已售罄
	ERROR_BUY_TIMES_LIMITED,							// 每天只能购买一次
	ERROR_MEMBER_LEAVE,									// 你已被踢出该军团
	ERROR_BOSS_CLOSE,									// 军团探险已结束
	ERROR_BOSS_KILL,									// 该守卫已被击杀
	ERROR_BOSS_FIGHT,									// 该守卫交战中
	ERROR_BOSS_HAS_ATTACK,								// 您已经攻击过了
	ERROR_GUILD_KILL,									// 您已不是军团的一员了
	ERROR_GUILD_APPLY,									// 该玩家已经加入其他家族了
	ERROR_GUILD_BOX,									// 该宝箱已被别的玩家抢先开启
	ERROR_GUILD_BOSS_KILL,								// boss刚刚已被其他家族成员击杀
	ERROR_GUILD_EXIT_SEVEN,								// 你被军团踢出3次，7天内无法加入任何军团
	ERROR_GUILD_ATTACK_LIMIT,							// 当天加入军团，无法打军团副本
	ERROR_GUILD_PVP_LOOK,								// 军团战发生错误，请稍后重试
	ERROR_GUILD_PVP_MEMBER,								// 军团战人数不足
	ERROR_GUILD_PVP_FIGHT_NUM,							// 该对手刚刚已被其他家族成员击杀
	ERROR_GUILD_PVP_FIGHT_GONGPO,						// 该据点刚刚已被其他家族成员击破
	ERROR_GUILD_PVP_FIGHT_END,							// 军团战已结束
	ERROR_GUILD_PVP_ATTACK_TIME,						// 加入军团未过24小时，无法参与军团战
	ERROR_GUILD_PVP_BAOMING,							// 您的家族已报名参加军团战，现在无法退出军团

	ERROR_FIGHT_ORE			= 29000,					// 该矿点已被其他人抢先一步攻占
	ERROR_FIGHT_YB,										// 该玩家已被截光了
	ERROR_FIGHT_ZUOBI,									// 作弊
	ERROR_FIGHT_TREASURE,								// 该玩家的碎片已被其他人抢先一步抢夺
	ERROR_FIGHT_YB_FINISH,								// 该玩家已经结束运送

	END_ERRORT_MESSAGE		= 29999,
};

struct resource
{
	enum resource_t
	{
		GOLD			= 1,
		JEWEL			= 2,
		TILI			= 3,
		EXP				= 4,
		ZHANHUN			= 5,
		HEJIN			= 6,
		YUANLI			= 7,
		ACTIVE			= 8,
		VIP_EXP			= 9,
		CONTRIBUTION	= 10,
		MW_MEDAL		= 13,
		JJ_POINT		= 14,
		ENERGY			= 15,
		MW_COUNT		= 18,
		DRESS_TUZHI		= 19,
		LUCK_POINT		= 20,
		HUIYI_POINT		= 21,
		LIEREN_POINT	= 22,
		BINGJING		= 24,
		XINPIAN			= 27,
		YOUQINGDIAN		= 29,
	};
};


enum logmode_t {
	LOG_RESOURCE,
	LOG_ITEM,
	LOG_ROLE,
	LOG_EQUIP,
	LOG_TREASURE,
	LOG_LOGIN,
	LOG_HUODONG,
	LOG_STATISTICS,
	LOG_RECHARGE,
};

enum logop_t {
	LOG_ADD,
	LOG_DEC,
};

enum logeway_t {
	LOGWAY_EQUIP_SUIPIAN = 1000,	//	装备碎片
	LOGWAY_EQUIP_SELL,				//  装备分解
	LOGWAY_EQUIP_GAIZAO,			//  装备改造
	LOGWAY_EQUIP_SX,				//  装备升星
	LOGWAY_EQUIP_JINLIAN,           //  装备精炼
	LOGWAY_EQUIP_INIT,				//  装备重生
	LOGWAY_EQUIP_KC,				//  装备扩充
	LOGWAY_EQUIP_ENHANCE,			//  装备强化
	LOGWAY_EQUIP_RONGLIAN,			//  装备熔炼


	LOGWAY_ROLE_CHOUKA = 2000,		//  伙伴抽卡
	LOGWAY_ROLE_TUPO,				//  伙伴突破
	LOGWAY_ROLE_JINJIE,				//  伙伴进阶
	LOGWAY_ROLE_DUIHUAN,			//  伙伴兑换
	LOGWAY_ROLE_SKILL,				//  伙伴技能
	LOGWAY_ROLE_INIT,				//  伙伴重生
	LOGWAY_ROLE_CHONGNENG,			//  伙伴充能
	LOGWAY_ROLE_SUIPIAN,			//  伙伴碎片
	LOGWAY_ROLE_FENJIE,				//  伙伴分解
	LOGWAY_ROLE_XINQING,			//  伙伴约会
	LOGWAY_ROLE_SHENGPIN,			//  伙伴升品
	LOGWAY_ROLE_HUIYI_CHOU,			//  伙伴回忆抽
	LOGWAY_ROLE_HUIYI_JIHUO,		//  伙伴回忆收集
	LOGWAY_ROLE_FATE_GAIYUN,		//  伙伴占卜改运
	LOGWAY_ROLE_FATE_FANPAI,		//  伙伴占卜翻牌
	LOGWAY_ROLE_SUIPIAN_GAIZAO,		//  伙伴碎片改造
	LOGWAY_ROLE_DUIXING_UP,			//  队形升级
	LOGWAY_ROLE_GUANGHUAN_INIT,		//  光环重生
	LOGWAY_ROLE_GUANGHUAN_LEVEL,	//  光环升级
	LOGWAY_ROLE_BSKILLUP,			//  被动技能
	LOGWAY_PET_SKILLUP,				//  宠物升级
	LOGWAY_PET_JINJIE,				//  宠物进阶
	LOGWAY_PET_STAR,				//  宠物升星
	LOGWAY_PET_DUIHUAN,				//  宠物兑换
	LOGWAY_PET_FENJIE,				//  宠物分解
	LOGWAY_PET_INIT,				//  宠物重生
	LOGWAY_ROLE_HUIYI_STAR,         //  回忆升星
	LOGWAY_ROLE_HUIYI_RESET,        //  回忆星级重置


	LOGWAY_TREASURE_KC = 3000,		//  宝物扩充
	LOGWAY_TERASURE_JINLIAN,		//  宝物精炼
	LOGWAY_TREASURE_HECHENG,		//  宝物合成
	LOGWAY_TREASURE_ENHANCE,		//  宝物强化
	LOGWAY_TREASURE_INIT,			//  宝物重生
	LOGWAY_TREASURE_PROTEXT,		//  宝物免战
	LOGWAY_TREASURE_BUY,			//  宝物免战购买
	LOGWAY_TREASURE_ROB,			//  宝物抢夺
	LOGWAY_TREASURE_ROB_SAODANG,    //  宝物扫荡
	LOGWAY_TREASURE_RONGLIAN,		//  宝物熔炼
	LOGWAY_TREASURE_ZHUZAO,			//  宝物铸造
	LOGWAY_TREASURE_ROB_YIJIANSAODANG,//  宝物一键扫荡
	LOGWAY_TREASURE_STAR,			//  宝物升星


	LOGWAY_SHOP_BUY = 4000,			//  商店购买
	LOGWAY_SHOP_REFRESH,			//  商店刷新
	LOGWAY_ITEM_SELL,				//  物品出售
	LOGWAY_ITEM_APPLY,				//  物品使用
	LOGWAY_GAIZAOSHI_BUY,			//  改造石购买
	LOGWAY_MUBIAO_GUILD_BUY,		//  家族目标奖励购买
	LOGWAY_MUBIAO_TTT_BUY,			//  星河秘境目标奖励购买
	LOGWAY_MUBIAO_SPORT_BUY,		//  竞技场目标奖励购买
	LOGWAY_TIME_GUILD_SHOP,			//  家族限时商店
	LOGWAY_ITEM_HECHENG,			//  物品合成
	LOGWAY_HUIYI_SHOP,				//  回忆商店
	LOGWAY_LIEREN_SHOP,				//  猎人商店
	LOGWAY_LUCK_SHOP,				//  幸运商店
	LOGWAY_TANBAO_MUBIAO,			//  探宝目标
	LOGWAY_TANBAO_SHOP,				//  探宝商店
	LOGWAY_BINGYUAN_SHOP,			//  冰原商店
	LOGWAY_BINGYUAN_MUBIAO,			//  冰原目标
	LOGWAY_GUILD_SHOP_EX,			//  家族商店EX
	LOGWAY_CHONGZHIFANPAI_SHOP,		//  充值翻牌商店
	LOGWAY_CHONGWU_SHOP,			//  宠物商店
	LOGWAY_CHONGWU_SHOP_REFRESH,	//  宠物商店刷新
	LOGWAY_MOFANG_SHOP,				//  魔方商店
	

	LOGWAY_MISSION_END = 5000,		//  副本战斗
	LOGWAY_MISSION_SAODANG,			//  副本扫荡
	LOGWAY_MISSION_BUY,				//  副本购买
	LOGWAY_MISSION_REWARD,			//  副本星数奖励
	LOGWAY_MISSION_FIRST,           //  副本首次通关奖励
	LOGWAY_MISSION_QIYU,			//  副本奇遇挑战

	LOGWAY_SPORT_FIGHT_END = 5100,	//  竞技场战斗
	LOGWAY_SPORT_REWARD,			//  竞技场奖励
	LOGWAY_SPORT_SAODANG,			//  竞技场扫荡
	
	LOGWAY_HBB_END = 5200,			//  伙伴副本
	LOGWAY_HBB_REFRESH,				//  伙伴副本刷新

	LOGWAY_TTT_END = 5300,			//  星河秘境副本
	LOGWAY_TTT_CZ,					//  星河秘境重置
	LOGWAY_TTT_REWARD,				//  星河秘境奖励
	LOGWAY_TTT_MIBAO,				//  星河秘境秘宝
	LOGWAY_TTT_SANXING,				//  星河秘境三星
	LOGWAY_TTT_SAODANG,				//  星河秘境扫荡

	LOGWAY_YB_REFRESH = 5400,		//  押镖刷新
	LOGWAY_YB_GW,					//  押镖鼓舞
	LOGWAY_YB_ZH,					//  押镖召唤
	LOGWAY_YB_JIASU,				//  押镖加速
	LOGWAY_YB_FINISH,				//  押镖立即结束
	LOGWAY_YBQ,						//  押镖抢夺
	LOGWAY_YB_REWARD,				//  押镖奖励

	LOGWAY_ORE = 5500,				//  金币副本

	LOGWAY_BOSS_ACTIVE = 5600,		//  Boss战目标
	LOGWAY_BOSS_END,				//  Boss战
	LOGWAY_BOSS_SAODANG,			//  Boss扫荡

	LOGWAY_PVP_BUY = 5700,			//  猎人大会购买
	LOGWAY_PVP_FIGHT_END,			//  猎人大会战斗
	LOGWAY_PVP_REFRESH,				//  猎人大会刷新
	LOGWAY_PVP_ACTIVE,				//  猎人活跃任务

	LOGWAY_BINGYUAN_BUY = 5800,		//  冰原购买奖励次数
	LOGWAY_BINGYUAN_FIGHT,

	LOGWAY_DS_BUY = 5900,			// 大师联赛购买次数
	LOGWAY_DS_FIGHT,
	LOGWAY_DS_TARGET,
	LOGWAY_DS_TIME_BUY,



	LOGWAY_GUILD_SIGN_IN = 6000,	//  军团膜拜
	LOGWAY_GUIILD_CREATE,			//  军团创建
	LOGWAY_GUILD_TANHE,				//  军团弹劾
	LOGWAY_GUILD_MISSION_BUY,       //  军团副本购买
	LOGWAY_GUILD_MISSION_COMPLETE_REWARD,	// 军团关卡过关奖励
	LOGWAY_GUILD_MISSION_SHILIAN_REWARD,	// 军团试炼奖励
	LOGWAY_GUILD_MISSION_END,		// 军团副本战斗
	LOGWAY_GUILD_KEJI_STUDY,		// 军团科技学习
	LOGWAY_GUILD_KEJI_LEVELUP,		// 军团科技升级
	LOGWAY_GUILD_RED_DELIVER,		// 军团红包
	LOGWAY_GUILD_RED_TARGET,		// 红包成就
	LOGWAY_GUILD_RED_ROB,			// 红包抢夺
	LOGWAY_GUILD_CHANGE_NAME,		// 家族改名
	LOGWAY_GUILD_PVP_GONGPO,        // 攻破奖励
	LOGWAY_GUILD_PVP_BUY,           // 攻打次数购买
	LOGWAY_GUILD_PVP_FIGHT,			// 军团战战斗
	
	LGOWAY_GM_COMMAND = 7000,		//  GM
	LOGWAY_TASK,					//  任务	
	LOGWAY_ACTIVE,					//  目标
	LOGWAY_ACTIVE_REWARD,			//  目标箱子
	LOGWAY_FIRST_RECHARGE,			//  首冲
	LOGWAY_VIP_REWARD,				//  VIP奖励
	LOGWAY_ONLINE_REWARD,			//  在线奖励
	LOGWAY_DAILY_SIGN,				//  签到
	LOGWAY_LIBAO,					//  礼包
	LOGWAY_POST,					//  邮件
	LOGWAY_DIANJING,				//  炼金
	LOGWAY_LEVEL,					//  升级
	LOGWAY_RECHARGE,				//  充值
	LOGWAY_DAILY_SIGN_REWARD,		//  签到30天
	LOGWAY_SOCIAL_SHOU,				//  获取赠送能量
	LOGWAY_DRESS_UNLOCK,			//  时装解锁
	LOGWAY_DRESS_UNLOCK_ACHIEVE,	//  时装成就解锁
	LOGWAY_CHANGE_NAME,				//  换名字
	LOGWAY_CHANGE_NALFLAG,			//修改国籍


	LOGWAY_CZJH = 8000,				//  充值计划
	LOGWAY_CZJH_BUY,				//  充值计划购买
	LOGWAY_PTTQ,					//  普天同庆
	LOGWAY_KAIFU_BUY,				//  开服购买	
	LOGWAY_KAIFU_REWARD,			//  开服奖励
	LOGWAY_VIP_LIBAO_DAILY,			//  vip每日礼包
	LOGWAY_WEEK_LIBAO,				//  每周礼包
	LOGWAY_CZJHRS,					//  充值计划人数


	LOGWAY_HUODONG_CZFL = 9000,		// 充值返利活动
	LOGWAY_HUODONG_DBCZ,			// 单笔充值活动
	LOGWAY_HUODONG_DLSL,			// 登录送礼活动
	LOGWAY_HUODONG_ZKFS,			// 折扣贩售活动
	LOGWAY_HUODONG_HYHD,			// 活跃活动活动
	LOGWAY_HUODONG_RQDL,			// 日期登录活动
	LOGWAY_HUODONG_DJDH,			// 道具兑换活动
	LOGWAY_HUODONG_TANBAO_DICE,     // 探宝活动
	LOGWAY_HUODONG_CZFP,			// 充值翻牌
	LOGWAY_HUODONG_CZFP_CZ,			// 充值翻牌重置
	LOGWAY_HUODONG_ZHUANPAN,		// 时装转盘
	LOGWAY_HUODONG_TS,				// 太空探索
	LOGWAY_HUODONG_MOFANG,			// 九宫魔方
	LOGWAY_HUODONG_YKJJ,            // 月卡基金
	LOGWAY_HUODONG_YXHG,            // 英雄回归
};

enum const_t
{
	CONST_PLAN = 0,			// 成长计划价格
	CONST_CHOUKA,			// 钻石招募价格
	CONST_CHOUKA_TEN,		// 钻石招募10次价格
	CONST_MINGYUN,			// 命运指针价格
	CONST_MINGYUN_FIVE,		// 命运指针5次价格
	CONST_FYJG,				// 发言间隔
	CONST_CZJH,				// 充值比例
	CONST_JYGZJG,			// 基因改造价格
	CONST_GHJX,				// 工会捐献档位
};

#endif
