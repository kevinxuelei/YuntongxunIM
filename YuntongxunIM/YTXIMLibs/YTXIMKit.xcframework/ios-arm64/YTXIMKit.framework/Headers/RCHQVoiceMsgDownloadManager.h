//
//  RCHQVoiceMsgDownloadManager.h
//  YTXIMKit
//
//  Created by Zhaoqianyu on 2019/5/22.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *RCHQDownloadStatusChangeNotify = @"RCHQDownloadStatusChangeNotify";

@interface RCHQVoiceMsgDownloadManager : NSObject

+ (instancetype)defaultManager;

- (void)pushVoiceMsgs:(NSArray<YTXMessage *> *)voiceMsgs priority:(BOOL)priority;

@end

NS_ASSUME_NONNULL_END
