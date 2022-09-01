//
//  RCCombineMessageUtility.h
//  YTXIMKit
//
//  Created by liyan on 2019/8/26.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCCombineMessage.h"

@class YTXMessageModel;

NS_ASSUME_NONNULL_BEGIN

@interface RCCombineMessageUtility : NSObject

+ (NSString *)getCombineMessageSummaryTitle:(YTXMessage *)message;

+ (NSString *)getCombineMessagePreviewVCTitle:(YTXMessage *)message;

+ (NSString *)getCombineMessageSummaryContent:(YTXMessage *)message;

+ (BOOL)allSelectedCombineForwordMessagesAreLegal:(NSArray<YTXMessageModel *> *)allSelectedMessages;

+ (BOOL)allSelectedOneByOneForwordMessagesAreLegal:(NSArray<YTXMessageModel *> *)allSelectedMessages;

@end

NS_ASSUME_NONNULL_END
