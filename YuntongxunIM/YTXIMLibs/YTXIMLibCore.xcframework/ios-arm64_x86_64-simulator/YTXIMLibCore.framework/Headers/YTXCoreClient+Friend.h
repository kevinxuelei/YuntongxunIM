//
//  YTXCoreClient+Friend.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXFriend.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Friend)
- (void)getFriendList:(YTXFullUsersInfoCallback)onSuccess
            onFailure:(YTXFailureCallback)onFailure;

- (void)getFriendsInfo:(NSArray*)uidList
             onSuccess:(YTXFullUsersInfoCallback)onSuccess
             onFailure:(YTXFailureCallback)onFailure;

- (void)setFriendInfo:(YTXSetFriendInfoOptions*)userInfo
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;

- (void)addFriend:(YTXUidReqMsg*)uidReqMsg
        onSuccess:(YTXSuccessCallback)onSuccess
        onFailure:(YTXFailureCallback)onFailure;

- (void)deleteFriends:(NSArray*)uidList
            onSuccess:(YTXSuccessCallback)onSuccess
            onFailure:(YTXFailureCallback)onFailure;

- (void)getFriendApplicationList:(YTXApplicationRequest*)application
                       onSuccess:(YTXFriendApplicationsCallback)onSuccess
                       onFailure:(YTXFailureCallback)onFailure;

- (void)acceptFriendApplication:(YTXUidHandleMsg*)uidHandleMsg
                      onSuccess:(YTXSuccessCallback)onSuccess
                      onFailure:(YTXFailureCallback)onFailure;


- (void)refuseFriendApplication:(YTXUidHandleMsg*)uidHandleMsg
                      onSuccess:(YTXSuccessCallback)onSuccess
                      onFailure:(YTXFailureCallback)onFailure;

- (void)deleteFriendApplications:(NSArray*)uidList
                       onSuccess:(YTXSuccessCallback)onSuccess
                       onFailure:(YTXFailureCallback)onFailure;

- (void)addToBlackList:(NSArray*)uidList
                    ex:(NSString*)ex
             onSuccess:(YTXSuccessCallback)onSuccess
             onFailure:(YTXFailureCallback)onFailure;

- (void)deleteFromBlackList:(NSArray*)uidList
                  onSuccess:(YTXSuccessCallback)onSuccess
                  onFailure:(YTXFailureCallback)onFailure;

- (void)getBlackList:(YTXBlacksInfoCallback)onSuccess
           onFailure:(YTXFailureCallback)onFailure;

- (void)searchFriend:(YTXRequest*)searchReq
            onSuccess:(YTXFriendInfosCallback)onSuccess
            onFailure:(YTXFailureCallback)onFailure;


- (void)addToWhiteList:(NSArray*)uidList
             onSuccess:(YTXFullUsersInfoCallback)onSuccess
             onFailure:(YTXFailureCallback)onFailure;

- (void)deleteFromWhiteList:(NSArray*)uidList
                  onSuccess:(YTXFullUsersInfoCallback)onSuccess
                  onFailure:(YTXFailureCallback)onFailure;

- (void)getWhiteList:(YTXFullUsersInfoCallback)onSuccess
           onFailure:(YTXFailureCallback)onFailure;

@end

NS_ASSUME_NONNULL_END
