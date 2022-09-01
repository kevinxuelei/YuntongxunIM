//
//  RCNetworkIndicatorView.h
//  YTXIMKit
//
//  Created by MiaoGuangfa on 3/16/15.
//  Copyright (c) 2015 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YTXNetworkIndicatorView : UIView

@property (nonatomic, strong) UIImageView *networkUnreachableImageView;

- (instancetype)initWithText:(NSString *)text;
@end
