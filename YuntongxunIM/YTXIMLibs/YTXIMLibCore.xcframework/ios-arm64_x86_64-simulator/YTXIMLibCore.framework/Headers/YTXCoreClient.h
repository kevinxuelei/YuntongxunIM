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
#import "YTXMessage.h"
#import "YTXStatusDefine.h"
#import "YTXUserInfo.h"
#import "YTXGroupInfo.h"
#import "YTXConversation.h"



NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient : NSObject

/*!
 获取云通信通讯能力库 IMLibCore 的核心类单例

 @return 云通信通讯能力库 IMLibCore 的核心单例类

 @discussion 您可以通过此方法，获取 IMLibCore 的单例，访问对象中的属性和方法.
 */
+ (instancetype)sharedCoreClient;


@property (nonatomic, strong, class, readonly) YTXCallbacker *callbacker;


-(NSString*)getSDKVersion;


-(NSString*)getTraceId;


-(void)printDebugLog:(NSString *)loginfo forceLog:(BOOL)forceLog logLevel:(int)logLevel;


@end

NS_ASSUME_NONNULL_END
