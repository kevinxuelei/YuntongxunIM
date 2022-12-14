//
//  RCTextPreviewView.h
//  YTXIMKit
//
//  Created by dongxuelei on 2020/7/15.
//  Copyright © 2020 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXAttributedLabel.h"
#import "YTXMessageModel.h"

@protocol RCTextPreviewViewDelegate;

@interface YTXTextPreviewView : UIScrollView

+ (void)showText:(NSString *)text delegate:(id<RCTextPreviewViewDelegate>)delegate;

@end

@protocol RCTextPreviewViewDelegate <NSObject>
@optional
/*!
 点击Cell中URL的回调

 @param url   点击的URL
 @param model 消息Cell的数据模型

 @discussion 点击Cell中的URL，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapUrlInMessageCell:(NSString *)url model:(YTXMessageModel *)model;


/*!
 点击Cell中电话号码的回调

 @param phoneNumber 点击的电话号码
 @param model       消息Cell的数据模型

 @discussion 点击Cell中的电话号码，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapPhoneNumberInMessageCell:(NSString *)phoneNumber model:(YTXMessageModel *)model;
@end
