//
//  YTXTextMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/2/2.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import "YTXAttributedLabel.h"
#import "YTXMessageCell.h"
#import "YTXIMKitInnerHeader.h"
#define Text_Message_Font_Size 17

/*!
 文本消息Cell
 */
@interface YTXTextMessageCell : YTXMessageCell <RCAttributedLabelDelegate>

/*!
 显示消息内容的Label
 */
@property (strong, nonatomic) YTXAttributedLabel *textLabel;

/*!
 设置当前消息Cell的数据模型

 @param model 消息Cell的数据模型
 */
- (void)setDataModel:(YTXMessageModel *)model;

@end
