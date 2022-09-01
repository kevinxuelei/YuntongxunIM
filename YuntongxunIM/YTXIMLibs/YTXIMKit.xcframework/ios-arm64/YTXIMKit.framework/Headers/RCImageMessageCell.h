//
//  RCImageMessageCell.h
//  RongIMKit
//
//  Created by xugang on 15/2/2.
//  Copyright (c) 2015年 RongCloud. All rights reserved.
//

#import "RCImageMessageProgressView.h"
#import "YTXMessageCell.h"

/*!
 图片消息Cell
 */
@interface RCImageMessageCell : YTXMessageCell

/*!
 显示图片缩略图的View
 */
@property (nonatomic, strong) UIImageView *pictureView;

/*!
 显示发送进度的View
 */
@property (nonatomic, strong) RCImageMessageProgressView *progressView;

@end
