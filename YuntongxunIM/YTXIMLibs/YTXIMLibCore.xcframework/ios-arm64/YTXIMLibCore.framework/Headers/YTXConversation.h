//
//  YTXConversation.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
#import <YTXIMLibCore/YTXMessage.h>
NS_ASSUME_NONNULL_BEGIN

@interface YTXConversation : NSObject
/**
 @brief 会话 ID
 */
@property (nonatomic, copy) NSString *conversationId;
/**
 @brief 会话类型
 */
@property (nonatomic, assign) YTXConversationType conversationType;
/**
 @brief 会话群聊Id
 */
@property (nonatomic, copy) NSString *uid;
/**
 @brief 用户名
 */
@property (nonatomic, copy) NSString *groupId;
/**
 @brief 会话对象(用户或群聊)名称
 */
@property (nonatomic, copy) NSString *showName;


@property (nonatomic, copy) NSString *faceUrl;

/**
 @brief channelId
 */
@property (nonatomic, copy) NSString *channelId;
/**
 @brief 是否置顶
 */
@property (nonatomic, assign) BOOL isPinned;
/**
 @brief 是否是私聊
 */
@property (nonatomic, assign) BOOL isPrivateChat;
/**
 @brief 最后一条消息发送时间
 */
@property (nonatomic, assign) NSInteger latestMsgSendTime;

/**
 @brief 会话草稿
 */
@property (nonatomic, copy) NSString *draftText;
/**
 @brief 会话草稿设置时间
 */
@property (nonatomic, assign) NSInteger draftTextTime;
/**
 @brief latestMsgId
 */
@property (nonatomic, copy) NSString *latestMsgId;
//todo
/**
 @brief latestMsg
 */
@property (nonatomic, strong) YTXMessage *latestMsg;

/**
 @brief 当前会话的未读消息数字
 */
@property (nonatomic, assign) NSInteger unreadCount;
/**
 @brief 0:在线正常接收消息，离线时进行推送
        1:不会接收到消息
        2:在线正常接收消息，离线不会有推送
 */
@property (nonatomic, assign) YTXNotificationLevelType recvMsgOpt;
/**
 @brief 群聊@类型
 */
@property (nonatomic, assign) YTXGroupAtType groupAtType;

/**
 @brief attachedInfo
 */
@property (nonatomic, nullable, copy) NSString *attachedInfo;
/**
 @brief  扩展字段
 */
@property (nonatomic, nullable, copy) NSString *ex;

@end

NS_ASSUME_NONNULL_END
