//
//  YTXBaseDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/18.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXBaseDelegate_h
#define YTXBaseDelegate_h


@protocol YTXSDKDelegate <NSObject>

@optional
/*
 * 连接中触发
 */
- (void)onConnecting;
/*
 * 连接成功触发
 */
- (void)onConnected;
/*
 * 连接失败触发
 */
- (void)onConnectFailed:(NSInteger)code err:(NSString*)err;
/*
 * 断开连接触发
 */
- (void)onDisconnect;
/*
 * 被动断开连接触发
 */
- (void)onKickedOffline;
/*
 * token过期触发
 */
- (void)onUserTokenExpired;

- (void)onSyncStart;
- (void)onSyncFailed:(int32_t)errCode errMsg:(NSString* _Nullable)errMsg;
- (void)onSyncFinished;

@end

#endif /* YTXBaseDelegate_h */
