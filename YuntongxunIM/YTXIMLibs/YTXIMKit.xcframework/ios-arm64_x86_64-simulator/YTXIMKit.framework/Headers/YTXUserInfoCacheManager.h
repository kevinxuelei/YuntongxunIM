//
//  YTXUserInfoCacheManager.h
//  RongIMKit
//
//  Created by 岑裕 on 16/1/22.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

//#import "YTXConversationInfoCache.h"
//#import "YTXConversationUserInfoCache.h"
//#import "YTXIMKitInnerHeader.h"
//#import "YTXUserInfoCache.h"
//#import "YTXUserInfoCacheDBHelper.h"
#import <Foundation/Foundation.h>
//#import <YTXIMLibCore/YTXIMLibCore.h>

//消息分发
FOUNDATION_EXPORT NSString *const RCKitDispatchUserInfoUpdateNotification;
FOUNDATION_EXPORT NSString *const RCKitDispatchGroupUserInfoUpdateNotification;
FOUNDATION_EXPORT NSString *const RCKitDispatchGroupInfoUpdateNotification;
FOUNDATION_EXPORT NSString *const RCKitDispatchPublicServiceInfoNotification;

#define rcUserInfoWriteDBHelper ([YTXUserInfoCacheManager sharedManager].writeDBHelper)
#define rcUserInfoReadDBHelper ([YTXUserInfoCacheManager sharedManager].readDBHelper)
#define rcUserInfoDBQueue ([YTXUserInfoCacheManager sharedManager].dbQueue)

@interface YTXUserInfoCacheManager : NSObject
//
//@property (nonatomic, strong) YTXUserInfoCacheDBHelper *writeDBHelper;
//@property (nonatomic, strong) YTXUserInfoCacheDBHelper *readDBHelper;
@property (nonatomic, strong) dispatch_queue_t dbQueue;

+ (instancetype)sharedManager;

// appkey, token, userId, 确定存储的DB路径
@property (nonatomic, copy) NSString *appKey;
@property (nonatomic, copy) NSString *currentUserId;

#pragma mark - UserInfo

////从cache现取，没有值直接返回nil，并调用用户信息提供者
//- (YTXUserInfo *)getUserInfo:(NSString *)userId;
//
////从cache和用户信息提供者取
//- (void)getUserInfo:(NSString *)userId complete:(void (^)(YTXUserInfo *userInfo))completeBlock;
//
////只获取当前cache中的用户信息，不进行任何回调
//- (YTXUserInfo *)getUserInfoFromCacheOnly:(NSString *)userId;
//
//- (void)updateUserInfo:(YTXUserInfo *)userInfo forUserId:(NSString *)userId;
//
//- (void)clearUserInfoNetworkCacheOnly:(NSString *)userId;
//
//- (void)clearUserInfo:(NSString *)userId;
//
//- (void)clearAllUserInfo;
//
//#pragma mark - GroupUserInfo (sugar for ConversationUserInfo)
//
//@property (nonatomic, assign) BOOL groupUserInfoEnabled;
//
//- (YTXUserInfo *)getUserInfo:(NSString *)userId inGroupId:(NSString *)groupId;
//
//- (void)getUserInfo:(NSString *)userId
//          inGroupId:(NSString *)groupId
//           complete:(void (^)(YTXUserInfo *userInfo))completeBlock;
//
//- (YTXUserInfo *)getUserInfoFromCacheOnly:(NSString *)userId inGroupId:(NSString *)groupId;
//
//- (void)updateUserInfo:(YTXUserInfo *)userInfo forUserId:(NSString *)userId inGroup:(NSString *)groupId;
//
//- (void)clearGroupUserInfoNetworkCacheOnly:(NSString *)userId inGroup:(NSString *)groupId;
//
//- (void)clearGroupUserInfo:(NSString *)userId inGroup:(NSString *)groupId;
//
//- (void)clearAllGroupUserInfo;
//
//#pragma mark - GroupInfo (sugar for ConversationInfo)
//
//- (RCGroup *)getGroupInfo:(NSString *)groupId;
//
//- (void)getGroupInfo:(NSString *)groupId complete:(void (^)(RCGroup *groupInfo))completeBlock;
//
//- (RCGroup *)getGroupInfoFromCacheOnly:(NSString *)groupId;
//
//- (void)updateGroupInfo:(RCGroup *)groupInfo forGroupId:(NSString *)groupId;
//
//- (void)clearGroupInfoNetworkCacheOnly:(NSString *)groupId;
//
//- (void)clearGroupInfo:(NSString *)groupId;
//
//- (void)clearAllGroupInfo;
//
//#pragma mark - PublicServiceProfile
//- (RCPublicServiceProfile *)getPublicServiceProfile:(NSString *)serviceId;
//
//- (void)updatePublicServiceProfileInfo:(RCPublicServiceProfile *)profileInfo forServiceId:(NSString *)serviceId;

@end
