//
//  YTXCoreClient.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/11.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YTXCallback.h"
#import "YTXCallbacker.h"
#import "YTXSendMessageCallback.h"
#import "YTXDownloadFileCallback.h"
#import "YTXMessage.h"
#import "YTXStatusDefine.h"
#import "YTXUserInfo.h"
#import "YTXGroupInfo.h"
#import "YTXConversation.h"



NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient : NSObject

/**
 @brief 单例核心类
 */
+ (instancetype)sharedCoreClient;

/**
 @brief 回调类
 */
@property (nonatomic, strong, class, readonly) YTXCallbacker *callbacker;

/**
 @brief 获取SDK版本号
 */
-(NSString*)getSDKVersion;

/**
 @brief 设置设备推送Token
 */
-(void)setDeviceTokenData:(NSData* )deviceToken;


-(NSString*)getTraceId;


-(void)printDebugLog:(NSString *)loginfo forceLog:(BOOL)forceLog logLevel:(int)logLevel;

@end

NS_ASSUME_NONNULL_END
