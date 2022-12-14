//
//  RCDestructGIFPreviewViewController.h
//  YTXIMKit
//
//  Created by Zhaoqianyu on 2019/9/3.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "YTXIMKit.h"
#import "YTXIMKitInnerHeader.h"
#import "RCGIFImageView.h"

NS_ASSUME_NONNULL_BEGIN

@interface RCDestructGIFPreviewViewController : YTXBaseViewController

/*!
 消息的数据模型
 */
@property (nonatomic, strong) YTXMessageModel *messageModel;

@end

NS_ASSUME_NONNULL_END
