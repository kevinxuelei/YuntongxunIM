//
//  RCConversationDetailContentView.h
//  RongIMKit
//
//  Created by 岑裕 on 16/9/15.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

//#import "RCConversationModel.h"
//#import <RongIMLib/RongIMLib.h>
#import "YTXConversationModel.h"
#import <UIKit/UIKit.h>

@interface YTXConversationDetailContentView : UIView

@property (nonatomic, strong) UILabel *hightlineLabel;

@property (nonatomic, strong) UIImageView *sentStatusView;

@property (nonatomic, strong) UILabel *messageContentLabel;

- (void)updateContent:(YTXConversationModel *)model;

- (void)updateContent:(YTXConversationModel *)model prefixName:(NSString *)prefixName;

- (void)resetDefaultLayout:(YTXConversationModel *)reuseModel;

- (void)updateLayout;
@end
