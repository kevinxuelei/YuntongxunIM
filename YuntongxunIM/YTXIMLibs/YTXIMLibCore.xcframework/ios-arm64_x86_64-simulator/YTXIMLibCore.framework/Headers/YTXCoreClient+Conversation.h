//
//  YTXCoreClient+Conversation.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Conversation)

/**
 @brief 获取会话列表
 @param options  其他参数
 */
- (void)getConversationList:(YTXBaseRequest *)options
                  onSuccess:(nullable YTXConversationsInfoCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 获取当前所有会话的消息未读数
 */
- (void)getTotalUnreadMsgCount:(nullable YTXNumberCallback)onSuccess
                     onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 移除指定的会话实例
 @param conversationIdList  会话id
 */
- (void)deleteConversations:(NSArray *)conversationIdList
                  onSuccess:(nullable YTXSuccessCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 设置会话文本草稿
 @param conversationId  会话id
 @param draftText  草稿内容，如果为""则为删除草稿
 */
- (void)setConversationDraft:(NSString *)conversationId
                   draftText:(NSString *)draftText
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 发送typing 消息
 @param conversationId  会话id
 @param msgTip  自定义的提示信息(为json序列化后的string)
 */
- (void)sendTypingMsg:(NSString *)conversationId
               msgTip:(NSString *)msgTip
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 设置会话是否置顶
 @param conversationId  会话id
 @param isPinned  为true时，代表置顶会话，为false时代表取消置顶
 */
- (void)setConversationTop:(NSString *)conversationId
                  isPinned:(BOOL)isPinned
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 获取免打扰状态列表
 @param conversationIdList  会话ID数组
 */
- (void)getNotificationLevel:(NSArray *)conversationIdList
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 设置会话是否置顶
 @param conversationIdList  会话ID数组
 @param notificationLevel  通知消息级别
 */
- (void)setNotificationLevel:(NSArray *)conversationIdList
           notificationLevel:(YTXNotificationLevelType)notificationLevel
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 获取会话文本草稿
 @param conversationId  会话ID
 */
- (void)getDraft:(NSString *)conversationId
       onSuccess:(nullable YTXStringCallback)onSuccess
       onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 获取单个会话的未读数
 @param conversationId  会话ID
 */
- (void)getUnreadCount:(NSString *)conversationId
             onSuccess:(nullable YTXNumberCallback)onSuccess
             onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 设置单个会话已读
 @param conversationId  会话ID
 */
- (void)setConversationReaded:(NSString *)conversationId
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 根据对应id获取会话
 @param conversationType  会话类型
 @param sourceId  群id或者用户id
 */
- (void)getOneConversation:(NSInteger)conversationType
                  sourceId:(NSString *)sourceId
                 onSuccess:(nullable YTXConversationInfoCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;
/**
 @brief 获取会话中未读的最早的一条消息
 @param conversationId  会话id
 */
- (void)getFirstMsgUnread:(NSString *)conversationId
                onSuccess:(nullable YTXMessageInfoCallback)onSuccess
                onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 会话中 @我的 未读的 所有消息
 @param conversationId  会话id
 */
- (void)getMsgUnreadAtMe:(NSString *)conversationId
               onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
               onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 根据sendTime获取范围内的所有数据(不包含2个边界!)
 @param conversationId  会话id
 @param serverMsgIdStart  较小值(包含)
 @param serverMsgIdEnd   较大值(不包含)
 */
- (void)getMsgRange:(NSString *)conversationId
   serverMsgIdStart:(NSString *)serverMsgIdStart
     serverMsgIdEnd:(NSString *)serverMsgIdEnd
          onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 删除一个会话内的所有消息
 @param conversationId  会话id
 */
- (void)cleanLocalMsg:(NSString *)conversationId
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;


@end

NS_ASSUME_NONNULL_END
