//
//  YTXMessageSelectionUtility.h
//  RongIMKit
//
//  Created by 张改红 on 2018/3/29.
//  Copyright © 2018年 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXMessageModel.h"

typedef enum : NSUInteger {
    YTXMessageMultiSelectStatusSelected = 0,
    YTXMessageMultiSelectStatusCancelSelected,
} YTXMessageMultiSelectStatus;
/*!
 message cell 选择状态发生变化
 */
UIKIT_EXTERN NSString *const YTXMessageMultiSelectStatusChanged;

/*!
message cell 选择数量发生变化的代理
*/
@protocol YTXMessagesMultiSelectedProtocol <NSObject>
@optional
/*!
message cell 消息选择数量即将发生变化的回调

@param status 消息 Cell 的选择状态
@param model 消息 Cell 的数据模型
*/
- (BOOL)onMessagesMultiSelectedCountWillChanged:(YTXMessageMultiSelectStatus)status model:(YTXMessageModel *)model;

/*!
message cell 消息选择数量发生变化的回调

@param status 消息 Cell 的选择状态
@param model 消息 Cell 的数据模型
*/
- (void)onMessagesMultiSelectedCountDidChanged:(YTXMessageMultiSelectStatus)status model:(YTXMessageModel *)model;

@end

@interface YTXMessageSelectionUtility : NSObject
// Forward
@property (nonatomic, assign) BOOL multiSelect;
@property (nonatomic, weak) id<YTXMessagesMultiSelectedProtocol> delegate;

+ (instancetype)sharedManager;
- (void)addMessageModel:(YTXMessageModel *)model;
- (void)removeMessageModel:(YTXMessageModel *)model;
- (BOOL)isContainMessage:(YTXMessageModel *)model;
- (NSArray<YTXMessageModel *> *)selectedMessages;
- (void)removeAllMessages;
- (void)clear;
@end
