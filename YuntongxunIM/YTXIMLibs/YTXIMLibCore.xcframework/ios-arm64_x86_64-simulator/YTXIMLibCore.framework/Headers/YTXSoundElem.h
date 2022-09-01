//
//  YTXSoundElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXSoundElem : YTXBaseElem

/*
 * 唯一ID
 */
@property (nonatomic, nullable, copy) NSString *uuid;

/*
 * 本地资源地址
 */
@property (nonatomic, nullable, copy) NSString *soundPath;

/*
 * oss地址
 */
@property (nonatomic, nullable, copy) NSString *sourceUrl;

/*
 * 音频大小
 */
@property (nonatomic, assign) NSInteger dataSize;

/*
 * 音频时长
 */
@property (nonatomic, assign) NSInteger duration;

@end

NS_ASSUME_NONNULL_END
