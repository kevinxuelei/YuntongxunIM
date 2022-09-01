//
//  RCCombineMessageUtility.h
//  RongIMKit
//
//  Created by liyan on 2019/8/26.
//  Copyright © 2019 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCCombineMessage.h"

@class YTXMessageModel;

NS_ASSUME_NONNULL_BEGIN

@interface RCCombineMessageUtility : NSObject

+ (NSString *)getCombineMessageSummaryTitle:(RCCombineMessage *)message;

+ (NSString *)getCombineMessagePreviewVCTitle:(RCCombineMessage *)message;

+ (NSString *)getCombineMessageSummaryContent:(RCCombineMessage *)message;

+ (BOOL)allSelectedCombineForwordMessagesAreLegal:(NSArray<YTXMessageModel *> *)allSelectedMessages;

+ (BOOL)allSelectedOneByOneForwordMessagesAreLegal:(NSArray<YTXMessageModel *> *)allSelectedMessages;

@end

NS_ASSUME_NONNULL_END
