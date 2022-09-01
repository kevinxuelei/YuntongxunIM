//
//  YTXDownloadFileCallback.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/7/29.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXCallback.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXDownloadFileCallback : YTXCallback
- (instancetype)initWithOnSuccess:(YTXSuccessCallback)onSuccess
                       onProgress:(YTXNumberCallback)onProgress
                        onFailure:(YTXFailureCallback)onFailure;
@end

NS_ASSUME_NONNULL_END
