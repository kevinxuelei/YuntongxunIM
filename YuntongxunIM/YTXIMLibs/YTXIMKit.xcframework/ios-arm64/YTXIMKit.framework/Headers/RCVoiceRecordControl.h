//
//  RCVoiceRecordControl.h
//  YTXIMKit
//
//  Created by dongxuelei on 2020/5/25.
//  Copyright © 2020 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

@protocol RCVoiceRecordControlDelegate;
@interface RCVoiceRecordControl : NSObject

@property (nonatomic, weak) id<RCVoiceRecordControlDelegate> delegate;

- (instancetype)initWithConversationType:(YTXConversationType)conversationType;

- (void)onBeginRecordEvent;

- (void)onEndRecordEvent;

- (void)dragExitRecordEvent;

- (void)dragEnterRecordEvent;

- (void)onCancelRecordEvent;
@end

@protocol RCVoiceRecordControlDelegate <NSObject>

- (BOOL)recordWillBegin;
/*!
 开始录制语音消息
 */
- (void)voiceRecordControlDidBegin:(RCVoiceRecordControl *)voiceRecordControl;

/*!
 取消录制语音消息
 */
- (void)voiceRecordControlDidCancel:(RCVoiceRecordControl *)voiceRecordControl;

/*!
 结束录制语音消息
 */
- (void)voiceRecordControl:(RCVoiceRecordControl *)voiceRecordControl
                    didEnd:(NSData *)recordData
                  duration:(long)duration
                  filePath:(NSString*)filePath
                     error:(NSError *)error;
@end
