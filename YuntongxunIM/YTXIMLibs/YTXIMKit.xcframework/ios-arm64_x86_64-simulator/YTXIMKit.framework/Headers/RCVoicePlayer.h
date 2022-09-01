//
//  RCVoicePlayer.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/1/22.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

@protocol RCVoicePlayerObserver;

@interface RCVoicePlayer : NSObject

@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, assign) long messageId;
@property (nonatomic, assign) YTXConversationType conversationType;
@property (nonatomic, copy) NSString *targetId;

+ (RCVoicePlayer *)defaultPlayer;
//- (BOOL)playVoice:(NSString *)messageId voiceData:(NSData *)data observer:(id<RCVoicePlayerObserver>)observer;
- (BOOL)playVoice:(YTXConversationType)conversationType
         targetId:(NSString *)targetId
        messageId:(long)messageId
        direction:(YTXMessageDirection)messageDirection
        voiceData:(NSData *)data
         observer:(id<RCVoicePlayerObserver>)observer;

- (void)stopPlayVoice;

- (void)resetPlayer;

@end

@protocol RCVoicePlayerObserver <NSObject>

- (void)PlayerDidFinishPlaying:(BOOL)isFinish;

- (void)audioPlayerDecodeErrorDidOccur:(NSError *)error;

@end
