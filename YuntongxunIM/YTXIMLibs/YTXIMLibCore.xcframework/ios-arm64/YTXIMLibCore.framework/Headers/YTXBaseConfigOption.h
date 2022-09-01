//
//  YTXSDKConfig.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/24.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXBaseConfigOption : NSObject
/**
 @brief 应用唯一标识
 */
@property (nonatomic, copy) NSString *appId;
/**
 @brief 秘钥？
 */
@property (nonatomic, copy) NSString *secretKey;
/**
 @brief api域名或地址 一般为10000端口
 */
@property (nonatomic, copy) NSString *api_address;

/**
 @brief websocket地址 一般为17778端口
 */
@property (nonatomic, copy) NSString *long_address;
/**
 @brief 平台类型
 */
@property (nonatomic, assign) NSInteger platformId;
/**
 @brief SDK数据存放目录（绝对路径）
 */
@property (nonatomic, copy) NSString *data_dir;
/**
 @brief 日志等级
 */
@property (nonatomic, assign) NSInteger log_level;
/**
 @brief object_storage
 */
@property (nonatomic, copy) NSString *object_storage;
/**
 @brief 表示用哪种连接方式，1：websocket（默认） 2：tcp
 */
@property (nonatomic, assign) NSInteger connect_type;


@end

NS_ASSUME_NONNULL_END
