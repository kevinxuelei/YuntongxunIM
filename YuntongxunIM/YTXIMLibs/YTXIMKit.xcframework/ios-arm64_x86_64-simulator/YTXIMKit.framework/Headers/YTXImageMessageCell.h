//
//  YTXImageMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/2/2.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import "YTXImageMessageProgressView.h"
#import "YTXMessageCell.h"

/*!
 图片消息Cell
 */
@interface YTXImageMessageCell : YTXMessageCell

/*!
 显示图片缩略图的View
 */
@property (nonatomic, strong) UIImageView *pictureView;

/*!
 显示发送进度的View
 */
@property (nonatomic, strong) YTXImageMessageProgressView *progressView;

@end
