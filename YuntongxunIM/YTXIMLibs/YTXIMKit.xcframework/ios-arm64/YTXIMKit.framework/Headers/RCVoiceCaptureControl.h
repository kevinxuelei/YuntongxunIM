//
//  RCVoiceCaptureControl.h
//  RongExtensionKit
//
//  Created by xugang on 7/4/14.
//  Copyright (c) 2014 Heq.Shinoda. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import <YTXIMLibCore/YTXIMLibCore.h>
@protocol RCVoiceCaptureControlDelegate <NSObject>
- (void)RCVoiceCaptureControlTimeout:(double)duration;

@optional
- (void)RCVoiceCaptureControlTimeUpdate:(double)duration;
@end

@interface RCVoiceCaptureControl : UIView

@property (nonatomic, weak) id<RCVoiceCaptureControlDelegate> delegate;

@property (nonatomic, readonly, copy) NSData *stopRecord;

@property (nonatomic, readonly, assign) double duration;

@property (nonatomic, readonly, copy) NSString *filePath;

//客服会话不识别高音质语音消息，需要 YTXConversationType 做判断
- (instancetype)initWithFrame:(CGRect)frame conversationType:(YTXConversationType)type;

- (void)startRecord;

- (void)cancelRecord;

- (void)showCancelView;

- (void)hideCancelView;

- (void)showMsgShortView;

- (void)stopTimer;
@end
