//
//  YTXCoreClient+Login.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Login)

/**
 @brief 登录IM
 @param token 用户token
 @param refreshToken 用户refreshToken
 */
- (void)connect:(NSString *)token
   refreshToken:(NSString *)refreshToken
      onSuccess:(nullable YTXSuccessCallback)onSuccess
      onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 登出IM
 */
- (void)disconnect:(nullable YTXSuccessCallback)onSuccess
         onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 设置推送token
 @param pushToken pushToken
 @param pushKitToken pushKitToken
 */
- (void)setPushToken:(NSString *)pushToken
        pushKitToken:(NSString *)pushKitToken
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 获取当前用户登录状态
 */
- (YTXLoginStatus)getConnectStatus;

@end

NS_ASSUME_NONNULL_END
