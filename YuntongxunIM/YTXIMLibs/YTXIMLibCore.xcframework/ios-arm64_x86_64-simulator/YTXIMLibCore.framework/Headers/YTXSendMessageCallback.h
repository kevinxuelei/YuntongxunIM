//
//  YTXSendMessageCallback.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/27.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXCallback.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXSendMessageCallback : YTXCallback
- (instancetype)initWithOnSuccess:(YTXMessageInfoCallback)onSuccess
                       onProgress:(YTXNumberCallback)onProgress
                        onFailure:(YTXFailureCallback)onFailure;
@end

NS_ASSUME_NONNULL_END
