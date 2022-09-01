//
//  YTXAdvancedMsgDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/19.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXAdvancedMsgDelegate_h
#define YTXAdvancedMsgDelegate_h
#import "YTXMessage.h"
@protocol YTXMessageDelegate <NSObject>

@optional
/*
 *  消息接收
 */
- (void)onMessageReceived:(YTXMessage *_Nullable)message;
/*
 *  消息撤回
 */
- (void)onMessageRevoked:(YTXMessage *_Nullable)message;
/*
 *  单聊消息已读回执
 */
- (void)onReceivedC2CReadReceipt:(NSArray<YTXMessageReceipt *> *_Nullable)receiptList;
/*
 *  群聊消息已读回执
 */
- (void)onReceivedGroupReadReceipt:(NSArray<YTXMessageReceipt *> *_Nullable)groupMsgReceiptList;


- (void)onReceivedMessageRevoked:(NSString* _Nullable)msgId;



@end


#endif /* YTXAdvancedMsgDelegate_h */
