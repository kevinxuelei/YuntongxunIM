//
//  RCCombineMessagePreviewViewController.h
//  RongIMKit
//
//  Created by liyan on 2019/8/9.
//  Copyright © 2019 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXMessageModel.h"
#import "YTXBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface RCCombineMessagePreviewViewController : YTXBaseViewController

- (instancetype)initWithRemoteURL:(NSString *)remoteURL
                 conversationType:(YTXConversationType)conversationType
                         targetId:(NSString *)targetId
                         navTitle:(NSString *)navTitle;

- (instancetype)initWithMessageModel:(YTXMessageModel *)messageModel navTitle:(NSString *)navTitle;

@end

NS_ASSUME_NONNULL_END
