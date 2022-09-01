//
//  RCSightSlideViewController.h
//  YTXIMKit
//
//  Created by dongxuelei on 2017/5/2.
//  Copyright © 2017年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXBaseViewController.h"

@class YTXMessageModel;

@interface RCSightSlideViewController : YTXBaseViewController

/*!
 当前消息的数据模型
 */
@property (nonatomic, strong) YTXMessageModel *messageModel;

@property (nonatomic, assign) BOOL topRightBtnHidden;

/*!
 是否只预览当前视频消息，默认为 NO，支持当前会话视频消息滑动预览，如果设置为 YES， 只预览当前视频消息
*/
@property (nonatomic, assign) BOOL onlyPreviewCurrentMessage;

@end
