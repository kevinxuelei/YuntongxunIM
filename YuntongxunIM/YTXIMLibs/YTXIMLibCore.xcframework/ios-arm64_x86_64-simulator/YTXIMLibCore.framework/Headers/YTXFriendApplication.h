//
//  YTXFriendApplication.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXStatusDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXFriendApplication : NSObject
/**
 @brief  用户 ID
 */
@property (nonatomic, copy) NSString *fromUid;
/**
 @brief 用户名
 */
@property (nonatomic, copy) NSString *fromNickname;

/**
 @brief 头像
 */
@property (nonatomic, copy) NSString *fromFaceUrl;
/**
 @brief 性别
 */
@property (nonatomic, assign) YTXGenderType fromGender;


/**
 @brief  用户 ID
 */
@property (nonatomic, copy) NSString *toUid;
/**
 @brief 用户名
 */
@property (nonatomic, copy) NSString *toNickname;

/**
 @brief 头像
 */
@property (nonatomic, copy) NSString *toFaceUrl;
/**
 @brief 性别
 */
@property (nonatomic, assign) YTXGenderType toGender;


/**
 @brief 处理结果
 */
@property (nonatomic, assign) YTXHandleStatus handleResult;
/**
 @brief 申请信息
 */
@property (nonatomic, copy) NSString *reqMsg;

/**
 @brief 创建时间
 */
@property (nonatomic, copy) NSString *createTime;


/**
 @brief  用户 ID
 */
@property (nonatomic, copy) NSString *handlerUid;
/**
 @brief 处理信息
 */
@property (nonatomic, copy) NSString *handleMsg;

/**
 @brief 处理时间
 */
@property (nonatomic, copy) NSString *handleTime;


/**
 @brief  备注
 */
@property (nonatomic, copy) NSString *attachedInfo;
/**
 @brief 扩展
 */
@property (nonatomic, copy) NSString *ex;


@end

NS_ASSUME_NONNULL_END
