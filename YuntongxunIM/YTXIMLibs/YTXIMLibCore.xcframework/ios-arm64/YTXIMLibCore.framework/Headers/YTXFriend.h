//
//  YTXFullUserInfo.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/27.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"

NS_ASSUME_NONNULL_BEGIN

/// 用户公开信息，主要是基本信息，不包括手机等其它隐私字段
///
@interface YTXPublicInfo : NSObject
/**
 @brief 用户ID
 */
@property (nonatomic, nullable, copy) NSString *uid;
/**
 @brief 昵称
 */
@property (nonatomic, nullable, copy) NSString *nickname;
/**
 @brief 头像
 */
@property (nonatomic, nullable, copy) NSString *faceUrl;
/**
 @brief 性别
 */
@property (nonatomic, assign) YTXGenderType gender;
/**
 @brief 扩展信息
 */
@property (nonatomic, copy) NSString *ex;
@end

/// 黑名单信息，黑名单用户基本信息，注意黑名单是双向关系。
///
@interface YTXBlackInfo : YTXPublicInfo
/**
 @brief  群主ID
 */
@property (nonatomic, nullable, copy) NSString *ownerUid;
/**
 @brief 好友备注
 */
@property (nonatomic, nullable, copy) NSString *remark;
/**
 @brief 创建时间
 */
@property (nonatomic, assign) NSInteger createTime;
/**
 @brief 添加来源
 */
@property (nonatomic, assign) YTXAddFriendSourceType addSource;
/**
 @brief  操作者ID
 */
@property (nonatomic, nullable, copy) NSString *operatorUid;
/**
 @brief attachedInfo
 */
@property (nonatomic, nullable, copy) NSString *attachedInfo;

@end

/// 好友信息，
///
@interface YTXFriendInfo : YTXPublicInfo
/**
 @brief  群主ID
 */
@property (nonatomic, nullable, copy) NSString *ownerUid;
/**
 @brief 好友备注
 */
@property (nonatomic, nullable, copy) NSString *remark;
/**
 @brief 创建时间
 */
@property (nonatomic, assign) NSInteger createTime;
/**
 @brief 添加来源
 */
@property (nonatomic, assign) YTXAddFriendSourceType addSource;
/**
 @brief  操作者ID
 */
@property (nonatomic, nullable, copy) NSString *operatorUid;
/**
 @brief 手机号
 */
@property (nonatomic, nullable, copy) NSString *phoneNumber;
/**
 @brief 生日
 */
@property (nonatomic, nullable, copy) NSString *birth;
/**
 @brief 邮箱
 */
@property (nonatomic, nullable, copy) NSString *email;
/**
 @brief attachedInfo
 */
@property (nonatomic, nullable, copy) NSString *attachedInfo;

@end


@interface YTXWhiteInfo : NSObject
@property (nonatomic, nullable, copy) NSString *ownerUid;
@property (nonatomic, nullable, copy) NSString *uid;
@property (nonatomic, nullable, copy) NSString *companyId;
@property (nonatomic, nullable, copy) NSString *appId;
@property (nonatomic, nullable, copy) NSString *remark;
@property (nonatomic, assign) NSInteger createTime;
@property (nonatomic, assign) NSInteger updateTime;
@property (nonatomic, nullable, copy) NSString *operatorUid;
@property (nonatomic, nullable, copy) NSString *nickname;
@property (nonatomic, nullable, copy) NSString *faceUrl;
@property (nonatomic, assign) YTXAddFriendSourceType addSource;
@property (nonatomic, nullable, copy) NSString *ex;
@property (nonatomic, nullable, copy) NSString *attachedInfo;
@end



@interface YTXFriend : NSObject
@property (nonatomic, nullable, strong) YTXFriendInfo *friendInfo;
@property (nonatomic, nullable, strong) YTXBlackInfo *blackInfo;
@property (nonatomic, nullable, strong) YTXPublicInfo *publicInfo;
@end


@interface YTXUidReqMsg : NSObject
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *reqMsg;
@end

@interface YTXUidHandleMsg : NSObject
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *handleMsg;
@end


@interface YTXFilterRequest : NSObject
@property (nonatomic, assign) int filter;
@property (nonatomic, assign) int offset;
@property (nonatomic, assign) int count;
@end

@interface YTXRequest : NSObject
@property (nonatomic, copy) NSString *keyword;
@property (nonatomic, assign) NSInteger timestamp;
@property (nonatomic, assign) NSInteger offset;
@property (nonatomic, assign) NSInteger count;

@property (nonatomic, copy) NSString *conversationID;
@end

@interface YTXRage : NSObject
@property (nonatomic, assign) NSInteger offset;
@property (nonatomic, assign) NSInteger count;
@end

@interface YTXBaseRequest : NSObject
@property (nonatomic, assign) NSInteger timestamp;
@property (nonatomic, assign) NSInteger offset;
@property (nonatomic, assign) NSInteger count;
@end

@interface YTXSetFriendInfoOptions : NSObject
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, copy) NSString *uid;
@end

@interface YTXApplicationRequest : NSObject
@property (nonatomic, assign) NSInteger offset;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, assign) YTXApplicationType applicationType;
@end


@interface YTXInviteUserResult : NSObject
@property (nonatomic, copy) NSString *result;
@property (nonatomic, copy) NSString *uid; 
@end



NS_ASSUME_NONNULL_END
