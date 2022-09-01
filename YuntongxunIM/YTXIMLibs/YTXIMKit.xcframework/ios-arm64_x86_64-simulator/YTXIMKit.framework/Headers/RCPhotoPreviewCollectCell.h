//
//  RCPhotoPreviewCollectCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 16/3/17.
//  Copyright © 2016年 dongxuelei. All rights reserved.
//

#import <UIKit/UIKit.h>
@class RCAssetModel;
@interface RCPhotoPreviewCollectCell : UICollectionViewCell

@property (nonatomic, strong) void (^singleTap)(void);

- (void)configPreviewCellWithItem:(RCAssetModel *)model;

- (void)resetSubviews;
@end
