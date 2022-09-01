//
//  YTXCoreDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/18.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXCoreDelegate_h
#define YTXCoreDelegate_h

#import <YTXIMLibCore/YTXSDKDelegate.h>
#import <YTXIMLibCore/YTXFriendDelegate.h>
#import <YTXIMLibCore/YTXGroupDelegate.h>
#import <YTXIMLibCore/YTXSignalingDelegate.h>
#import <YTXIMLibCore/YTXConversationDelegate.h>
#import <YTXIMLibCore/YTXMessageDelegate.h>
#import <YTXIMLibCore/YTXUserDelegate.h>

/**
 * SDK消息接收代理
 * 设置代理用于接收网络消息、与平台连接消息、接收对方消息等SDK上报的消息；
 */
@protocol YTXCoreDelegate <YTXSDKDelegate,YTXFriendDelegate,YTXGroupDelegate,YTXSignalingDelegate,YTXConversationDelegate,YTXMessageDelegate,YTXUserDelegate>


@end

#endif /* YTXCoreDelegate_h */
