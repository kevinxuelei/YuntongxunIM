//
//  RCHQVoiceMessageCell.h
//  YTXIMKit
//
//  Created by Zhaoqianyu on 2019/5/20.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

//#import "YTXIMKit.h"
#import "YTXMessageCell.h"
/*!
 语音消息Cell
 */
@interface RCHQVoiceMessageCell : YTXMessageCell

/*!
 语音播放的View
 */
@property (nonatomic, strong) UIImageView *playVoiceView;

/*!
 显示是否已播放的View
 */
@property (nonatomic, strong) UIImageView *voiceUnreadTagView;

/*!
 显示语音时长的Label
 */
@property (nonatomic, strong) UILabel *voiceDurationLabel;

/*!
 播放语音
 */
- (void)playVoice;

/*!
 停止播放语音
 */
- (void)stopPlayingVoice;

@end
