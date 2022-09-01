//
//  YTXCallback.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
#import "YTXCallbacker.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXCallback : NSObject
- (instancetype)initWithOnSuccess:(YTXSuccessCallback)onSuccess
                        onFailure:(YTXFailureCallback)onFailure;

- (void)dispatchMainThread:(void (NS_NOESCAPE ^)(void))todo;
@end

NS_ASSUME_NONNULL_END
