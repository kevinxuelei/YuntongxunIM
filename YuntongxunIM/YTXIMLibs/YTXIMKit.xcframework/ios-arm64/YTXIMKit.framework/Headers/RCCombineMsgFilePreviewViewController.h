//
//  RCCombineMsgFilePreviewViewController.h
//  RongIMKit
//
//  Created by Jue on 16/7/29.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXBaseViewController.h"

@interface RCCombineMsgFilePreviewViewController : YTXBaseViewController

- (instancetype)initWithRemoteURL:(NSString *)remoteURL
                 conversationType:(YTXConversationType)conversationType
                         targetId:(NSString *)targetId
                         fileSize:(long long)fileSize
                         fileName:(NSString *)fileName
                         fileType:(NSString *)fileType;

@end
