//
//  YTXLocationMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/2/2.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import "YTXImageMessageProgressView.h"
#import "YTXMessageCell.h"
@interface RCLocalConfiguration : NSObject
+ (instancetype)sharedInstance;
@property (nonatomic, assign) float locationImageQuality;
@property (nonatomic, assign) float locationImageWidth;
@property (nonatomic, assign) float locationImageHeight;
@end


/*!
 位置消息Cell
 */
@interface YTXLocationMessageCell : YTXMessageCell

/*!
 当前位置在地图中的概览图
 */
@property (nonatomic, strong) UIImageView *pictureView;

/*!
 显示位置名称的Label
 */
@property (nonatomic, strong) UILabel *locationNameLabel;

@end
