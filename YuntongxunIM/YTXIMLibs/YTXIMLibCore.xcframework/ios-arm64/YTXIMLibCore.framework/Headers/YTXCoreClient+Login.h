//
//  YTXCoreClient+Login.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Login)

- (void)connect:(NSString*)token
      onSuccess:(nullable YTXSuccessCallback)onSuccess
      onFailure:(nullable YTXFailureCallback)onFailure;


- (void)disconnect:(nullable YTXSuccessCallback)onSuccess
         onFailure:(nullable YTXFailureCallback)onFailure;

- (YTXLoginStatus)getConnectStatus;

@end

NS_ASSUME_NONNULL_END
