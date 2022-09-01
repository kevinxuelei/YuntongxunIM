//
//  YTXConversationCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 2022/6/15.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXConversationBaseCell.h"
#import "YTXConversationDetailContentView.h"
#import "YTXConversationStatusView.h"
#import "YTXMessageBubbleTipView.h"
#define CONVERSATION_ITEM_HEIGHT 65.0f
@protocol YTXConversationCellDelegate;
//@class RCloudImageView;

NS_ASSUME_NONNULL_BEGIN

@interface YTXConversationCell : YTXConversationBaseCell
/*!
 会话Cell的点击监听器
 */
@property (nonatomic, weak) id<YTXConversationCellDelegate> delegate;

/*!
 Cell的头像背景View
 */
@property (nonatomic, strong) UIView *headerImageViewBackgroundView;

/*!
 Cell头像View
 */
@property (nonatomic, strong) UIImageView *headerImageView;

/*!
 会话的标题
 */
@property (nonatomic, strong) UILabel *conversationTitle;

/*!
 会话标题右侧的标签view
 */
@property (nonatomic, strong) UIView *conversationTagView;

/*!
 显示最后一条内容的Label
 */
@property (nonatomic, strong) UILabel *messageContentLabel;

/*!
 显示最后一条消息发送时间的Label
 */
@property (nonatomic, strong) UILabel *messageCreatedTimeLabel;

/*!
 头像右上角未读消息提示的View
 */
@property (nonatomic, strong) YTXMessageBubbleTipView *bubbleTipView;

/*!
 会话免打扰状态显示的View
 */
@property (nonatomic, strong) UIImageView *conversationStatusImageView;

/*!
 Cell中显示的头像形状

 @discussion 默认值为当前IMKit的全局设置值（RCIM中的globalConversationAvatarStyle）。
 */
//@property (nonatomic, assign) RCUserAvatarStyle portraitStyle;

/*!
 是否进行新消息提醒

 @discussion 此属性默认会根据会话设置的提醒状态进行设置。
 */
@property (nonatomic, assign) BOOL enableNotification;

/*!
 会话中有未读消息时，是否在头像右上角的bubbleTipView中显示数字

 @discussion 默认值为YES。
 您可以在YTXConversationListViewController的willDisplayConversationTableCell:atIndexPath:回调中进行设置。
 */
@property (nonatomic, assign) BOOL isShowNotificationNumber;

/*!
 是否在群组和讨论组会话Cell中隐藏发送者的名称
 */
@property (nonatomic, assign) BOOL hideSenderName;

/*!
 非置顶的Cell的背景颜色
 */
@property (nonatomic, strong) UIColor *cellBackgroundColor;

/*!
 置顶Cell的背景颜色
 */
@property (nonatomic, strong) UIColor *topCellBackgroundColor;

/*!
 显示内容区的view
 */
@property (nonatomic, strong) YTXConversationDetailContentView *detailContentView;

/*!
 显示会话状态的view
 */
@property (nonatomic, strong) YTXConversationStatusView *statusView;

/*!
 设置Cell中显示的头像形状

 @param portraitStyle 头像形状

 @discussion 此设置仅当前会话Cell有效。
 */
//- (void)setHeaderImagePortraitStyle:(RCUserAvatarStyle)portraitStyle;

/*!
 设置当前会话Cell的数据模型

 @param model 会话Cell的数据模型
 */
- (void)setDataModel:(YTXConversationModel *)model;

@end

/*!
 会话Cell的点击监听器
 */
@protocol YTXConversationCellDelegate <NSObject>

/*!
 点击Cell头像的回调

 @param model 会话Cell的数据模型
 */
- (void)didTapCellPortrait:(YTXConversationModel *)model;

/*!
 长按Cell头像的回调

 @param model 会话Cell的数据模型
 */
- (void)didLongPressCellPortrait:(YTXConversationModel *)model;
@end

NS_ASSUME_NONNULL_END
