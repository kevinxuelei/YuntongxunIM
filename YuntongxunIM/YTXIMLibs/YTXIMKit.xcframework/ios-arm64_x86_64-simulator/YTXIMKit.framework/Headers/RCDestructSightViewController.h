//
//  RCDestructSightViewController.h
//  YTXIMKit
//
//  Created by Zhaoqianyu on 2018/5/12.
//  Copyright © 2018年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXBaseViewController.h"

@class YTXMessageModel;

@interface RCDestructSightViewController : YTXBaseViewController

/*!
 当前消息的数据模型
 */
@property (nonatomic, strong) YTXMessageModel *messageModel;

@end
