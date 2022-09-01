//
//  YTXConversationDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/19.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXConversationDelegate_h
#define YTXConversationDelegate_h
#import "YTXConversation.h"
@protocol YTXConversationDelegate <NSObject>

@optional
- (void)onConversationAdded:(NSArray <YTXConversation *> *_Nullable)conversationList;
- (void)onConversationDeleted:(NSArray <YTXConversation *> *_Nullable)conversationList;

/*
 * 某些会话的关键信息发生变化（
 */
- (void)onConversationInfoChanged:(NSArray <YTXConversation *> *_Nonnull)conversations;
- (void)onHasReadCountChanged:(NSInteger)readCount;
- (void)onSyncServerFailed;
- (void)onSyncServerFinish;
- (void)onSyncServerStart;
/*
 * 会话未读总数变更通知
 */
- (void)onTotalUnreadChanged:(NSInteger)totalUnreadCount;
- (void)onTypingStatusChanged:(YTXTypingMessage*_Nullable)msgTip;

@end

#endif /* YTXConversationDelegate_h */
