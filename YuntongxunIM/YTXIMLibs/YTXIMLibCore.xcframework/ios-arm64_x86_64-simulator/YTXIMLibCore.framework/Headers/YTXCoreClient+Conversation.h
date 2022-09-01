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

- (void)getConversationList:(YTXBaseRequest*)baseReq
                  onSuccess:(nullable YTXConversationsInfoCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;


- (void)getTotalUnreadMsgCount:(nullable YTXNumberCallback)onSuccess
                     onFailure:(nullable YTXFailureCallback)onFailure;



- (void)deleteConversations:(NSArray*)conversationIdList
                  onSuccess:(nullable YTXSuccessCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;


- (void)setConversationDraft:(NSString*)conversationId
                   draftText:(NSString*)draftText
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;

- (void)sendTypingMsg:(NSString*)conversationId
               msgTip:(NSString*)msgTip
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;


- (void)setConversationTop:(NSString*)conversationId
                  isPinned:(BOOL)isPinned
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getNotificationLevel:(NSArray*)conversationIdList
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;

- (void)setNotificationLevel:(NSArray*)conversationIdList
           notificationLevel:(YTXNotificationLevelType)notificationLevel
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;


- (void)getDraft:(NSString*)conversationId
       onSuccess:(nullable YTXStringCallback)onSuccess
       onFailure:(nullable YTXFailureCallback)onFailure;


- (void)getUnreadCount:(NSString*)conversationId
             onSuccess:(nullable YTXNumberCallback)onSuccess
             onFailure:(nullable YTXFailureCallback)onFailure;

- (void)setConversationReaded:(NSString*)conversationId
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;

@end

NS_ASSUME_NONNULL_END
