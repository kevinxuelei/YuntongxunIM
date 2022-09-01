//
//  RCPublicServicePopupMenuView.h
//  YTXIMKit
//
//  Created by litao on 15/6/17.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import <UIKit/UIKit.h>
@class RCPublicServiceMenuItem;
@protocol RCPublicServicePopupMenuItemSelectedDelegate <NSObject>
- (void)onPublicServiceMenuItemSelected:(RCPublicServiceMenuItem *)selectedMenuItem;
@end

@interface RCPublicServicePopupMenuView : UIView
@property (nonatomic, weak) id<RCPublicServicePopupMenuItemSelectedDelegate> delegate;
- (void)displayMenuItems:(NSArray *)menuItems atPoint:(CGPoint)point withWidth:(CGFloat)width;
@end
