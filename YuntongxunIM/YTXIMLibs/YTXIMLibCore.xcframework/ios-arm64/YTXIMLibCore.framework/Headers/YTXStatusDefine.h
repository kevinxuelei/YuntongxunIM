//
//  YTXStatusDefine.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXStatusDefine_h
#define YTXStatusDefine_h


///添加好友来源
typedef NS_ENUM(NSInteger, YTXAddFriendSourceType) {
    YTXAddFriendSourceType_SEARCH = 0,     //搜索
    YTXAddFriendSourceType_GROUP  = 1, // 从群组中添加
    YTXAddFriendSourceType_WITH_CODE = 2,      //通过扫码添加
    
};
 
/*
 *  消息类型
 */
typedef NS_ENUM(NSInteger, YTXMessageContentType) {
    YTXMessageContentTypeText = 101,            /// 文本消息
    YTXMessageContentTypeImage = 102,           /// 图片消息
    YTXMessageContentTypeAudio = 103,           /// 语音消息
    YTXMessageContentTypeVideo = 104,           /// 视频消息
    YTXMessageContentTypeFile = 105,            /// 文件消息
    YTXMessageContentTypeAt = 106,              /// @消息
    YTXMessageContentTypeMerge = 107,           /// 合并消息
    YTXMessageContentTypeCard = 108,            /// 名片消息
    YTXMessageContentTypeLocation = 109,        /// 位置消息
    YTXMessageContentTypeCustom = 110,          /// 自定义消息
    YTXMessageContentTypeRevokeReciept = 111,   /// 撤回消息回执
    YTXMessageContentTypeC2CReciept = 112,      /// C2C已读回执
    YTXMessageContentTypeTyping = 113,          /// 正在输入状态
    YTXMessageContentTypeQuote = 114,           /// 引用消息
    YTXMessageContentTypeFace = 115,            /// 动图消息
    /// 以下皆是通知消息枚举
    YTXMessageContentTypeFriendAppApproved = 1201,              /// 同意加好友申请通知
    YTXMessageContentTypeFriendAppRejected = 1202,              /// 拒绝加好友申请通知
    YTXMessageContentTypeFriendApplication = 1203,              /// 加好友通知
    YTXMessageContentTypeFriendAdded = 1204,                    /// 添加好友通知
    YTXMessageContentTypeFriendDeleted = 1205,                  /// 删除好友通知
    YTXMessageContentTypeFriendRemarkSet = 1206,                /// 设置好友备注通知
    YTXMessageContentTypeBlackAdded = 1207,                     /// 加黑名单通知
    YTXMessageContentTypeBlackDeleted = 1208,                   /// 移除黑名单通知
    YTXMessageContentTypeConversationOptChange = 1300,          /// 会话免打扰设置通知
    YTXMessageContentTypeUserInfoUpdated = 1303,                /// 个人信息变更通知
    YTXMessageContentTypeGroupCreated = 1501,                   /// 群创建通知
    YTXMessageContentTypeGroupInfoSet = 1502,                   /// 更新群信息通知
    YTXMessageContentTypeJoinGroupApplication = 1503,           /// 申请加群通知
    YTXMessageContentTypeMemberQuit = 1504,                     /// 群成员退出通知
    YTXMessageContentTypeGroupAppAccepted = 1505,               /// 同意加群申请通知
    YTXMessageContentTypeGroupAppRejected = 1506,               /// 拒绝加群申请通知
    YTXMessageContentTypeGroupOwnerTransferred = 1507,          /// 群主更换通知
    YTXMessageContentTypeMemberKicked = 1508,                   /// 群成员被踢通知
    YTXMessageContentTypeMemberInvited = 1509,                  /// 邀请群成员通知
    YTXMessageContentTypeMemberEnter = 1510,                    /// 群成员进群通知
    YTXMessageContentTypeDismissGroup = 1511,                   /// 解散群通知
    YTXMessageContentTypeIsPrivateMessage = 1701,               /// 阅后即焚通知
};


///加好友验证方式
typedef NS_ENUM(NSInteger, YTXAllowType) {
    YTX_ALLOW_TYPE_ALLOW_ANY = 0,     // 允许任何人添加自己为好友
    YTX_ALLOW_TYPE_NEED_CONFIRM  = 1, // 需要经过自己确认才能添加自己为好友
    YTX_ALLOW_TYPE_DENY_ANY = 2,      //不允许任何人添加自己为好友
    
};
///性别
typedef NS_ENUM(NSInteger, YTXGenderType) {
    YTX_GENDER_UNKNOWN = 0,     //  未设置性别
    YTX_GENDER_FEMALE  = 1,    // 女
    YTX_GENDER_MALE = 2,      //男
    
};
///处理请求状态，好友 / 群组
typedef NS_ENUM(NSInteger, YTXHandleStatus) {
    YTXHandleStatus_UNTREATED = 0,     //  未处理
    YTXHandleStatus_AGREE = 1,    // 同意
    YTXHandleStatus_REJECT = 2,      //   拒绝
    
};
///好友申请的类型
typedef NS_ENUM(NSInteger, YTXApplicationType) {
    YTX_SNS_APPLICATION_SENT_ALL = 0,     //  全部
    YTX_SNS_APPLICATION_SENT_TO_ME = 1,     //  发给我的好友申请 / 加群申请
    YTX_SNS_APPLICATION_SENT_BY_ME  = 2,    //  我发起的好友申请  / 加群申请
};
///群组类型
typedef NS_ENUM(NSInteger, YTXGroupType) {
    YTXNormalGroupType = 1, // 普通群
    YTXSuperGroupType  = 2, // 超级群
};
///群成员角色
typedef NS_ENUM(NSInteger, YTXGroupRole) {
    YTXGroupOwnerRole  = 1, // 群主
    YTXGroupAdminRole  = 2, // 管理员
    YTXGroupMemberRole = 3, // 普通成员
    
};
///群@类型
typedef NS_ENUM(NSInteger, YTXGroupAtType) {
    YTXGroupAtNormalType = 0,   // at 其他人
    YTXGroupAtMeType     = 1,   // at 我
    YTXGroupAtAllType    = 2,   // at 所有人
    YTXGroupAtAllAtMeType = 3,  // at 所有人并且at我
};
///会话类型
typedef NS_ENUM(NSUInteger, YTXConversationType) {
    YTXConversationType_PRIVATE = 1, //单聊
    YTXConversationType_GROUP   = 2, //群聊
    YTXConversationType_SYSTEM  = 3, //系统消息
    YTXConversationType_CUSTOM  = 5, //自定义消息
};
///链接状态
typedef NS_ENUM(NSInteger, YTXConnectionStatus) {
    YTXConnectionStatus_CONNECTED = 0, //连接成功
    YTXConnectionStatus_CONNECTING = 1, //连接中
    YTXConnectionStatus_DISCONNECTED = 2, //正常断开连接。
    YTXConnectionStatus_NETWORK_UNAVAILABLE = 3, //网络不可用
    YTXConnectionStatus_CONNECTION_CLOSED = 4, //连接关闭
    YTXConnectionStatus_KICKED_OFFLINE_BY_OTHER_CLIENT = 6, //用户账户在其他设备登录，本机会被踢掉线
    YTXConnectionStatus_WEBSOCKET_UNAVAILABLE = 7, //连接失败
    YTXConnectionStatus_WEBSOCKET_ERROR = 8, //websocket 报错
    YTXConnectionStatus_BLOCKED = 9, //用户被封禁
    YTXConnectionStatus_DOMAIN_INCORRECT = 12, //域名错误
    YTXConnectionStatus_DISCONNECT_BY_SERVER = 13, //服务器主动断开
    YTXConnectionStatus_REDIRECT = 14, //重定向
    YTXConnectionStatus_APPKEY_IS_FAKE = 20, //appkey 不正确
    YTXConnectionStatus_REQUEST_NAVI = 201, //开始请求导航
    YTXConnectionStatus_RESPONSE_NAVI = 202, //请求导航结束
    YTXConnectionStatus_RESPONSE_NAVI_ERROR = 203, //请求导航失败
    YTXConnectionStatus_RESPONSE_NAVI_TIMEOUT = 204, //请求导航超时
    YTXConnectionStatus_ULTRALIMIT = 1101, //互踢次数过多（count > 5），此时可能出现：在其它他设备登陆有 reconnect 逻辑
};
///接收状态
typedef NS_ENUM(NSUInteger, YTXReceivedStatus) {
    YTXReceivedStatus_UNREAD = 0,//未读
    YTXReceivedStatus_READ = 1, //已读
    YTXReceivedStatus_LISTENED = 2, //已听，语音消息
    YTXReceivedStatus_DOWNLOADED = 4, //已下载
    YTXReceivedStatus_RETRIEVED = 8, //已经被其他登录的多端收取过
    YTXReceivedStatus_MULTIPLERECEIVE = 16,  //被多端同时收取
};

typedef NS_ENUM(NSUInteger, YTXMessageType) {
    // 1-499 基本消息
    YTXMessageType_Text = 1,// 文本消息
    YTXMessageType_Voice =  2,// 声音消息
    YTXMessageType_Video = 3,// 视频消息
    YTXMessageType_Picture = 4, // 图片消息
    YTXMessageType_Location = 5,// 位置消息
    YTXMessageType_File = 6, // 文件（压缩）消息
    YTXMessageType_FileFull = 7, // 文件（非压缩）
    YTXMessageType_Merger = 8, // 合并消息
    YTXMessageType_Transfer = 9,  // 逐条转发
    YTXMessageType_Custom = 10, // 自定义消息
    YTXMessageType_AtText = 11, // @消息
    YTXMessageType_Quote = 12,  // 引用消息
    YTXMessageType_Card = 13, // 卡片消息
    YTXMessageType_Typing = 14,  // 输入状态消息
    YTXMessageType_BurnAfterReading = 15,  // 阅后即焚消息
    YTXMessageType_Face = 16, // Face消息
    YTXMessageType_Share = 17,  // 分享消息
    YTXMessageType_TextAndPicture = 18, // 图文混排消息
    YTXMessageType_TransferFile = 19,  // 转发文件
    YTXMessageType_SayHi = 20,  // 打招呼
    YTXMessageType_Clap = 21,  //  拍一拍
    YTXMessageType_Chain = 22,  // 接龙消息
    
    // 700-799 通用动作消息
    YTXMessageType_CurrencyHandleBegin  = 700,
    YTXMessageType_VoiceReaded = 701, // 语音已读消息
    YTXMessageType_Revoke = 702, // 撤回消息
    YTXMessageType_HasReadReceipt  = 703, // 单聊已读回执消息
    YTXMessageType_EraserReceipt  = 704, // 数据擦除
    YTXMessageType_SyncReadStatus  = 705, // 已读状态多端同步消息

};

///通知消息级别 - 免打扰状态（免打扰状态
typedef NS_ENUM(NSInteger, YTXNotificationLevelType) {
    YTXNotificationLevelType_ReceiveUnSet     = 0,   // 0：未设置（向上查询群或者APP级别设置）// 存量数据中 0 表示未设置
    YTXNotificationLevelType_ReceiveAllMessage    = 1,   // 全部消息通知（接收全部消息通知 -- 显示指定关闭免打扰功能）
    YTXNotificationLevelType_ReceiveGroupAtMessage    = 2,   //群聊超级群仅 @ 消息通知（现在通知）单聊代表全部消息通知
    YTXNotificationLevelType_ReceiveGroupAtOneMessage  = 3, //@ 指定用户通知
    
    YTXNotificationLevelType_ReceiveGroupAtAllMessage  = 4, //群@所有人通知
    
    YTXNotificationLevelType_ReceiveNotNotifyMessage  = 5 ,//接收但不提醒
    YTXNotificationLevelType_NotReceiveMessage  = 6, //消息通知被屏蔽，即不接收消息通知））
};


///日志级别
typedef NS_ENUM(NSUInteger,  YTXLogLevel) {
    YTXLogLevel_DEBUG = 0,
    YTXLogLevel_ERROR = 3,
    YTXLogLevel_FATAL= 4,
    YTXLogLevel_LOG = 0,
    YTXLogLevel_NONE = 1000,
    YTXLogLevel_STATISTICS = 6,
    YTXLogLevel_WARN = 2,
};
///消息发送状态
typedef NS_ENUM(NSUInteger,  YTXMessageStatus) {
    YTXMessageStatus_Default = 0,//默认
    YTXMessageStatus_SENDING = 1, // 发送中
    YTXMessageStatus_SUCCESS = 2,    // 发送成功
    YTXMessageStatus_FAILED= 3,   // 发送失败
    YTXMessageStatus_DELETED = 4,// 已删除
    YTXMessageStatus_WITHDRAW= 5,    //  已撤回
    YTXMessageStatus_FILTERED = 6,    //  已过滤
};
///群不可用状态
typedef NS_ENUM(NSUInteger,  YTXGroupStatus) {
    YTXGroupStatus_NORMAL = 0, //   正常
    YTXGroupStatus_HUNG_UP = 1,    // 挂起
    YTXGroupStatus_DISSOLUTION = 2,   // 解散
};
///在线平台
typedef NS_ENUM(NSUInteger, YTXPlatformType) {
    YTXPlatformType_iOS = 1,
    YTXPlatformType_Android = 2,
    YTXPlatformType_Windows = 3,
    YTXPlatformType_Macos = 4,
    YTXPlatformType_Web = 5,
    YTXPlatformType_Mini = 6,
};
///用户黑名单状态
typedef NS_ENUM(NSUInteger, YTXBlackListStatus) {
    YTXBlackListStatus_In = 1, //在黑名单中
    YTXBlackListStatus_NotIn= 2,//不在黑名单中
};
///登录状态
typedef NS_ENUM(NSUInteger, YTXLoginStatus) {
    YTXLoginStatus_sdkInit = 0,
    YTXLoginStatus_loginSuccess = 101,
    YTXLoginStatus_logining = 102,
    YTXLoginStatus_loginFailed = 103,
    YTXLoginStatus_logout = 201,
    YTXLoginStatus_tokenFailedExpired = 701,
    YTXLoginStatus_tokenFailedInvalid = 702,
    YTXLoginStatus_tokenFailedKickedOffline = 703,
};



#pragma mark - 错误码相关

#pragma mark YTXConnectErrorCode - 建立连接返回的错误码
/*!
 建立连接返回的错误码

 */
typedef NS_ENUM(NSInteger, YTXConnectErrorCode) {

    /*!
     AppKey 错误

     @discussion 请检查您使用的 AppKey 是否正确。
     */
    RC_CONN_ID_REJECT = 31002,

    /*!
     Token 无效

     @discussion 请检查客户端初始化使用的 AppKey 和您服务器获取 token 使用的 AppKey 是否一致。
     @discussion 您可能需要请求您的服务器重新获取 token，并使用新的 token 建立连接。
     */
    RC_CONN_TOKEN_INCORRECT = 31004,

    /*!
     App 校验未通过
     
     @discussion 您开通了 App 校验功能，但是校验未通过
     */
    RC_CONN_NOT_AUTHRORIZED = 31005,

    /*!
     BundleID 不正确

     @discussion 请检查您 App 的 BundleID 是否正确。
     */
    RC_CONN_PACKAGE_NAME_INVALID = 31007,

    /*!
     AppKey 被封禁或已删除

     @discussion 请检查您使用的 AppKey 是否被封禁或已删除。
     */
    RC_CONN_APP_BLOCKED_OR_DELETED = 31008,

    /*!
     用户被封禁

     @discussion 请检查您使用的 Token 是否正确，以及对应的 UserId 是否被封禁。
     */
    RC_CONN_USER_BLOCKED = 31009,

    /*!
     用户被踢下线

      @discussion 当前用户在其他设备上登录，此设备被踢下线
     */
    RC_DISCONN_KICK = 31010,
    
    /*!
     token 已过期
     
     @discussion 您可能需要请求您的服务器重新获取 token，并使用新的 token 建立连接。
     */
    RC_CONN_TOKEN_EXPIRE = 31020,

    /*!
     用户在其它设备上登录

      @discussion 重连过程中当前用户在其它设备上登录
     */
    RC_CONN_OTHER_DEVICE_LOGIN = 31023,
    
    /*!
     连接总数量超过服务设定的并发限定值
     
     @discussion 私有云专属
     */
    CONCURRENT_LIMIT_ERROR = 31024,
    
    /*!
     环境校验失败
     
     @discussion 请检查 AppKey 和连接环境（开发环境/生产环境）是否匹配
     */
    RC_CONN_CLUSTER_ERROR  = 31025,
    
    /*!
     APP 服务校验失败
     
     @discussion 连接接口 RCConnectOption.connectExt 参数在 APP 服务验证不通过
     */
    RC_CONN_APP_AUTH_FAILED  = 31026,
    
    /*!
     token 已经被使用过，无法再连接
     
     @discussion 一次性 token 只能连接一次，之后再使用会上报此错误
     */
    RC_CONN_DISPOSABLE_TOKEN_USED = 31027,

    /*!
     SDK 没有初始化

     @discussion 在使用 SDK 任何功能之前，必须先 Init。
     */
    RC_CLIENT_NOT_INIT = 33001,

    /*!
     开发者接口调用时传入的参数错误

     @discussion 请检查接口调用时传入的参数类型和值。
     */
    RC_INVALID_PARAMETER = 33003,

    /*!
     Connection 已经存在

     @discussion
     调用过connect之后，只有在 token 错误或者被踢下线或者用户 logout 的情况下才需要再次调用 connect。其它情况下 SDK
     会自动重连，不需要应用多次调用 connect 来保持连接。
     */
    RC_CONNECTION_EXIST = 34001,

    /*!
     连接环境不正确（融云公有云 SDK 无法连接到私有云环境）

     @discussion 融云公有云 SDK 无法连接到私有云环境。请确认需要连接的环境，使用正确 SDK 版本。
     */
    RC_ENVIRONMENT_ERROR = 34005,

    /*!
     连接超时。

    @discussion 当调用 connectWithToken:timeLimit:dbOpened:success:error:  接口，timeLimit 为有效值时，SDK 在 timeLimit 时间内还没连接成功返回此错误。
    */
    RC_CONNECT_TIMEOUT = 34006,

    /*!
     开发者接口调用时传入的参数错误

     @discussion 请检查接口调用时传入的参数类型和值。
     */
    RC_INVALID_ARGUMENT = -1000
};


#pragma mark YTXErrorCode - 具体业务错误码
/*!
 具体业务错误码
 */
typedef NS_ENUM(NSInteger, YTXErrorCode) {
    /*!
     成功
     */
    RC_SUCCESS = 0,
    
    /*!
     未知错误（预留）
     */
    ERRORCODE_UNKNOWN = -1,

    /*!
     已被对方加入黑名单，消息发送失败。
     */
    REJECTED_BY_BLACKLIST = 405,
    
    
    /*!
     上传媒体文件格式不支持
     */
    RC_MEDIA_FILETYPE_INVALID = 34019,

    /*!
     超时
     */
    ERRORCODE_TIMEOUT = 5004,

    /*!
     发送消息频率过高，1 秒钟最多只允许发送 5 条消息
     */
    SEND_MSG_FREQUENCY_OVERRUN = 20604,
    
    /*!
    请求超出了调用频率限制，请稍后再试

    @discussion 接口调用过于频繁，请稍后再试。
    */
    RC_REQUEST_OVERFREQUENCY = 20607,

    /*!
     当前用户不在该讨论组中
     */
    NOT_IN_DISCUSSION = 21406,

    /*!
     当前用户不在该群组中
     */
    NOT_IN_GROUP = 22406,

    /*!
     当前用户在群组中已被禁言
     */
    FORBIDDEN_IN_GROUP = 22408,

    /*!
     当前用户不在该聊天室中
     */
    NOT_IN_CHATROOM = 23406,

    /*!
     当前用户在该聊天室中已被禁言
     */
    FORBIDDEN_IN_CHATROOM = 23408,

    /*!
     当前用户已被踢出并禁止加入聊天室。被禁止的时间取决于服务端调用踢出接口时传入的时间。
     */
    KICKED_FROM_CHATROOM = 23409,

    /*!
     聊天室不存在
     */
    RC_CHATROOM_NOT_EXIST = 23410,

    /*!
     聊天室成员超限，默认聊天室成员没有人数限制，但是开发者可以提交工单申请针对 App Key
     进行聊天室人数限制，在限制人数的情况下，调用加入聊天室的接口时人数超限，就会返回此错误码
     */
    RC_CHATROOM_IS_FULL = 23411,

    /*!
     聊天室接口参数无效。请确认参数是否为空或者有效。
     */
    RC_PARAMETER_INVALID_CHATROOM = 23412,

    /*!
     聊天室云存储业务未开通
     */
    RC_ROAMING_SERVICE_UNAVAILABLE_CHATROOM = 23414,

    /*!
     超过聊天室的最大状态设置数，1 个聊天室默认最多设置 100 个
     */
    RC_EXCCED_MAX_KV_SIZE = 23423,

    /*!
     聊天室中非法覆盖状态值，状态已存在，没有权限覆盖
     */
    RC_TRY_OVERWRITE_INVALID_KEY = 23424,

    /*!
     超过聊天室中状态设置频率，1 个聊天室 1 秒钟最多设置和删除状态 100 次
     */
    RC_EXCCED_MAX_CALL_API_SIZE = 23425,

    /*!
     聊天室状态存储功能没有开通，请联系商务开通
     */
    RC_KV_STORE_NOT_AVAILABLE = 23426,

    /*!
     聊天室状态值不存在
    */
    RC_KEY_NOT_EXIST = 23427,
    
    /*!
     聊天室批量设置 KV 部分不成功
    */
    RC_KV_STORE_NOT_ALL_SUCCESS = 23428,
    
    /*!
     聊天室设置 KV，数量超限（最多一次 10 条）
    */
    RC_KV_STORE_OUT_OF_LIMIT = 23429,
    
    /*!
     超级群功能没有开通，请联系商务开通
    */
    RC_ULTRA_GROUP_NOT_AVAILABLE = 24401,
    
    /*!
     超级群服务异常
    */
    RC_ULTRA_GROUP_SERVICE_ABNORMAL = 24402,
    
    /*!
     超级群参数错误
    */
    RC_ULTRA_GROUP_PARAMETER_ERROR = 24403,
    
    /*!
     超级群未知异常
    */
    RC_ULTRA_GROUP_UNKNOWN_ERROR = 24404,
    
    /*!
     当前用户不在该超级群中
     */
    RC_NOT_IN_ULTRA_GROUP = 24406,
    
    /*!
     当前用户在超级群中已被禁言
     */
    RC_FORBIDDEN_IN_ULTRA_GROUP = 24408,
    
    /*!
     超级群不存在
     */
    RC_ULTRA_GROUP_NOT_EXIST = 24410,
    
    /*!
     超级群成员超限制
     */
    RC_ULTRA_GROUP_MEMBERS_EXCEED_LIMIT = 24411,
    
    /*!
     用户加入超级群数量超限
     */
    RC_ULTRA_GROUP_NUMBER_EXCEED_LIMIT = 24412,
    
    /*!
     创建超级群频道，频道数超限
     */
    RC_ULTRA_GROUP_CHANNELS_EXCEED_LIMIT = 24413,
    
    /*!
     超级群 频道 ID 不存在
     */
    RC_ULTRA_GROUP_CHANNEL_ID_NOT_EXIST = 24414,
    
    //超级群频道发送消息超限：超级群下每个频道有消息发送频率限制，默认每秒 30 条
    //频道内每秒发送消息总量超过限制会收到该错误码，建议延时发送或重试发送
    RC_ULTRA_GROUP_CHANNEL_MESSAGE_EXCEED_LIMIT = 24415,
    
    /*
     聊天室设置 KV 失败，出现在两人或者多端同时操作一个 kv。
     如果出现该错误，为避免和其他端同时操作，请延时一定时间再试
    */
    RC_KV_CONCURRENT_SET_ERROR = 23431,
    
    /*!
     操作跟服务端同步时出现问题，有可能是操作过于频繁所致。如果出现该错误，请延时 0.5s 再试
    */
    RC_SETTING_SYNC_FAILED = 26002,

    /*!
     小视频服务未开通。可以在融云开发者后台中开启该服务。
    */
    RC_SIGHT_SERVICE_UNAVAILABLE = 26101,
    
    /*!
     聊天室状态未同步完成
     刚加入聊天室时调用获取 KV 接口，极限情况下会存在本地数据和服务器未同步完成的情况，建议延时一段时间再获取
     */
    RC_KV_STORE_NOT_SYNC = 34004,
    
    /*!
     聊天室被重置
    */
    RC_CHATROOM_RESET = 33009,

    /*!
     当前连接不可用（连接已经被释放）
     */
    RC_CHANNEL_INVALID = 30001,

    /*!
     当前连接不可用
     */
    RC_NETWORK_UNAVAILABLE = 30002,

    /*!
     客户端发送消息请求，融云服务端响应超时。
     */
    RC_MSG_RESPONSE_TIMEOUT = 30003,
    
    /*!
    将消息存储到本地数据时失败。
    发送或插入消息时，消息需要存储到本地数据库，当存库失败时，会回调此错误码。
    
    可能由以下几种原因引起：
    * 1. 消息内包含非法参数。请检查消息的 targetId 或 senderId 是否为空或超过最大长度 64 字节。
    * 2. SDK 没有初始化。在使用 SDK 任何功能之前，请确保先初始化。
    * 3. SDK 没有连接。请确保调用 SDK 连接方法并回调数据库打开后再调用消息相关 API。
    */
    
    BIZ_SAVE_MESSAGE_ERROR = 33000,

    /*!
     SDK 没有初始化

     @discussion 在使用 SDK 任何功能之前，必须先 Init。
     */
    CLIENT_NOT_INIT = 33001,

    /*!
     数据库错误
     
     @discussion 连接融云的时候 SDK 会打开数据库，如果没有连接融云就调用了业务接口，因为数据库尚未打开，有可能出现该错误。
     @discussion 数据库路径中包含 userId，如果您获取 token 时传入的 userId 包含特殊字符，有可能导致该错误。userId
     支持大小写英文字母、数字、部分特殊符号 + = - _ 的组合方式，最大长度 64 字节。
     */
    DATABASE_ERROR = 33002,

    /*!
     开发者接口调用时传入的参数错误

     @discussion 请检查接口调用时传入的参数类型和值。
     */
    INVALID_PARAMETER = 33003,

    /*!
     历史消息云存储业务未开通。可以在融云开发者后台中开启该服务。
     */
    MSG_ROAMING_SERVICE_UNAVAILABLE = 33007,
    
    /*!
     标签不存在
     */
    RC_TAG_NOT_EXIST = 33100,
    
    /*!
     标签已存在
     */
    RC_TAG_ALREADY_EXISTS = 33101,
    
    /*!
     会话中不存在对应标签
     */
    RC_TAG_INVALID_FOR_CONVERSATION = 33102,
    
    /*!
     公众号非法类型，针对会话类型：ConversationType_APPSERVICE
     */
    RC_APP_PUBLICSERVICE_ERROR_TYPE = 29201,

    /*!
     公众号默认已关注，针对会话类型：ConversationType_APPSERVICE
     */
    RC_APP_PUBLICSERVICE_DEFFOLLOWED = 29102,
    
    /*!
     公众号已关注，针对会话类型：ConversationType_APPSERVICE
     */
    RC_APP_PUBLICSERVICE_FOLLOWED = 29103,
    
    /*!
     公众号默认已取消关注，针对会话类型：ConversationType_APPSERVICE
     */
    RC_APP_PUBLICSERVICE_DEFUNFOLLOWED = 29104,
    
    /*!
     公众号已经取消关注，针对会话类型：ConversationType_APPSERVICE
     */
    RC_APP_PUBLICSERVICE_UNFOLLOWED = 29105,
    
    /*!
     公众号未关注，针对会话类型：ConversationType_APPSERVICE
     */
    RC_APP_PUBLICSERVICE_UNFOLLOW = 29106,

    /*!
     公众号非法类型，针对会话类型：ConversationType_PUBLICSERVICE
     */
    INVALID_PUBLIC_NUMBER = 29201,

    /*!
     公众号默认已关注，针对会话类型：ConversationType_PUBLICSERVICE
     */
    RC_PUBLICSERVICE_DEFFOLLOWED = 29202,
    
    /*!
     公众号已关注，针对会话类型：ConversationType_PUBLICSERVICE
     */
    RC_PUBLICSERVICE_FOLLOWED = 29203,
    
    /*!
     公众号默认已取消关注，针对会话类型：ConversationType_PUBLICSERVICE
     */
    RC_PUBLICSERVICE_DEFUNFOLLOWED = 29204,
    
    /*!
     公众号已经取消关注，针对会话类型：ConversationType_PUBLICSERVICE
     */
    RC_PUBLICSERVICE_UNFOLLOWED = 29205,
    
    /*!
     公众号未关注，针对会话类型：ConversationType_PUBLICSERVICE
     */
    RC_PUBLICSERVICE_UNFOLLOW = 29206,
    
    /*!
      消息大小超限，消息体（序列化成 json 格式之后的内容）最大 128k bytes。
     */
    RC_MSG_SIZE_OUT_OF_LIMIT = 30016,

    /*!
    撤回消息参数无效。请确认撤回消息参数是否正确的填写。
     */
    RC_RECALLMESSAGE_PARAMETER_INVALID = 25101,

    /*!
    push 设置参数无效。请确认是否正确的填写了 push 参数。
     */
    RC_PUSHSETTING_PARAMETER_INVALID = 26001,
    
    /*!
     用户标签个数超限，最多支持添加 20 个标签
     */
    RC_TAG_LIMIT_EXCEED = 26004,

    /*!
    操作被禁止。 此错误码已被弃用。
     */
    RC_OPERATION_BLOCKED = 20605,

    /*!
    操作不支持。仅私有云有效，服务端禁用了该操作。
     */
    RC_OPERATION_NOT_SUPPORT = 20606,

    /*!
     发送的消息中包含敏感词 （发送方发送失败，接收方不会收到消息）
     */
    RC_MSG_BLOCKED_SENSITIVE_WORD = 21501,

    /*!
     消息中敏感词已经被替换 （接收方可以收到被替换之后的消息）
     */
    RC_MSG_REPLACED_SENSITIVE_WORD = 21502,

    /*!
     小视频时间长度超出限制，默认小视频时长上限为 2 分钟
     */
    RC_SIGHT_MSG_DURATION_LIMIT_EXCEED = 34002,

    /*!
     GIF 消息文件大小超出限制， 默认 GIF 文件大小上限是 2 MB
     */
    RC_GIF_MSG_SIZE_LIMIT_EXCEED = 34003,
    
    /**
     * 查询的公共服务信息不存在。
     * <p>请确认查询的公共服务的类型和公共服务 id 是否匹配。</p>
     */
    RC_PUBLIC_SERVICE_PROFILE_NOT_EXIST = 34007,
    
    /**
    * 消息不能被扩展。
    * <p>消息在发送时，YTXMessage 对象的属性 canIncludeExpansion 置为 YES 才能进行扩展。</p>
    */
    RC_MESSAGE_CANT_EXPAND = 34008,

    /**
    * 消息扩展失败。
    * <p>一般是网络原因导致的，请确保网络状态良好，并且融云 SDK 连接正常</p>
    */
    RC_MESSAGE_EXPAND_FAIL = 34009,
    
    /*!
     消息扩展大小超出限制， 默认消息扩展字典 key 长度不超过 32 ，value 长度不超过 4096 ，单次设置扩展数量最大为 20，消息的扩展总数不能超过 300
     */
    RC_MSG_EXPANSION_SIZE_LIMIT_EXCEED = 34010,
    
    /*!
     媒体消息媒体文件 http  上传失败
     */
    RC_FILE_UPLOAD_FAILED = 34011,
    
    /*!
     指定的会话类型不支持标签功能，会话标签仅支持单群聊会话、系统会话
     */
    RC_CONVERSATION_TAG_INVALID_CONVERSATION_TYPE = 34012,
    
    /*!
     批量处理指定标签的会话个数超限，批量处理会话个数最大为 1000
     */
    RC_CONVERSATION_TAG_LIMIT_EXCEED = 34013,
    
    /*!
     群已读回执版本不支持
     */
    RC_Group_Read_Receipt_Version_Not_Support = 34014,
    
    /*!
     视频消息压缩失败
     */
    RC_SIGHT_COMPRESS_FAILED = 34015,
    
    /*!
     用户级别设置未开通
     */
    RC_USER_SETTING_DISABLED = 34016,
    
    /*!
     消息处理失败
     * <p>一般是消息处理为 nil </p>
     */
    RC_MESSAGE_NULL_EXCEPTION = 34017,
    
    /*!
     媒体文件上传异常，媒体文件不存在或文件大小为 0
     */
    RC_MEDIA_EXCEPTION = 34018,
    
    /**
     * 文件已过期或被清理
     * 小视频文件默认存储 7 天，其它文件默认存储 6个月。到期后自动清理。
     * 如果小视频文件需要存储更长时间，可在[融云开发者后台](https://developer.rongcloud.cn/advance/index)的 **服务管理-> 小视频-> 服务设置** 中开通小视频高级版功能，开通后小视频文件，默认存储 6 个月。
     */
    RC_FILE_EXPIRED = 34020,
    
    /*!
     * 消息未被注册
     * 发送或者插入自定义消息之前，请确保注册了该类型的消息{RCCoreClient 或者 RCIM 的 registerMessageType}
     * added from 5.1.7
     */
    RC_MESSAGE_NOT_REGISTERED = 34021,
    
    /*!
     * 该接口不支持超级群会话
     *
     */
    RC_ULTRA_GROUP_NOT_SUPPORT = 34022,
    
    /*!
     超级群功能未开通
     */
    RC_ULTRA_GROUP_DISABLED = 34023,
    
    /*!
     超级群频道不存在
     */
    RC_ULTRA_GROUP_CHANNEL_NOT_EXIST = 34024,
    
    /*!
     超级群扩展消息，但是原始消息不存在
     */
    RC_ORIGINAL_MESSAGE_NOT_EXIST = 22201,
     
    /*!
     超级群扩展消息，但是原始消息不支持扩展
     */
    RC_ORIGINAL_MESSAGE_CANT_EXPAND = 22202,

    /*!
     超级群扩展消息，扩展内容格式错误
     */
    RC_MESSAGE_EXPAND_FORMAT_ERROR = 22203,

    /*!
     超级群扩展消息，无操作权限
     */
    RC_MESSAGE_EXPAND_NOT_AUTHORIZED = 22204,
};

typedef NS_ENUM(NSInteger, YTXDBErrorCode) {
    RCDBOpenSuccess = 0,
    RCDBOpenFailed = 33002,
};


#pragma mark YTXNetworkStatus - 当前所处的网络
/*!
 当前所处的网络
 */
typedef NS_ENUM(NSUInteger, YTXNetworkStatus) {
    /*!
     当前网络不可用
     */
    RC_NotReachable = 0,

    /*!
     当前处于 WiFi 网络
     */
    RC_ReachableViaWiFi = 1,

    /*!
     移动网络
     */
    RC_ReachableViaWWAN = 2,
};


#pragma mark YTXSDKRunningMode - SDK当前所处的状态
/*!
 SDK 当前所处的状态
 */
typedef NS_ENUM(NSUInteger, YTXSDKRunningMode) {
    /*!
     后台运行状态
     */
    YTXSDKRunningMode_Background = 0,

    /*!
     前台运行状态
     */
    YTXSDKRunningMode_Foreground = 1
};

#pragma mark - 会话相关



#pragma mark YTXConversationNotificationStatus - 会话提醒状态
/*!
 会话提醒状态
 */
typedef NS_ENUM(NSUInteger, YTXConversationNotificationStatus) {
    /*!
     免打扰

     */
    DO_NOT_DISTURB = 0,

    /*!
     新消息提醒
     */
    NOTIFY = 1,
};

#pragma mark YTXReadReceiptMessageType - 消息回执
/*!
 已读状态消息类型
 */
typedef NS_ENUM(NSUInteger, YTXReadReceiptMessageType) {
    /*!
     根据会话来更新未读消息状态
     */
    YTX_ReadReceipt_Conversation = 1,
};

#pragma mark - 消息相关

#pragma mark YTXMessagePersistent - 消息的存储策略
/*!
 消息的存储策略
 */
typedef NS_ENUM(NSUInteger, YTXMessagePersistent) {
    /*!
     在本地不存储，不计入未读数
     */
    MessagePersistent_NONE = 0,

    /*!
     在本地只存储，但不计入未读数
     */
    MessagePersistent_ISPERSISTED = 1,

    /*!
     在本地进行存储并计入未读数
     */
    MessagePersistent_ISCOUNTED = 3,

    /*!
     在本地不存储，不计入未读数，并且如果对方不在线，服务器会直接丢弃该消息，对方如果之后再上线也不会再收到此消息。

     @discussion 一般用于发送输入状态之类的消息。
     */
    MessagePersistent_STATUS = 16
};


#pragma mark YTXMessageDirection - 消息的方向
/*!
 消息的方向
 */
typedef NS_ENUM(NSUInteger, YTXMessageDirection) {
    /*!
     发送
     */
    MessageDirection_SEND = 1,

    /*!
     接收
     */
    MessageDirection_RECEIVE = 2
};

#pragma mark YTXSentStatus - 消息的发送状态
/*!
 消息的发送状态
 */
typedef NS_ENUM(NSUInteger, YTXSentStatus) {
    /*!
     发送中
     */
    SentStatus_SENDING = 10,

    /*!
     发送失败
     */
    SentStatus_FAILED = 20,

    /*!
     已发送成功
     */
    SentStatus_SENT = 30,

    /*!
     对方已接收
     */
    SentStatus_RECEIVED = 40,

    /*!
     对方已阅读
     */
    SentStatus_READ = 50,

    /*!
     对方已销毁
     */
    SentStatus_DESTROYED = 60,

    /*!
     发送已取消
     */
    SentStatus_CANCELED = 70,

    /*!
     无效类型
     */
    SentStatus_INVALID
};


#pragma mark YTXMediaType - 消息内容中多媒体文件的类型
/*!
 消息内容中多媒体文件的类型
 */
typedef NS_ENUM(NSUInteger, YTXMediaType) {
    /*!
     图片
     */
    MediaType_IMAGE = 1,

    /*!
     语音
     */
    MediaType_AUDIO = 2,

    /*!
     视频
     */
    MediaType_VIDEO = 3,

    /*!
     其他文件
     */
    MediaType_FILE = 4,

    /*!
     小视频
     */
    MediaType_SIGHT = 5,

    /*!
     合并转发
     */
    MediaType_HTML = 6
};

#pragma mark YTXTypingStatus - 输入状态
typedef NS_ENUM(NSUInteger, YTXUltraGroupTypingStatus) {
    /*!
     正在输入文本
     */
    YTXUltraGroupTypingStatusText = 0,
};

#pragma mark YTXMediaType - 消息中@提醒的类型
/*!
 @提醒的类型
 */
typedef NS_ENUM(NSUInteger, YTXMentionedType) {
    /*!
     @ 所有人
     */
    YTX_Mentioned_All = 1,

    /*!
     @ 部分指定用户
     */
    YTX_Mentioned_Users = 2,
};

/**
 语音消息采样率

 - YTXSample_Rate_8000: 8KHz
 - YTXSample_Rate_16000: 16KHz
 */
typedef NS_ENUM(NSInteger, YTXSampleRate) {
    YTXSample_Rate_8000 = 1,  // 8KHz
    YTXSample_Rate_16000 = 2, // 16KHz
};

/**
 语音消息类型

 - YTXVoiceMessageTypeOrdinary: 普通音质语音消息
 - YTXVoiceMessageTypeHighQuality: 高音质语音消息
 */
typedef NS_ENUM(NSInteger, YTXVoiceMessageType) {
    YTXVoiceMessageTypeOrdinary = 1,
    YTXVoiceMessageTypeHighQuality = 2,
};

#pragma mark - 公众服务相关

#pragma mark YTXPublicServiceType - 公众服务账号类型
/*!
 公众服务账号类型
 */
typedef NS_ENUM(NSUInteger, YTXPublicServiceType) {
    /*!
     应用内公众服务账号
     */
    YTX_APP_PUBLIC_SERVICE = 7,

    /*!
     跨应用公众服务账号
     */
    YTX_PUBLIC_SERVICE = 8,
};

#pragma mark YTXSearchType - 公众服务查找匹配方式
/*!
 公众服务查找匹配方式
 */
typedef NS_ENUM(NSUInteger, YTXSearchType) {
    /*!
     精确匹配
     */
    YTX_SEARCH_TYPE_EXACT = 0,

    /*!
     模糊匹配
     */
    YTX_SEARCH_TYPE_FUZZY = 1,
    /*!
     无效类型
     */
    YTXSearchType_INVALID
};

#pragma mark  YTXLogLevel - 日志级别


#pragma mark YTXTimestampOrder - 历史消息查询顺序
/*!
 日志级别
 */
typedef NS_ENUM(NSUInteger, YTXTimestampOrder) {
    /*!
     *  降序, 按照时间戳从大到小
     */
    YTX_Timestamp_Desc = 0,

    /*!
     *  升序, 按照时间戳从小到大
     */
    YTX_Timestamp_Asc = 1,
};


#pragma mark YTXPlatform - 在线平台
/*!
 在线平台
 */
typedef NS_ENUM(NSUInteger, YTXPlatform) {
    /*!
     其它平台
     */
    YTXPlatform_Other = 0,

    /*!
     iOS
     */
    YTXPlatform_iOS = 1,

    /*!
     Android
     */
    YTXPlatform_Android = 2,

    /*!
     Web
     */
    YTXPlatform_Web = 3,

    /*!
     PC
     */
    YTXPlatform_PC = 4
};

#pragma mark YTXPushLauguageType - push 语言设置
/*!
 push 语言设置
 */
typedef NS_ENUM(NSUInteger, YTXPushLauguage) {
    /*!
     英文
     */
    YTXPushLauguage_EN_US = 1,
    /*!
     中文
     */
    YTXPushLauguage_ZH_CN = 2,
};


#pragma mark YTXMessageBlockType - 消息被拦截类型

/*!
 消息被拦截类型
 */
typedef NS_ENUM(NSUInteger, YTXMessageBlockType) {
    /*!
     全局敏感词：命中了云通信内置的全局敏感词
     */
    YTXMessageBlockTypeGlobal = 1,

    /*!
     自定义敏感词拦截：命中了客户在云通信自定义的敏感词
     */
    YTXMessageBlockTypeCustom = 2,
    
    /*!
     第三方审核拦截：命中了第三方（数美）或模板路由决定不下发的状态
     */
    YTXMessageBlockTypeThirdParty = 3,
};



#endif /* YTXStatusDefine_h */
