//
//  RCGIFMessageCell.h
//  YTXIMKit
//
//  Created by liyan on 2018/12/20.
//  Copyright © 2018年 yuntongxun. All rights reserved.
//

#import "YTXMessageCell.h"
#import "RCGIFImageView.h"
#import "YTXImageMessageProgressView.h"

NS_ASSUME_NONNULL_BEGIN

@interface RCGIFMessageCell : YTXMessageCell

/*!
 显示图片缩略图的View
 */
@property (nonatomic, strong) RCGIFImageView *gifImageView;

/*!
 显示发送进度的View
 */
@property (nonatomic, strong) YTXImageMessageProgressView *progressView;

@end

NS_ASSUME_NONNULL_END
