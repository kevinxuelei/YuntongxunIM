//
//  YTXCoreClient+User.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (User)

- (NSString*)getSelfUser;

- (void)getSelfUser:(nullable YTXSuccessCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getSelfUserInfo:(nullable YTXLoginInfoCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getUsersInfo:(NSArray*)uidList
           onSuccess:(nullable YTXFullUsersInfoCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;

- (void)setSelfInfo:(YTXSetUserInfoOption*)userInfo
          onSuccess:(nullable YTXSuccessCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;




@end

NS_ASSUME_NONNULL_END
