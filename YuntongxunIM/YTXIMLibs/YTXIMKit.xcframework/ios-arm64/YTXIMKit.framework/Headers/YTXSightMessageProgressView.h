//
//  RCSightMessageProgressView.h
//  YTXIMKit
//
//  Created by dongxuelei on 2017/5/18.
//  Copyright © 2017年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YTXSightMessageProgressView : UIControl

@property (nonatomic) float progress;

@property (nonatomic, strong) UIColor *progressTintColor;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)setProgress:(float)progress animated:(BOOL)animated;

- (void)startIndeterminateAnimation;

- (void)stopIndeterminateAnimation;

- (void)reset;

@end
