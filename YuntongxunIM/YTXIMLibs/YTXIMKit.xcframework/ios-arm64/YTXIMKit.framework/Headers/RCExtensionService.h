//
//  RCExtensionService.h
//  YTXIMKit
//
//  Created by dongxuelei on 2016/10/9.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import "RCChatSessionInputBarControl.h"
#import "RCEmoticonTabSource.h"
#import "RCExtensionPluginItemInfo.h"
#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>
#import <UIKit/UIKit.h>

@interface RCExtensionService : NSObject

+ (instancetype)sharedService;

#pragma mark - module manager
- (void)loadAllExtensionModules;
- (NSArray *)getAllExtensionModules;
- (void)initWithAppKey:(NSString *)appkey;
- (void)didConnect:(NSString *)userId;
- (void)didDisconnect;
- (void)didCurrentUserInfoUpdated:(YTXUserInfo *)userInfo;
- (void)onMessageReceived:(YTXMessage *)message;
- (BOOL)handleAlertForMessageReceived:(YTXMessage *)message;
- (BOOL)handleNotificationForMessageReceived:(YTXMessage *)message
                                        from:(NSString *)fromName
                                    userInfo:(NSDictionary *)userInfo;

#pragma - module url
- (BOOL)onOpenUrl:(NSURL *)url;
- (void)setScheme:(NSString *)scheme forModule:(NSString *)moduleName;

#pragma mark - input bar
- (NSArray<RCExtensionPluginItemInfo *> *)getPluginBoardItemInfoList:(YTXConversationType)conversationType
                                                            targetId:(NSString *)targetId;
- (NSArray<id<RCEmoticonTabSource>> *)getEmoticonTabList:(YTXConversationType)conversationType
                                                targetId:(NSString *)targetId;

- (void)emoticonTab:(RCEmojiBoardView *)emojiView
  didTouchAddButton:(UIButton *)addButton
         inInputBar:(RCChatSessionInputBarControl *)inputBarControl;
- (void)emoticonTab:(RCEmojiBoardView *)emojiView
    didTouchEmotionIconIndex:(int)index
                  inInputBar:(RCChatSessionInputBarControl *)inputBarControl
         isBlockDefaultEvent:(void (^)(BOOL isBlockDefaultEvent))block;
- (void)emoticonTab:(RCEmojiBoardView *)emojiView
    didTouchSettingButton:(UIButton *)settingButton
               inInputBar:(RCChatSessionInputBarControl *)inputBarControl;
- (void)inputTextViewDidChange:(UITextView *)inputTextView inInputBar:(RCChatSessionInputBarControl *)inputBarControl;
- (void)inputBarStatusDidChange:(KBottomBarStatus)status inInputBar:(RCChatSessionInputBarControl *)inputBarControl;

/*!
 是否需要显示表情加号按钮

 @param inputBarControl  输入工具栏
 */
- (BOOL)isEmoticonAddButtonEnabled:(RCChatSessionInputBarControl *)inputBarControl;

/*!
 是否需要显示表情设置按钮

 @param inputBarControl  输入工具栏
 */
- (BOOL)isEmoticonSettingButtonEnabled:(RCChatSessionInputBarControl *)inputBarControl;

/*!
 是否正在使用声音通道
 */
- (BOOL)isAudioHolding;

/*!
 是否正在使用摄像头
 */
- (BOOL)isCameraHolding;
@end
