//
//  YTXCoreClient+Group.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXGroupMemberInfo.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Group)

- (void)createGroup:(NSArray<YTXMemberListOption *> *)list
          groupInfo:(YTXSetGroupInfoOption*)groupInfo
          onSuccess:(nullable YTXGroupInfoCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

- (void)joinGroup:(YTXGroupReqMsg*)groupReqMsg
        onSuccess:(nullable YTXSuccessCallback)onSuccess
        onFailure:(nullable YTXFailureCallback)onFailure;

- (void)quitGroup:(NSString*)groupId
        onSuccess:(nullable YTXSuccessCallback)onSuccess
        onFailure:(nullable YTXFailureCallback)onFailure;

- (void)dismissGroup:(NSString*)groupId
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getJoinedGroupList:(YTXRage*)groupReq
                 OnSuccess:(nullable YTXGroupInfosCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getGroupsInfo:(NSArray*)groupIdList
            onSuccess:(nullable YTXGroupInfosCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;

- (void)setGroupInfo:(NSString*)groupId
           groupInfo:(YTXSetGroupInfoOption*)groupInfo
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getGroupMemberList:(NSString*)groupId
                 filterReq:(YTXFilterRequest*)filterReq
                 onSuccess:(nullable YTXGroupMemberInfosCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getGroupMembersInfo:(NSString*)groupId
                    uidList:(NSArray*)uidList
                  onSuccess:(nullable YTXGroupMemberInfosCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;

- (void)setGroupMemberInfo:(NSString*)groupId
                memberInfo:(YTXSetGroupMemberInfoOption*)memberInfo
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

- (void)changeGroupMute:(NSString*)groupId
            muteEndTime:(int)muteEndTime
            muteHowTime:(int)muteHowTime
              onSuccess:(nullable YTXSuccessCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;

- (void)changeGroupMemberMute:(NSString*)groupId
                      uidList:(NSArray*)uidList
                  muteEndTime:(int)muteEndTime
                  muteHowTime:(int)muteHowTime
                    onSuccess:(nullable YTXSuccessCallback)onSuccess
                    onFailure:(nullable YTXFailureCallback)onFailure;

- (void)kickGroupMember:(NSString*)groupId
                 reason:(NSString*)reason
                uidList:(NSArray*)uidList
              onSuccess:(nullable YTXSuccessCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;

- (void)transferGroupOwner:(NSString*)groupId
               newOwnerUid:(NSString*)newOwnerUid
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
               onFailure:(nullable YTXFailureCallback)onFailure;

- (void)setMemberRole:(NSString*)groupId
              uidList:(NSArray*)uidList
            roleLevel:(YTXGroupRole)roleLevel
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;

- (void)inviteUserToGroup:(NSString*)groupId
                  uidList:(NSArray*)uidList
                   reason:(NSString*)reason
                onSuccess:(nullable YTXInviteUserResultsCallback)onSuccess
                onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getGroupApplicationList:(YTXApplicationRequest*)applicationReq
                      onSuccess:(nullable YTXGroupsApplicationCallback)onSuccess
                      onFailure:(nullable YTXFailureCallback)onFailure;

- (void)acceptGroupApplication:(NSString*)groupId
                applicationReq:(YTXUidReqMsg*)applicationReq
                     onSuccess:(nullable YTXSuccessCallback)onSuccess
                     onFailure:(nullable YTXFailureCallback)onFailure;

- (void)refuseGroupApplication:(NSString*)groupId
                applicationReq:(YTXUidHandleMsg*)applicationReq
                     onSuccess:(nullable YTXSuccessCallback)onSuccess
                     onFailure:(nullable YTXFailureCallback)onFailure;

- (void)getGroupMaxAmount:(nullable YTXSuccessCallback)onSuccess
                onFailure:(nullable YTXFailureCallback)onFailure;

- (void)searchGroup:(YTXRequest*)searchReq
           onSuccess:(nullable YTXGroupInfosCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;

- (void)searchGroupMembers:(NSString*)groupId
                   keyword:(YTXRequest*)searchReq
                 onSuccess:(nullable YTXGroupMemberInfosCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

@end

NS_ASSUME_NONNULL_END
