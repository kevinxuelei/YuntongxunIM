//
//  RCSightCollectionViewCell.h
//  YTXIMKit
//
//  Created by zhaobindong on 2017/5/3.
//  Copyright © 2017年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YTXMessageModel;

@protocol RCSightCollectionViewCellDelegate <NSObject>
@optional
- (void)closeSight;

- (void)playEnd;

- (void)sightLongPressed:(NSString *)localPath;

@end

@interface RCSightCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) UILabel *label;

@property (nonatomic, weak) id<RCSightCollectionViewCellDelegate> delegate;

@property (nonatomic, assign, getter=isAutoPlay) BOOL autoPlay;

- (void)setDataModel:(YTXMessageModel *)model;

- (void)stopPlay;

- (void)resetPlay;

@end
