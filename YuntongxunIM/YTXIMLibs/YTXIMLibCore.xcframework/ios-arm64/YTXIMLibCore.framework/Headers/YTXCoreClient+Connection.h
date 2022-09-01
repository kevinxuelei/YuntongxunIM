//
//  YTXCoreClient+Connection.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXBaseConfigOption.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Connection)

- (BOOL)initSDK:(YTXBaseConfigOption*)configure;

- (void)setHeartbeatInterval:(NSInteger)heartbeatInterval;

- (void)wakeUpWithOnSuccess:(nullable YTXSuccessCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;
@end

NS_ASSUME_NONNULL_END
