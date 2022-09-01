//
//  YTXKitConfig.h
//  RongIMKit
//
//  Created by Sin on 2020/6/23.
//  Copyright © 2020 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXKitFontConf.h"
#import "YTXKitMessageConf.h"
#import "YTXKitUIConf.h"

#define YTXKitConfigCenter [YTXKitConfig defaultConfig]

/// IMKit 的全局配置按照模块进行划分
@interface YTXKitConfig : NSObject

+ (instancetype)defaultConfig;

/// 消息配置
@property (nonatomic, strong) YTXKitMessageConf *message;

/// UI 配置
@property (nonatomic, strong) YTXKitUIConf *ui;

/// 字体配置
@property (nonatomic, strong) YTXKitFontConf *font;
@end
