//
//  RCReferencedContentView.h
//  YTXIMKit
//
//  Created by dongxuelei on 2020/2/27.
//  Copyright © 2020 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXMessageModel.h"
#define name_and_image_view_space 5
@protocol RCReferencedContentViewDelegate <NSObject>
@optional

- (void)didTapReferencedContentView:(YTXMessageModel *)message;

@end
@interface RCReferencedContentView : UIView
/*!
 被引用消息显示左边线
 */
@property (nonatomic, strong) UIView *leftLimitLine;

/*!
 被引用消息发送者名称
*/
@property (nonatomic, strong) UILabel *nameLabel;

/*!
 被引用消息内容文本 label
 */
@property (nonatomic, strong) UILabel *textLabel;

/*!
 被引用图片消息显示的 View
*/
@property (nonatomic, strong) UIImageView *msgImageView;

@property (nonatomic, weak) id<RCReferencedContentViewDelegate> delegate;

- (void)setMessage:(YTXMessageModel *)message contentSize:(CGSize)contentSize;
@end
