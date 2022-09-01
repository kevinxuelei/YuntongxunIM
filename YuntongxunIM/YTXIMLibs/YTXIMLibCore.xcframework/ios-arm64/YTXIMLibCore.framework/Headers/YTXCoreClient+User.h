//
//  YTXCoreClient+User.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (User)

/**
 @brief 获取登录uid
 */
- (NSString *)getSelfUser;

/**
 @brief 获取全量登录信息
 */
- (void)getSelfUserInfo:(nullable YTXLoginInfoCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 根据用户ID，批量获取用户资料
 @param uidList 用户ID数组 (传空获取自己信息)
 */
- (void)getUsersInfo:(NSArray *)uidList
           onSuccess:(nullable YTXFullUsersInfoCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 修改个人信息
 @param userInfo  用户信息
 */
- (void)setSelfInfo:(YTXSetUserInfoOption *)userInfo
          onSuccess:(nullable YTXSuccessCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 搜索用户
 @param keyword  关键词
 */
- (void)searchUser:(NSString *)keyword
         onSuccess:(nullable YTXPublicInfoCallback)onSuccess
         onFailure:(nullable YTXFailureCallback)onFailure;


@end

NS_ASSUME_NONNULL_END
