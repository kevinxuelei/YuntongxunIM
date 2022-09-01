//
//  YTXIMKitManager.h
//  YTXIMKit
//
//  Created by dongxuelei on 2022/8/2.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>
NS_ASSUME_NONNULL_BEGIN

/*!
 @const 登录成功
 */
FOUNDATION_EXPORT NSString *const YTXIMKitLoginSuccessNotification;
/*!
 @const 会话列表刷新
 */
FOUNDATION_EXPORT NSString *const YTXIMKitConversationCellUpdateNotification;
/*!
 @const 收到消息的Notification
 */
FOUNDATION_EXPORT NSString *const YTXIMKitDispatchReceiveMessageNotification;
/*!
 @const 消息被撤回的Notification
 */
FOUNDATION_EXPORT NSString *const YTXIMKitDispatchRecallMessageNotification;
/*!
 @const 发送消息的Notification
 */
FOUNDATION_EXPORT NSString *const YTXIMKitSendingMessageNotification;
/*!
 @const 连接状态变化的Notification
 */
FOUNDATION_EXPORT NSString *const YTXIMKitDispatchConnectionStatusChangedNotification;
/**
 *  收到消息已读回执的响应
 */
FOUNDATION_EXPORT NSString *const YTXIMKitDispatchMessageReceiptResponseNotification;
/**
 *  收到消息已读回执的请求
 通知的 object 中携带信息如下： @{@"targetId":targetId,
 @"conversationType":@(conversationType),
 @"messageUId": messageUId};
 */
FOUNDATION_EXPORT NSString *const YTXIMKitDispatchMessageReceiptRequestNotification;
/*!
 消息正在焚烧的Notification
 */
FOUNDATION_EXPORT NSString *const YTXIMKitMessageDestructingNotification;
/*!
@const 收到会话状态同步的 Notification。
*/
FOUNDATION_EXPORT NSString *const YTXIMKitDispatchConversationStatusChangeNotification;

/*!
@const 总未读数 Notification。
*/
FOUNDATION_EXPORT NSString *const YTXIMKitOnTotalUnreadChangedNotification;

#pragma mark - 消息接收监听器

/*!
 IMKit消息接收的监听器
 */
@protocol YTXIMKitReceiveMessageDelegate <NSObject>

/*!
 接收消息的回调方法
 */
- (void)onYTXIMKitReceiveMessage:(YTXMessage *)message left:(int)left;

@end

@interface YTXIMKitManager : NSObject
@property (nonatomic, strong) YTXLoginInfo *currentUser;
+ (instancetype)sharedManager;

- (BOOL)initWithConfigure:(YTXBaseConfigOption *)configure;

- (void)connect:(NSString *)token
   refreshToken:(NSString *)refreshToken
      onSuccess:(nullable YTXSuccessCallback)onSuccess
      onFailure:(nullable YTXFailureCallback)onFailure;

- (void)disconnect:(nullable YTXSuccessCallback)onSuccess
         onFailure:(nullable YTXFailureCallback)onFailure;

- (void)sendMessage:(NSString *)receiverId
            groupId:(NSString *)groupId
            message:(YTXMessage *)message
            options:(YTXSendMessageOptions *)options
     conversationId:(NSString *)conversationId
          onSuccess:(nullable YTXMessageInfoCallback)onSuccess
         onProgress:(nullable YTXNumberCallback)onProgress
          onFailure:(nullable YTXFailureCallback)onFailure;

- (void)sendMessageWithConversation:(YTXConversation *)conversation
                            message:(YTXMessage *)message
                            options:(YTXSendMessageOptions *)options
                          onSuccess:(nullable YTXMessageInfoCallback)onSuccess
                         onProgress:(nullable YTXNumberCallback)onProgress
                          onFailure:(nullable YTXFailureCallback)onFailure;


- (NSString *)getCurrentLanguageType;

- (void)setLanguageType:(NSString*)type;

+ (NSString *)ytx_localizedStringForKey:(NSString *)key;


@end

NS_ASSUME_NONNULL_END
