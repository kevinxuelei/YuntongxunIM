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

/**
 @brief 创建群组，创建时添加群成员
 @param list  创建群组时添加的群成员
 @param groupInfo 群组信息（name，avatar等），非必填
 */
- (void)createGroup:(NSArray<YTXMemberListOption *> *)list
          groupInfo:(YTXSetGroupInfoOption *)groupInfo
          onSuccess:(nullable YTXGroupInfoCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 加入群组
 @param groupReqMsg  群组申请
 */
- (void)joinGroup:(YTXGroupReqMsg *)groupReqMsg
        onSuccess:(nullable YTXSuccessCallback)onSuccess
        onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 退出群组，用户主动退出
 @param groupId  群组id
 */
- (void)quitGroup:(NSString *)groupId
        onSuccess:(nullable YTXSuccessCallback)onSuccess
        onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 解散群，只有群主可以解散群
 @param groupId  群组id
 */
- (void)dismissGroup:(NSString *)groupId
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 获取群组列表（已加入的群组）
 @param groupReq  分页下标，起始量
 */
- (void)getJoinedGroupList:(YTXRage *)groupReq
                 OnSuccess:(nullable YTXGroupInfosCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 批量获取群资料
 @param groupIdList  群组id
 */
- (void)getGroupsInfo:(NSArray *)groupIdList
            onSuccess:(nullable YTXGroupInfosCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 修改群资料
 @param groupId  群组id
 @param groupInfo  群组信息（name，avatar等），传入即修改
 */
- (void)setGroupInfo:(NSString *)groupId
           groupInfo:(YTXSetGroupInfoOption *)groupInfo
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 获取群成员列表
 @param groupId  群组id
 @param filterReq  分页过滤标识
 */
- (void)getGroupMemberList:(NSString *)groupId
                 filterReq:(YTXFilterRequest *)filterReq
                 onSuccess:(nullable YTXGetGroupMemberListInfoCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  获取指定的群成员资料
 @param groupId  群组id
 @param uidList  群成员ID数组
 */
- (void)getGroupMembersInfo:(NSString *)groupId
                    uidList:(NSArray *)uidList
                  onSuccess:(nullable YTXGroupMemberInfosCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief  修改群成员资料
 @param groupId  群组id
 @param memberInfo  可修改的用户信息
 */
- (void)setGroupMemberInfo:(NSString *)groupId
                memberInfo:(YTXSetGroupMemberInfoOption *)memberInfo
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief  禁言某个群(只有管理员或群主能够调用）
 @param groupId  群组id
 @param muteHowTime  禁言多久
 @param muteEndTime  禁言结束时间
 */
- (void)changeGroupMute:(NSString *)groupId
            muteEndTime:(NSInteger)muteEndTime
            muteHowTime:(NSInteger)muteHowTime
              onSuccess:(nullable YTXSuccessCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  改变群里成员禁言状态(只有管理员或群主能够调用）
 @param groupId  群组id
 @param uidList  用户id
 @param muteHowTime  禁言多久
 @param muteEndTime  禁言结束时间
 */
- (void)changeGroupMemberMute:(NSString *)groupId
                      uidList:(NSArray *)uidList
                  muteEndTime:(int)muteEndTime
                  muteHowTime:(int)muteHowTime
                    onSuccess:(nullable YTXSuccessCallback)onSuccess
                    onFailure:(nullable YTXFailureCallback)onFailure;



/**
 @brief  改变群里成员禁言状态(只有管理员或群主能够调用）
 @param groupId  群组id
 @param reason   踢出原因
 @param uidList  邀请用户列表
 */
- (void)kickGroupMember:(NSString *)groupId
                 reason:(NSString *)reason
                uidList:(NSArray *)uidList
              onSuccess:(nullable YTXSuccessCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief  转让群主
 @param groupId  群组id
 @param newOwnerUid   新群主用户ID
 */
- (void)transferGroupOwner:(NSString *)groupId
               newOwnerUid:(NSString *)newOwnerUid
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
               onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  转让群主
 @param groupId  群组id
 @param uidList   用户ID
 @param roleLevel  用户角色（ 从 枚举中pick 出 2，3 ，不能设置为1，因为1为群主）
 */
- (void)setMemberRole:(NSString *)groupId
              uidList:(NSArray *)uidList
            roleLevel:(YTXGroupRole)roleLevel
            onSuccess:(nullable YTXSuccessCallback)onSuccess
            onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  邀请他人入群
 @param groupId  群组id
 @param uidList   用户ID
 @param reason  请求验证信息
 */
- (void)inviteUserToGroup:(NSString *)groupId
                  uidList:(NSArray *)uidList
                   reason:(NSString *)reason
                onSuccess:(nullable YTXInviteUserResultsCallback)onSuccess
                onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  获取加群的申请列表（接收到的别人的申请）
 @param applicationReq  参数
 */
- (void)getGroupApplicationList:(YTXApplicationRequest *)applicationReq
                      onSuccess:(nullable YTXGroupsApplicationCallback)onSuccess
                      onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  获取加群的申请列表（接收到的别人的申请）
 @param applicationReq  参数
 */
- (void)acceptGroupApplication:(NSString *)groupId
                applicationReq:(YTXUidReqMsg *)applicationReq
                     onSuccess:(nullable YTXSuccessCallback)onSuccess
                     onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  拒绝某一条加群申请
 @param groupId  群组id
 @param applicationReq  申请信息
 */
- (void)refuseGroupApplication:(NSString *)groupId
                applicationReq:(YTXUidHandleMsg *)applicationReq
                     onSuccess:(nullable YTXSuccessCallback)onSuccess
                     onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief  取群容量
 */
- (void)getGroupMaxAmount:(nullable YTXSuccessCallback)onSuccess
                onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief  搜索群组
 @param searchReq  搜索请求参数
 */
- (void)searchGroup:(YTXRequest *)searchReq
           onSuccess:(nullable YTXGroupInfosCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief  搜索群组
 @param groupId  搜索群成员
 @param searchReq  搜索请求参数
 */
- (void)searchGroupMembers:(NSString *)groupId
                 searchReq:(YTXRequest *)searchReq
                 onSuccess:(nullable YTXGroupMemberInfosCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;

@end

NS_ASSUME_NONNULL_END
