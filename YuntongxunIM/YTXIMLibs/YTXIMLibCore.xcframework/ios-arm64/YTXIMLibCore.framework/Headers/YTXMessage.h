//
//  YTXMessage.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/11.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXPictureElem.h"
#import "YTXSoundElem.h"
#import "YTXVideoElem.h"
#import "YTXFileElem.h"
#import "YTXMergeElem.h"
#import "YTXAtElem.h"
#import "YTXLocationElem.h"
#import "YTXCustomElem.h"
#import "YTXQuoteElem.h"
#import "YTXNotificationElem.h"
#import "YTXFaceElem.h"
#import "YTXAttachedInfoElem.h"
#import "YTXStatusDefine.h"
#import "YTXTextElem.h"
#import "YTXCardElem.h"

NS_ASSUME_NONNULL_BEGIN

@interface YTXOfflinePushInfo : NSObject
/**
 @brief 标题
 */
@property (nonatomic, nullable, copy) NSString *title;
/**
 @brief 备注
 */
@property (nonatomic, nullable, copy) NSString *desc;
/**
 @brief 扩展
 */
@property (nonatomic, nullable, copy) NSString *ex;


@property (nonatomic, nullable, copy) NSString *iOSPushSound;

@end



@interface YTXMessage : NSObject

@property (nonatomic, nullable, copy) NSString *clientMsgId;

@property (nonatomic, nullable, copy) NSString *serverMsgId;

@property (nonatomic, assign) NSTimeInterval createTime;

@property (nonatomic, assign) NSTimeInterval sendTime;

@property (nonatomic, nullable, copy) NSString *conversationId;

@property (nonatomic, assign) YTXConversationType type;

@property (nonatomic, nullable, copy) NSString *senderId;

@property (nonatomic, nullable, copy) NSString *receiverId;

@property (nonatomic, nullable, copy) NSString *handleMsg;

@property (nonatomic, assign) NSInteger msgFrom;

@property (nonatomic, assign) YTXMessageType msgType;

@property (nonatomic, assign) NSInteger platformId;

@property (nonatomic, assign) NSInteger anonymity;


@property (nonatomic, nullable, copy) NSString *senderNickname;

@property (nonatomic, nullable, copy) NSString *senderFaceUrl;

@property (nonatomic, nullable, copy) NSString *groupId;

@property (nonatomic , strong) YTXBaseElem *content;

/*
 *  消息唯一序列号
 */
@property (nonatomic, assign) NSInteger seq;

@property (nonatomic, assign) BOOL isRead;

@property (nonatomic, assign) YTXMessageStatus status;

@property (nonatomic, nullable, copy) NSString *attachedInfo;

@property (nonatomic, nullable, copy) NSString *params;

@property (nonatomic, nullable, copy) NSString *options;

@property (nonatomic, nullable, copy) NSString *ex;

@property (nonatomic, strong) YTXOfflinePushInfo *offlinePush;

@property (nonatomic, assign) NSTimeInterval hasReadTime;



@end




@interface YTXSendMessageOptions : NSObject
///**
// @brief 消息是否支持拓展内容
// */
@property (nonatomic, copy) NSString* hasExpansion;
/**
 @brief 是否发送静默消息
 description 当值为 true 时，服务器将不会发送 Push 信息，移动端也不会弹出本地通知提醒
 */
@property (nonatomic, copy) NSString*  disableNotification;
/**
 @brief 用于发送群定向消息，只当 conversationType 值为 ConversationType.GROUP 时有效
 */
@property (nonatomic, copy) NSString* directionalUidList;
/**
 @brief 消息拓展内容数据
 */
@property (nonatomic, copy) NSString*  ex;
/**
 @brief  黑/白名单
 */
@property (nonatomic, copy) NSString*  isFilerWhiteBlacklist;
/**
 @brief  bool    是否是状态消息，一般为无需注册的自定义消息
 description

 状态消息只有 pub，没有 ack 应答
 状态消息默认不存储，不计数，isPersited 与 isCounted 配置将失效
 */
@property (nonatomic, copy) NSString*  isMentioned;
/**
 @brief  当对方为 iOS 设备且未在线时，其将收到 Voip Push. 此配置对 Android 无影响
 */
@property (nonatomic,copy) NSString*  isVoipPush;
/**
 @brief  @ 消息类型 1: @ 所有人 2: @ 指定用户
 */
@property (nonatomic, copy) NSString* mentionedType;
/**
 @brief  被 @ 的用户 Id 列表，当 mentionedType 值为 1 时，该值可为空
 */
@property (nonatomic, copy) NSString*  mentionedUidList;


@end


@interface YTXMessageReceipt : NSObject
@property (nonatomic, copy) NSString* groupId;
@property (nonatomic, copy) NSString* uid;
@property (nonatomic, strong) NSArray *serverMsgIdList;
@property (nonatomic, strong) NSArray *clientMsgIdList;
@property (nonatomic, assign) NSTimeInterval readTime;
@property (nonatomic, assign) NSTimeInterval msgFrom;
@property (nonatomic, assign) NSInteger msgType;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, strong) NSArray *readList;
@end





@interface YTXGetHistoryMessageResult : NSObject

/**
 @brief  是否还有更多
 */
@property (nonatomic, assign) BOOL hasMore;

/**
 @brief  是否发送者会话
 */
@property (nonatomic, strong) NSArray* list;
@end


@interface YTXSearchMessageReq : NSObject
@property (nonatomic, copy) NSString* sourceId;
@property (nonatomic, assign) YTXConversationType type;
@property (nonatomic, copy) NSString* keyword;
@property (nonatomic, strong) NSArray* msgTypeList;
@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) NSInteger durationTime;
@property (nonatomic, assign) NSInteger offset;
@property (nonatomic, assign) NSInteger count;
@end

@interface YTXGetHistoryMessageRequest : NSObject
@property (nonatomic, assign) NSInteger timestamp;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, copy) NSString* uid;
@property (nonatomic, copy) NSString* groupId;
@property (nonatomic, copy) NSString* startMsgId;
@end


NS_ASSUME_NONNULL_END
