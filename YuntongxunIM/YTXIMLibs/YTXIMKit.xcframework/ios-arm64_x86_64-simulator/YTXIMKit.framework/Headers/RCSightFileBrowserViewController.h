//
//  RCSightFileBrowserViewController.h
//  YTXIMKit
//
//  Created by dongxuelei on 2017/5/12.
//  Copyright © 2017年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXBaseTableViewController.h"

@class YTXMessageModel;
@interface RCSightFileBrowserViewController : YTXBaseTableViewController

- (instancetype)initWithMessageModel:(YTXMessageModel *)model;

@end
