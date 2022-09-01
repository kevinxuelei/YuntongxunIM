//
//  YTXUnknownMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 3/31/15.
//  Copyright (c) 2015 yuntongxun. All rights reserved.
//

#import "YTXMessageBasedCell.h"
#import "YTXIMKitInnerHeader.h"
/*!
 未知消息Cell
 */
@interface YTXUnknownMessageCell : YTXMessageBasedCell

/*!
 提示的Label
 */
@property (strong, nonatomic) YTXTipLabel *messageLabel;

/*!
 设置当前消息Cell的数据模型

 @param model 消息Cell的数据模型
 */
- (void)setDataModel:(YTXMessageModel *)model;

@end
