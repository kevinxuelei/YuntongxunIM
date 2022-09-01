//
//  YTXFriendshipDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/18.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXFriendshipDelegate_h
#define YTXFriendshipDelegate_h

#import "YTXFriendApplication.h"
#import "YTXFriend.h"
@protocol YTXFriendDelegate <NSObject>

@optional
- (void)onBlackAdded:(NSArray <YTXBlackInfo *> *_Nonnull)blackList;
- (void)onBlackDeleted:(NSArray <YTXBlackInfo *> *_Nonnull)blackList;
- (void)onFriendAdded:(NSArray <YTXFriendInfo *> *_Nonnull)friendList;
- (void)onFriendDeleted:(NSArray <YTXFriendInfo *> *_Nonnull)friendList;
- (void)onFriendApplicationAccepted:(YTXFriendApplication *_Nullable)friendApplication;
- (void)onFriendApplicationAdded:(NSArray <YTXFriendApplication *> *_Nonnull)friendApplicationList;
- (void)onFriendApplicationDeleted:(NSArray <YTXFriendApplication *> *_Nonnull)friendApplicationList;
- (void)onFriendApplicationRejected:(YTXFriendApplication *_Nullable)friendApplication;

/*
 *  好友资料变更通知
 */
- (void)onFriendInfoChanged:(YTXFriendInfo *_Nullable)info;
- (void)onPeerOffline:(YTXFriendInfo* _Nullable)friendInfo;
- (void)onWhiteAdded:(NSArray <YTXWhiteInfo *>* _Nullable)whiteList;
- (void)onWhiteDeleted:(NSArray <YTXWhiteInfo *>* _Nullable)whiteList;
@end
#endif /* YTXFriendshipDelegate_h */
