//
//  RCConversationStatusView.h
//  RongIMKit
//
//  Created by 岑裕 on 16/9/15.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import "YTXConversationModel.h"
#import <UIKit/UIKit.h>

@interface YTXConversationStatusView : UIView

@property (nonatomic, strong) UIImageView *conversationNotificationStatusView;

@property (nonatomic, strong) UIImageView *messageReadStatusView;

- (void)updateReadStatus:(YTXConversationModel *)model;

- (void)updateNotificationStatus:(YTXConversationModel *)model;

- (void)resetDefaultLayout:(YTXConversationModel *)reuseModel;

@end
