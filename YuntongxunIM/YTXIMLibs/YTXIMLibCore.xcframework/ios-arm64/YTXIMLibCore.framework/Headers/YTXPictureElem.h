//
//  YTXPictureElem.h
//  YTXIMLibCore
//
//  Created by x on 2022/2/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXPictureInfo : YTXBaseElem

/*
 * 唯一ID
 */
@property (nonatomic, nullable, copy) NSString *uuid;

/*
 * 图片类型
 */
@property (nonatomic, nullable, copy) NSString *type;

/*
 * 图片大小
 */
@property (nonatomic, assign) NSInteger size;

/*
 * 图片宽度
 */
@property (nonatomic, assign) CGFloat width;

/*
 * 图片高度
 */
@property (nonatomic, assign) CGFloat height;

/*
 * 图片oss地址
 */
@property (nonatomic, nullable, copy) NSString *url;

@end

@interface YTXPictureElem : YTXBaseElem

/*
 * 本地资源地址
 */
@property (nonatomic, nullable, copy) NSString *sourcePath;

/*
 * 本地图片详情
 */
@property (nonatomic, nullable, strong) YTXPictureInfo *sourcePicture;

/*
 * 大图详情
 */
@property (nonatomic, nullable, strong) YTXPictureInfo *bigPicture;

/*
 * 缩略图详情
 */
@property (nonatomic, nullable, strong) YTXPictureInfo *snapshotPicture;

@end

NS_ASSUME_NONNULL_END
