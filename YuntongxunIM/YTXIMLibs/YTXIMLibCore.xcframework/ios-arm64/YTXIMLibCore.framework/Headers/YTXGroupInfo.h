//
//  YTXGroup.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXGroupInfo : NSObject
/**
 @brief 群组ID
 */
@property (nonatomic, copy) NSString *groupId;
/**
 @brief 群组名称
 */
@property (nonatomic, copy) NSString *groupName;
/**
 @brief groupType
 */
@property (nonatomic, assign) YTXGroupType groupType;
/**
 @brief groupStatus
 */
@property (nonatomic, assign) YTXGroupStatus groupStatus;
/**
 @brief  群组头像 URL（最长100字节—不可调整）
 */
@property (nonatomic, copy) NSString *faceUrl;
/**
 @brief 群组简介
 */
@property (nonatomic, copy) NSString *introduction;
/**
 @brief 群组公告
 */
@property (nonatomic, copy) NSString *notification;
/**
 @brief 群主 ID
 */
@property (nonatomic, copy) NSString *ownerUid;
/**
 @brief 禁言结束时间
 */
@property (nonatomic, assign) NSInteger muteEndTime;
/**
 @brief 最大成员数量
 */
@property (nonatomic, assign) NSInteger maxMemberCount;
/**
 @brief 设置全体禁言，true 表示全体禁言，false 表示取消
 */
@property (nonatomic, assign) BOOL isMute;
/**
 @brief 当前群组人数
 */
@property (nonatomic, assign) NSInteger memberCount;
/**
 @brief 创建时间
 */
@property (nonatomic, assign) NSInteger createTime;
/**
 @brief 创建人
 */
@property (nonatomic, copy) NSString *creatorUid;
/**
 @brief 群组自定义
 */
@property (nonatomic, strong) NSArray *groupCustomField;

/**
 @brief 群资料的每次变都会增加该值
 */
@property (nonatomic, assign) NSInteger infoSequence;

/**
 @brief 群组最后一次信息变更时间
 */
@property (nonatomic, assign) NSInteger lastInfoTime;

/**
 @brief 群组状态
 */
@property (nonatomic, assign) NSInteger status;
/**
 @brief attachedInfo
 */
@property (nonatomic, nullable, copy) NSString *attachedInfo;
/**
 @brief  扩展字段
 */
@property (nonatomic, nullable, copy) NSString *ex;
@end


@interface YTXMemberListOption : NSObject
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, assign) YTXGroupRole roleLevel;
@end

//@interface YTXCreateGroupOption : NSObject
///**
// @brief 群组名称
// */
//@property (nonatomic, copy) NSString *groupName;
///**
// @brief type
// */
//@property (nonatomic, assign) YTXGroupType groupType;
///**
// @brief  群组头像 URL（最长100字节—不可调整）
// */
//@property (nonatomic, copy) NSString *faceUrl;
///**
// @brief 群组简介
// */
//@property (nonatomic, copy) NSString *introduction;
///**
// @brief 群组公告
// */
//@property (nonatomic, copy) NSString *notification;
///**
// @brief  扩展字段
// */
//@property (nonatomic, nullable, copy) NSString *ex;
//@end


@interface YTXGroupReqMsg : NSObject
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *reqMsg;
@end

@interface YTXSetGroupInfoOption : NSObject
/**
 @brief 群组名称
 */
@property (nonatomic, copy) NSString *groupName;
/**
 @brief  群组头像 URL（最长100字节—不可调整）
 */
@property (nonatomic, copy) NSString *faceUrl;
/**
 @brief 群组简介
 */
@property (nonatomic, copy) NSString *introduction;
/**
 @brief 群组公告
 */
@property (nonatomic, copy) NSString *notification;
/**
 @brief  扩展字段
 */
@property (nonatomic, nullable, copy) NSString *ex;
/**
@brief  扩展字段
*/
@property (nonatomic, assign) NSInteger groupType;
@end

@interface YTXSetGroupMemberInfoOption : NSObject
/**
 @brief 备注
 */
@property (nonatomic, copy) NSString *remark;
/**
 @brief  群成员扩展信息
 */
@property (nonatomic, copy) NSString *ex;

@end

@interface YTXApplicationOptions : NSObject
@property (nonatomic, assign) YTXApplicationType applicationType;
@property (nonatomic, copy) NSString *groupreqMsg;
@end



NS_ASSUME_NONNULL_END
