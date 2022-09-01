//
//  RCSightFileBrowserViewController.h
//  RongIMKit
//
//  Created by zhaobingdong on 2017/5/12.
//  Copyright © 2017年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXBaseTableViewController.h"

@class YTXMessageModel;
@interface RCSightFileBrowserViewController : YTXBaseTableViewController

- (instancetype)initWithMessageModel:(YTXMessageModel *)model;

@end
