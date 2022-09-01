//
//  YTXCoreClient+Friend.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXFriend.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Friend)

/**
 @brief 获取好友列表
 */
- (void)getFriendList:(YTXFullUsersInfoCallback)onSuccess
            onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 获取指定好友资料
 @param uidList 好友id列表
 */
- (void)getFriendsInfo:(NSArray *)uidList
             onSuccess:(YTXFullUsersInfoCallback)onSuccess
             onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 设置指定好友资料
 @param userInfo 修改好友信息的配置参数
 */
- (void)setFriendInfo:(YTXSetFriendInfoOptions *)userInfo
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 添加好友，发送好友申请
 @param uidReqMsg 结构体，包括用户id，handleMsg原因
 */
- (void)addFriend:(YTXUidReqMsg *)uidReqMsg
        onSuccess:(YTXSuccessCallback)onSuccess
        onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 删除好友
 @param uidList 好友id列表
 */
- (void)deleteFriends:(NSArray *)uidList
            onSuccess:(YTXSuccessCallback)onSuccess
            onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 获取好友申请列表
 @param application 申请信息
 */
- (void)getFriendApplicationList:(YTXApplicationRequest *)application
                       onSuccess:(YTXFriendApplicationsCallback)onSuccess
                       onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 同意好友申请
 @param uidHandleMsg 用户请求信息
 */
- (void)acceptFriendApplication:(YTXUidHandleMsg *)uidHandleMsg
                      onSuccess:(YTXSuccessCallback)onSuccess
                      onFailure:(YTXFailureCallback)onFailure;


/**
 @brief 拒绝好友申请
 @param uidHandleMsg 用户请求信息
 */
- (void)refuseFriendApplication:(YTXUidHandleMsg *)uidHandleMsg
                      onSuccess:(YTXSuccessCallback)onSuccess
                      onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 删除好友请求
 @param uidList 好友id列表
 */
- (void)deleteFriendApplications:(NSArray *)uidList
                       onSuccess:(YTXSuccessCallback)onSuccess
                       onFailure:(YTXFailureCallback)onFailure;


/**
 @brief 添加用户到黑名单
 @param uidList 好友id列表
 @param ex 扩展字段
 */
- (void)addToBlackList:(NSArray *)uidList
                    ex:(NSString *)ex
             onSuccess:(YTXSuccessCallback)onSuccess
             onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 把用户从黑名单中删除
 @param uidList 好友id列表
 */
- (void)deleteFromBlackList:(NSArray *)uidList
                  onSuccess:(YTXSuccessCallback)onSuccess
                  onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 获取黑名单列表
 */
- (void)getBlackList:(YTXBlacksInfoCallback)onSuccess
           onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 搜索好友
 @param searchReq 搜索请求参数
 */
- (void)searchFriend:(YTXRequest *)searchReq
            onSuccess:(YTXFriendInfosCallback)onSuccess
            onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 添加用户到白名单
 @param uidList 好友id列表
 */
- (void)addToWhiteList:(NSArray *)uidList
                    ex:(NSString*)ex
             onSuccess:(YTXSuccessCallback)onSuccess
             onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 把用户从白名单中删除
 @param uidList 好友id列表
 */
- (void)deleteFromWhiteList:(NSArray *)uidList
                  onSuccess:(YTXSuccessCallback)onSuccess
                  onFailure:(YTXFailureCallback)onFailure;

/**
 @brief 获取白名单列表
 */
- (void)getWhiteList:(YTXWhiteInfosCallback)onSuccess
           onFailure:(YTXFailureCallback)onFailure;

@end

NS_ASSUME_NONNULL_END
