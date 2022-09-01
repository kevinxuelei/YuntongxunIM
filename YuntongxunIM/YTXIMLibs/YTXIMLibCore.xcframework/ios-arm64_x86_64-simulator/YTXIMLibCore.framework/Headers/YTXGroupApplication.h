//
//  YTXGroupApplicationInfo.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/20.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXGroupApplication : NSObject
/**
 @brief 群组ID
 */
@property (nonatomic, copy) NSString *groupId;
/**
 @brief 群名
 */
@property (nonatomic, copy) NSString *groupName;
/**
 @brief 群公告
 */
@property (nonatomic, copy) NSString *notification;

/**
 @brief 群介绍
 */
@property (nonatomic, copy) NSString *introduction;
/**
 @brief 群头像
 */
@property (nonatomic, copy) NSString *groupFaceUrl;
/**
 @brief 创建时间
 */
@property (nonatomic, assign) NSInteger createTime;

/**
 @brief 群状态
 */
@property (nonatomic, assign) NSInteger status;
/**
 @brief 创建者ID
 */
@property (nonatomic, copy) NSString *creatorUid;
/**
 @brief 群类型
 */
@property (nonatomic, assign) NSInteger groupType;

/**
 @brief 群主ID
 */
@property (nonatomic, copy) NSString* ownerUid;
/**
 @brief 群成员数
 */
@property (nonatomic, assign) NSInteger memberCount;
/**
 @brief  群成员ID
 */
@property (nonatomic, copy) NSString* uid;
/**
 @brief 申请者昵称
 */
@property (nonatomic, copy) NSString* nickname;
/**
 @brief 申请者头像
 */
@property (nonatomic, copy) NSString* userFaceUrl;
/**
 @brief 申请者性别
 */
@property (nonatomic, assign) NSInteger gender;

/**
 @brief 处理状态
 */
@property (nonatomic, assign) YTXHandleStatus handleResult;

/**
 @brief 入群申请信息
 */
@property (nonatomic, copy) NSString* reqMsg;
/**
 @brief 处理原因
 */
@property (nonatomic, copy) NSString* handledMsg;
/**
 @brief 申请时间
 */
@property (nonatomic, assign) NSInteger reqTime;

/**
 @brief 处理者ID
 */
@property (nonatomic, copy) NSString* handleUid;

/**
 @brief 处理时间
 */
@property (nonatomic, assign) NSInteger handledTime;

/**
 @brief 扩展字段
 */
@property (nonatomic, copy) NSString* ex;
/**
 @brief attachedInfo */
@property (nonatomic, copy) NSString* attachedInfo;
@end

NS_ASSUME_NONNULL_END
