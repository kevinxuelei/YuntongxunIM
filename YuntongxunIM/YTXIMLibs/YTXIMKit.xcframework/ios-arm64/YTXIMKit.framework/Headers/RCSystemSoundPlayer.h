//
//  RCSystemSoundPlayer.h
//  YTXIMKit
//
//  Created by dongxuelei on 15/1/22.
//  Copyright (c) 2015年 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

typedef void (^RCSystemSoundPlayerCompletion)(BOOL complete);

@interface RCSystemSoundPlayer : NSObject

+ (RCSystemSoundPlayer *)defaultPlayer;

- (void)setSystemSoundPath:(NSString *)path;

- (void)playSoundByMessage:(YTXMessage *)rcMessage completeBlock:(RCSystemSoundPlayerCompletion)completion;

/**
 * 设置忽略响铃的会话
 */
- (void)setIgnoreConversationType:(YTXConversationType)conversationType targetId:(NSString *)targetId;

/**
 * 清除忽略响铃的会话
 */
- (void)resetIgnoreConversation;

@end
