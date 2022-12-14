//
//  RCAssetHelper.h
//  YTXIMKit
//
//  Created by Liv on 15/3/24.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import <AssetsLibrary/AssetsLibrary.h>
#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import <UIKit/UIKit.h>

#define ShareRCAssetHelper [RCAssetHelper shareAssetHelper]
@class RCAssetModel;
@interface RCAssetHelper : NSObject <PHPhotoLibraryChangeObserver>

@property (nonatomic, strong) ALAssetsLibrary *assetLibrary;

/**
 *  return a instance
 *
 *  @return return value description
 */
+ (instancetype)shareAssetHelper;

/**
 *  获取相册权限
 */
- (BOOL)hasAuthorizationStatusAuthorized;

/**
 *  获取分组的所有图片
 *
 *  @param alGroup 要操作的分组
 *  @param results 结果回传
 */
- (void)getPhotosOfGroup:(id)alGroup results:(void (^)(NSArray<RCAssetModel *> *photos))results;

/**
 *  根据分组类型获取分组
 *
 *  @param groupType 分组类型
 */
- (void)getGroupsWithALAssetsGroupType:(ALAssetsGroupType)groupType
                      resultCompletion:(void (^)(NSArray *assetGroup))result;
/**
 *  获取图片缩略图
 *
 *  @param asset 图片资源
 */
- (void)getThumbnailWithAsset:(id)asset size:(CGSize)size result:(void (^)(UIImage *thumbnailImage))resultBlock;
/**
 *  获取图片预览图
 *
 *  @param asset 图片资源
 */
- (void)getPreviewWithAsset:(id)asset result:(void (^)(UIImage *photo, NSDictionary *info))resultBlock;

/**
 *  获取视频
 *
 *  @param asset 照片资源
 */
- (PHImageRequestID)getOriginVideoWithAsset:(id)asset
                                     result:(void (^)(AVAsset *avAsset, NSDictionary *info, NSString *imageIdentifier))resultBlock
                            progressHandler:(void (^)(double, NSError *, BOOL *, NSDictionary *))progressHandler;

/**
 *  获取图片原图 data
 *
 *  @param assetModel 图片资源
 */
- (PHImageRequestID)
getOriginImageDataWithAsset:(RCAssetModel *)assetModel
                     result:(void (^)(NSData *photo, NSDictionary *info, RCAssetModel *assetModel))resultBlock
            progressHandler:(void (^)(double progress, NSError *error, BOOL *stop, NSDictionary *info))progressHandler;

/**
 *  获取图片大小
 *
 *  @param asset 图片资源
 */
- (PHImageRequestID)getAssetDataSizeWithAsset:(id)asset result:(void (^)(CGFloat size))resultBlock;

/**
 *  获取缓存的相册列表
 *
 */
- (NSArray *)getCachePhotoGroups;

/**
 *  获取图片 Identifier
 *
 */
- (NSString *)getAssetIdentifier:(id)asset;
@end
