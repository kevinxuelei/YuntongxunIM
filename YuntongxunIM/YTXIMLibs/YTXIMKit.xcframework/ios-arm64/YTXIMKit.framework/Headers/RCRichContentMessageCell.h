//
//  RCRichContentMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/2/2.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import "YTXAttributedLabel.h"
#import "YTXMessageCell.h"
#import "YTXIMKitInnerHeader.h"
/*!
 富文本（图文）消息Cell
 */
@interface RCRichContentMessageCell : YTXMessageCell

/*!
 图片内容显示的View
 */
@property (nonatomic, strong) RCloudImageView *richContentImageView;

/*!
 文本内容显示的Label
 */
@property (nonatomic, strong) YTXAttributedLabel *digestLabel;

/*!
 标题显示的Label
 */
@property (nonatomic, strong) YTXAttributedLabel *titleLabel;

@end
