//
//  YTXUser.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
#import "YTXFriend.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXUserInfo : NSObject
@property (nonatomic, nullable, strong) YTXPublicInfo *publicInfo;
@property (nonatomic, nullable, strong) YTXFriendInfo *friendInfo;
@property (nonatomic, nullable, strong) YTXBlackInfo *blackInfo;
@end



@interface YTXLoginInfo : NSObject
/**
 @brief 用户ID
 */
@property (nonatomic, copy) NSString *uid;
/**
 @brief 用户名，不可修改
 */
@property (nonatomic, copy) NSString *name;
/**
 @brief 昵称
 */
@property (nonatomic, copy) NSString *nickname;
/**
 @brief 头像
 */
@property (nonatomic, copy) NSString *faceUrl;
/**
 @brief 性别
 */
@property (nonatomic, assign) YTXGenderType gender;
/**
 @brief 手机号
 */
@property (nonatomic, copy) NSString *phoneNumber;
/**
 @brief 生日
 */
@property (nonatomic, assign) NSInteger birthday;
/**
 @brief 邮箱
 */
@property (nonatomic, copy) NSString *email;
/**
 @brief 个性签名
 */
@property (nonatomic, copy) NSString *signature;

/**
 @brief String    加好友验证方式

 TIM.TYPES.ALLOW_TYPE_ALLOW_ANY（允许任何人添加自己为好友）
 TIM.TYPES.ALLOW_TYPE_NEED_CONFIRM（需要经过自己确认才能添加自己为好友）
 TIM.TYPES.ALLOW_TYPE_DENY_ANY（不允许任何人添加自己为好友）
 */
@property (nonatomic, assign) YTXAllowType allowType;

/**
 @brief  创建时间
 */
@property (nonatomic, assign) NSInteger createTime;
/**
 @brief 状态
 */
@property (nonatomic, assign) NSInteger status;
/**
 @brief 状态
 */
@property (nonatomic, assign) BOOL whiteFlag;

/**
 @brief 国家
 */
@property (nonatomic, copy) NSString *country;
/**
 @brief 地区
 */
@property (nonatomic, copy) NSString *region;
/**
 @brief 好友备注
 */
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, copy) NSString *ex;
@property (nonatomic, copy) NSString *attachedInfo;
@end


@interface YTXSetUserInfoOption : NSObject
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *faceUrl;
@property (nonatomic, assign) NSInteger birthday;
@property (nonatomic, assign) BOOL whiteFlag;
@property (nonatomic, assign) YTXAllowType allowType;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, copy) NSString *ex;
@property (nonatomic, copy) NSString *attachedInfo;
@end

NS_ASSUME_NONNULL_END
