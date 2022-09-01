//
//  YTXFileElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXFileElem : YTXBaseElem

/*
 * 文件本地资源地址
 */
@property (nonatomic, nullable, copy) NSString *filePath;

/*
 *
 */
@property (nonatomic, nullable, copy) NSString *uuid;

/*
 * oss地址
 */
@property (nonatomic, nullable, copy) NSString *sourceUrl;

/*
 * 文件名称
 */
@property (nonatomic, nullable, copy) NSString *fileName;

/*
 * 文件大小
 */
@property (nonatomic, assign) NSInteger fileSize;

@end


@interface YTXFileUnzipElem : YTXFileElem

@end


NS_ASSUME_NONNULL_END
