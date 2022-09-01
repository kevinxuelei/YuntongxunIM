//
//  RCConversationHeaderView.h
//  YTXIMKit
//
//  Created by dongxuelei on 16/9/15.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import "YTXConversationModel.h"
#import "YTXMessageBubbleTipView.h"
#import "YTXThemeDefine.h"
#import "RCloudImageView.h"
#import <UIKit/UIKit.h>

@interface YTXConversationHeaderView : UIView

@property (nonatomic, strong) RCloudImageView *headerImageView;

@property (nonatomic, assign) RCUserAvatarStyle headerImageStyle;

@property (nonatomic, strong) YTXMessageBubbleTipView *bubbleView;

@property (nonatomic, strong) UIView *backgroundView; //向后兼容接口

- (void)updateBubbleUnreadNumber:(int)unreadNumber;

- (void)resetDefaultLayout:(YTXConversationModel *)reuseModel;

@end
