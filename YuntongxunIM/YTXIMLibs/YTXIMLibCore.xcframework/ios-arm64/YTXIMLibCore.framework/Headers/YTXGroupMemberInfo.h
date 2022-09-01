//
//  YTXGroupMemberInfo.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXGroupMemberInfo : NSObject
/**
 @brief  群组ID
 */
@property (nonatomic, copy) NSString *groupId;
/**
 @brief  群成员 ID
 */
@property (nonatomic, copy) NSString *uid;

/**
 @brief  群成员头像 URL
 */
@property (nonatomic, copy) NSString *avatar;
/**
 @brief  群成员昵称
 */
@property (nonatomic, copy) NSString *nick;

/**
 @brief  群内身份
 
 TIM.TYPES.GRP_MBR_ROLE_OWNER（群主）
 TIM.TYPES.GRP_MBR_ROLE_ADMIN（群管理员）
 TIM.TYPES.GRP_MBR_ROLE_MEMBER（群普通成员）
 */
@property (nonatomic, assign) YTXGroupRole roleLevel;

/**
 @brief  入群时间
 */
@property (nonatomic, copy) NSString* joinTime;

/**
 @brief  入群方式
 */
@property (nonatomic, assign) NSInteger joinSource;

/**
 @brief  操作者ID
 */
@property (nonatomic, assign) NSInteger operatorUid;
/**
 @brief  禁言结束时间
 */
@property (nonatomic, assign) NSInteger muteEndTime;
/**
 @brief  应用程序管理器级别
 */
@property (nonatomic, assign) NSInteger appMangerLevel;
/**
 @brief  群名片（群里昵称）
 */
@property (nonatomic, copy) NSString *nickname;
/**
 @brief  头像
 */
@property (nonatomic, copy) NSString *faceUrl;
/**
 @brief  群成员昵称（不同于用户自己的昵称）
 */
@property (nonatomic, copy) NSString *remark;

/**
 @brief  禁言截止时间戳，单位: 秒
 
 禁言状态：muteUntil 大于当前时间
 未禁言状态：muteUntil 小于或等于当前时间
 */
@property (nonatomic, assign) NSInteger muteUntil;
/**
 @brief  群成员自定义字段
 */
@property (nonatomic, strong) NSArray *memberCustomField;
/**
 @brief  扩展字段
 */
@property (nonatomic, copy) NSString *ex;
/**
 @brief  attachedInfo
 */
@property (nonatomic, copy) NSString *attachedInfo;
@end

@interface YTXGetGroupMemberListInfo : NSObject
@property (nonatomic, strong) NSArray *members;
@property (nonatomic, assign) NSInteger total;
@end

NS_ASSUME_NONNULL_END
