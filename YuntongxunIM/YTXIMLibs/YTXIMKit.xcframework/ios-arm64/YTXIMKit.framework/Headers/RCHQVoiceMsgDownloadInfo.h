//
//  RCHQVoiceMsgDownloadInfo.h
//  YTXIMKit
//
//  Created by Zhaoqianyu on 2019/5/22.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    RCHQDownloadStatusWaiting = 0,
    RCHQDownloadStatusSuccess = 1,
    RCHQDownloadStatusDownloading = 2,
    RCHQDownloadStatusFailed = 3,
} RCHQDownloadStatus;

@interface RCHQVoiceMsgDownloadInfo : NSObject

@property (nonatomic, strong) YTXMessage *hqVoiceMsg;

@property (nonatomic, assign) RCHQDownloadStatus status;

@end

NS_ASSUME_NONNULL_END
