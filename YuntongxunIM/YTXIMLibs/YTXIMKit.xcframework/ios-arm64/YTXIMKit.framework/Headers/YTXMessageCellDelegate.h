//
//  YTXMessageCellDelegate.h
//  YTXIMKit
//
//  Created by dongxuelei on 3/14/15.
//  Copyright (c) 2015 yuntongxun. All rights reserved.
//

#import "YTXMessageModel.h"

/*!
 消息Cell点击的回调
 */
@protocol YTXMessageCellDelegate <NSObject>
@optional

/*!
 点击Cell内容的回调

 @param model 消息Cell的数据模型
 */
- (void)didTapMessageCell:(YTXMessageModel *)model;

/*!
 点击Cell中URL的回调

 @param url   点击的URL
 @param model 消息Cell的数据模型

 @discussion 点击Cell中的URL，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapUrlInMessageCell:(NSString *)url model:(YTXMessageModel *)model;

/*!
 点击撤回消息Cell中重新编辑的回调

 @param model 消息Cell的数据模型

 @discussion 点击撤回消息Cell中重新编辑，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapReedit:(YTXMessageModel *)model;

/*!
 点击Cell中电话号码的回调

 @param phoneNumber 点击的电话号码
 @param model       消息Cell的数据模型

 @discussion 点击Cell中的电话号码，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapPhoneNumberInMessageCell:(NSString *)phoneNumber model:(YTXMessageModel *)model;

/*!
 点击Cell中用户头像的回调

 @param userId 头像对应的用户ID
 */
- (void)didTapCellPortrait:(NSString *)userId;

/*!
 长按Cell中用户头像的回调

 @param userId 头像对应的用户ID
 */
- (void)didLongPressCellPortrait:(NSString *)userId;

/*!
 长按Cell内容的回调

 @param model 消息Cell的数据模型
 @param view  长按区域的View
 */
- (void)didLongTouchMessageCell:(YTXMessageModel *)model inView:(UIView *)view;

/*!
 点击消息发送失败红点的回调

 @param model 消息Cell的数据模型
 */
- (void)didTapmessageFailedStatusViewForResend:(YTXMessageModel *)model;

/*!
 点击消息阅读人数View的回调

 @param model 消息Cell的数据模型

 @discussion 仅支持群组和讨论组
 */
- (void)didTapReceiptCountView:(YTXMessageModel *)model;

/*!
 点击媒体消息取消发送按钮

 @param model 媒体消息Cell的数据模型

 @discussion 仅支持取消文件消息的发送
 */
- (void)didTapCancelUploadButton:(YTXMessageModel *)model;

/*!
 点击引用消息中被引用消息内容预览的回调

 @param model 引用消息Cell的数据模型
*/
- (void)didTapReferencedContentView:(YTXMessageModel *)model;

#pragma mark - 客服机器人评价
/*!
 机器人解答问题，点击是否解决问题的回调

 @param model 消息Cell的数据模型
 @param isResolved 是否解决问题
 */
- (void)didTapCustomerService:(YTXMessageModel *)model RobotResoluved:(BOOL)isResolved;

/*!
 点击需要消息回执View的回调

 @param model 消息Cell的数据模型

 @discussion 仅支持群组和讨论组
 */
- (void)didTapNeedReceiptView:(YTXMessageModel *)model;

@end

/*!
 公众服务会话中消息Cell点击的回调
 */
@protocol RCPublicServiceMessageCellDelegate <NSObject>
@optional

/*!
 公众服务会话中，点击Cell内容的回调

 @param model 消息Cell的数据模型
 */
- (void)didTapPublicServiceMessageCell:(YTXMessageModel *)model;

/*!
 公众服务会话中，点击Cell中URL的回调

 @param url   点击的URL
 @param model 消息Cell的数据模型

 @discussion 点击Cell中的URL，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapUrlInPublicServiceMessageCell:(NSString *)url model:(YTXMessageModel *)model;

/*!
 公众服务会话中，点击Cell中电话号码的回调

 @param phoneNumber 点击的电话号码
 @param model       消息Cell的数据模型

 @discussion 点击Cell中的电话号码，会调用此回调，不会再触发didTapMessageCell:。
 */
- (void)didTapPhoneNumberInPublicServiceMessageCell:(NSString *)phoneNumber model:(YTXMessageModel *)model;

/*!
 公众服务会话中，长按Cell内容的回调

 @param model 消息Cell的数据模型
 @param view  长按区域的View
 */
- (void)didLongTouchPublicServiceMessageCell:(YTXMessageModel *)model inView:(UIView *)view;

/*!
 公众服务会话中，点击消息发送失败红点的回调

 @param model 消息Cell的数据模型
 */
- (void)didTapPublicServiceMessageFailedStatusViewForResend:(YTXMessageModel *)model;

@end
