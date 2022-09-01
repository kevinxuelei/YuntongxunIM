//
//  YTXSightMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 2016/12/5.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

//#import "YTXIMKit.h"
#import "YTXIMKitInnerHeader.h"
@class YTXSightMessageProgressView;
@interface YTXSightMessageCell : YTXMessageCell

/*!
 显示小视频缩略图的View
 */
@property (nonatomic, strong) UIImageView *thumbnailView;

/*!
 显示发送进度的View
 */
@property (nonatomic, strong) YTXSightMessageProgressView *progressView;

@end
