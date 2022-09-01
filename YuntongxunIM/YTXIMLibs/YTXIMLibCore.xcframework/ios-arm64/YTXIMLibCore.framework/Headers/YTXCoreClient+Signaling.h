//
//  YTXCoreClient+Signaling.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/30.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreClient (Signaling)
//
///*
// * 邀请个人加入音视频
// *
// * @param invitation
// * 邀请个人加入：
//    {
//        "inviteeUserIDList": ["userID"],  //只有一个元素
//        "roomID": "roomID",
//        "timeout": 1000,
//        "mediaType": "video",
//        "sessionType": x,
//    }
// * 邀请群里某些人加入音视频
//    {
//        "inviteeUserIDList": ["useID1", "userID2"],
//        "groupID": "groupID",
//        "roomID": "roomID",
//        "timeout": 1000,
//        "mediaType": "video",
//        "sessionType": x
//    }
// * @param offlinePushInfo 离线push消息
// */
//- (void)signalingInvite:(YTXInvitationInfo *)invitation
//        offlinePushInfo:(YTXOfflinePushInfo * _Nullable)offlinePushInfo
//              onSuccess:(nullable YTXSignalingResultCallback)onSuccess
//              onFailure:(nullable YTXFailureCallback)onFailure;
//
//
//- (void)signalingInviteInGroup:(YTXInvitationInfo *)invitation
//                     onSuccess:(nullable YTXSignalingResultCallback)onSuccess
//                     onFailure:(nullable YTXFailureCallback)onFailure;
//
///*
// *  同意某人音视频邀请
// *  opUserID 操作人的ID
// *  invitation
//    {
//         "inviterUserID": "userID",
//         "inviteeUserIDList": [
//             "userID"
//         ],
//         "groupID": "groupID",
//         "roomID": "roomID",
//         "timeout": 1000,
//         "mediaType": "video",
//         "sessionType": x
//     }
// */
//- (void)signalingAccept:(YTXSignalingInfo *)invitation
//              onSuccess:(nullable YTXSignalingResultCallback)onSuccess
//              onFailure:(nullable YTXFailureCallback)onFailure;
//
///*
// *  拒绝某人音视频邀请
// *  opUserID 操作人的ID
// *  invitation
//    {
//         "inviterUserID": "userID",
//         "inviteeUserIDList": [
//             "userID"
//         ],
//         "groupID": "groupID",
//         "roomID": "roomID",
//         "timeout": 1000,
//         "mediaType": "video",
//         "sessionType": x
//     }
// */
//- (void)signalingReject:(YTXSignalingInfo *)invitation
//              onSuccess:(nullable YTXSuccessCallback)onSuccess
//              onFailure:(nullable YTXFailureCallback)onFailure;
//
///*
// *  取消某人音视频邀请
// *  opUserID 操作人的ID
// *  invitation
//    {
//         "inviterUserID": "userID",
//         "inviteeUserIDList": [
//             "userID"
//         ],
//         "groupID": "groupID",
//         "roomID": "roomID",
//         "timeout": 1000,
//         "mediaType": "video",
//         "sessionType": x
//     }
// */
//- (void)signalingCancel:(YTXSignalingInfo *)invitation
//              onSuccess:(nullable YTXSuccessCallback)onSuccess
//              onFailure:(nullable YTXFailureCallback)onFailure;
//
//
//- (void)signalingHungUp:(YTXSignalingInfo *)invitation
//              onSuccess:(nullable YTXSuccessCallback)onSuccess
//              onFailure:(nullable YTXFailureCallback)onFailure;
@end

NS_ASSUME_NONNULL_END
