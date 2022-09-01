//
//  YTXConversationCellUpdateInfo.h
//  RongIMKit
//
//  Created by 岑裕 on 16/9/11.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import "YTXConversationModel.h"
#import <Foundation/Foundation.h>

//UIKIT_EXTERN NSString *const RCKitConversationCellUpdateNotification;

typedef NS_ENUM(NSUInteger, YTXConversationCellUpdateType) {
    YTXConversationCell_MessageContent_Update = 1,
    YTXConversationCell_SentStatus_Update = 2,
    YTXConversationCell_ReceivedStatus_Update = 3,
    YTXConversationCell_UnreadCount_Update = 4,
};

@interface YTXConversationCellUpdateInfo : NSObject

@property (nonatomic, strong) YTXConversationModel *model;
@property (nonatomic, assign) YTXConversationCellUpdateType updateType;

@end
