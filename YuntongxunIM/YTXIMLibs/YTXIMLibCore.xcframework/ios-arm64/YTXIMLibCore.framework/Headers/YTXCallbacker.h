//
//  YTXCallbacker.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/18.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXCoreDelegate.h"
#import "YTXStatusDefine.h"
#import "YTXUserInfo.h"
#import "YTXFriend.h"
#import "YTXGroupInfo.h"
#import "YTXGroupApplication.h"
#import "YTXConversation.h"
#import "YTXMessage.h"

typedef void (^YTXVoidCallback)(void);
typedef void (^YTXSuccessCallback)(NSString * _Nullable data);
typedef void (^YTXFailureCallback)(NSInteger code, NSString * _Nullable msg);
typedef void (^YTXNumberCallback)(NSInteger number);
typedef void (^YTXStringCallback)(NSString * _Nullable item);

typedef void (^YTXLoginInfoCallback)(YTXLoginInfo * _Nullable loginInfo);
typedef void (^YTXUserInfoCallback)(YTXUserInfo * _Nullable userInfo);
typedef void (^YTXUsersCallback)(NSArray <YTXFriend *> * _Nullable userInfos);
typedef void (^YTXFullUserInfoCallback)(YTXFriend * _Nullable userInfo);
typedef void (^YTXFullUsersInfoCallback)(NSArray <YTXFriend *> * _Nullable friendsInfos);
typedef void (^YTXBlacksInfoCallback)(NSArray <YTXBlackInfo *> * _Nullable blackInfos);
typedef void (^YTXInviteUserResultsCallback)(NSArray <YTXInviteUserResult *> * _Nullable inviteUserResults);

typedef void (^YTXFriendApplicationCallback)(YTXFriendApplication * _Nullable friendApplication);
typedef void (^YTXFriendApplicationsCallback)(NSArray <YTXFriendApplication *> * _Nullable friendApplications);
typedef void (^YTXFriendInfoCallback)(YTXFriendInfo * _Nullable friendInfo);
typedef void (^YTXFriendInfosCallback)(NSArray <YTXFriendInfo *> * _Nullable friendInfo);
typedef void (^YTXGroupsApplicationCallback)(NSArray <YTXGroupApplication *> * _Nullable groupApplications);

typedef void (^YTXGroupInfoCallback)(YTXGroupInfo * _Nullable groupInfo);
typedef void (^YTXGroupInfosCallback)(NSArray <YTXGroupInfo *> * _Nullable groupInfos);
typedef void (^YTXGroupMemberInfoCallback)(YTXGroupMemberInfo * _Nullable groupMemberInfo);
typedef void (^YTXGroupMemberInfosCallback)(NSArray <YTXGroupMemberInfo *> * _Nullable groupMembersInfo);

typedef void (^YTXConversationsInfoCallback)(NSArray <YTXConversation *> * _Nullable conversations);
typedef void (^YTXConversationInfoCallback)(YTXConversation * _Nullable conversation);
typedef void (^YTXMessagesInfoCallback)(NSArray <YTXMessage *> * _Nullable messages);
typedef void (^YTXMessageInfoCallback)(YTXMessage * _Nullable message);

NS_ASSUME_NONNULL_BEGIN
@interface YTXCallbacker : NSObject

+ (instancetype)sharedCallbacker;

- (void)setListener;

/**
 *  添加 IM 监听
 */
- (void)addIMSDKDelegate:(id<YTXSDKDelegate>)delegate;

/**
 *  移除 IM 监听
 */
- (void)removeIMSDKDelegate:(id<YTXSDKDelegate>)delegate;

/**
 *  添加 user 监听
 */
- (void)addUserDelegate:(id<YTXUserDelegate>)delegate;

/**
 *  移除 user 监听
 */
- (void)removeUserDelegate:(id<YTXUserDelegate>)delegate;


/**
 *  添加关系链监听器
 */
- (void)addFriendListener:(id<YTXFriendDelegate>)delegate;

/**
 *   移除关系链监听器
 */
- (void)removeFriendListener:(id<YTXFriendDelegate>)delegate;

/*
 *  设置群组监听器
 */
- (void)addGroupListener:(id<YTXGroupDelegate>)delegate;

/*
 *  设置群组监听器
 */
- (void)removeGroupListener:(id<YTXGroupDelegate>)delegate;

/*
 *  添加会话监听器
 */
- (void)addConversationListener:(id<YTXConversationDelegate>)delegate;

/*
 *  移除会话监听器
 */
- (void)removeConversationListener:(id<YTXConversationDelegate>)delegate;


/*
 *  添加消息的事件监听器
 */
- (void)addMessageListener:(id<YTXMessageDelegate>)delegate;

/*
 *  移除消息的事件监听器
 */
- (void)removeMessageListener:(id<YTXMessageDelegate>)delegate;


/*
 *  添加音视频的事件监听器
 */
- (void)addSignalingListener:(id<YTXSignalingDelegate>)delegate;
/*
 *  移除音视频的事件监听器
 */
- (void)removeSignalingListener:(id<YTXSignalingDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END
