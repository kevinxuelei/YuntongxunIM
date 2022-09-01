//
//  RCSelectConversationViewController.h
//  RongCallKit
//
//  Created by 岑裕 on 16/3/12.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXBaseViewController.h"

@interface RCSelectConversationViewController : YTXBaseViewController

- (instancetype)initSelectConversationViewControllerCompleted:
    (void (^)(NSArray<YTXConversation *> *conversationList))completedBlock;

@end
