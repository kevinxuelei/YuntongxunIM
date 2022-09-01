//
//  YTXTipMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/1/29.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import "YTXMessageBasedCell.h"

/*!
 提示消息Cell
 */
@interface YTXTipMessageCell : YTXMessageBasedCell

/*!
 提示的Label
 */
@property (strong, nonatomic) YTXTipLabel *tipMessageLabel;

/*!
 设置当前消息Cell的数据模型

 @param model 消息Cell的数据模型
 */
- (void)setDataModel:(YTXMessageModel *)model;

@end
