//
//  RCSelectConversationViewController.h
//  RongCallKit
//
//  Created by dongxuelei on 16/3/12.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXBaseViewController.h"
#import "YTXConversationModel.h"
@interface RCSelectConversationViewController : YTXBaseViewController

- (instancetype)initSelectConversationViewControllerCompleted:
    (void (^)(NSArray<YTXConversationModel *> *conversationList))completedBlock;

@end
