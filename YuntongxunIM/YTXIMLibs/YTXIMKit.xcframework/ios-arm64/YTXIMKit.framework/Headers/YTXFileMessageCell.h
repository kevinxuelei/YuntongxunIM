//
//  YTXFileMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 16/7/21.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import "YTXMessageCell.h"
#import <UIKit/UIKit.h>
#import "YTXProgressView.h"
/*!
 文件消息Cell
 */
@interface YTXFileMessageCell : YTXMessageCell

/*!
 显示文件名的Label
 */
@property (strong, nonatomic) UILabel *nameLabel;

/*!
 显示文件大小的Label
 */
@property (strong, nonatomic) UILabel *sizeLabel;

/*!
 文件类型的ImageView
 */
@property (strong, nonatomic) UIImageView *typeIconView;

/*!
 上传或下载的进度条View
 */
@property (nonatomic, strong) YTXProgressView *progressView;

/*!
 取消发送的Button
 */
@property (nonatomic, strong) UIButton *cancelSendButton;

/*!
 显示“已取消”的Label
 */
@property (nonatomic, strong) UILabel *cancelLabel;

@end
