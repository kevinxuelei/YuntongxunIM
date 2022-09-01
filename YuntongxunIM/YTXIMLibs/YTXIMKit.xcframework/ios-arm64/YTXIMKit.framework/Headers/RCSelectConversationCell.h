//
//  RCSelectConversationCell.h
//  RongCallKit
//
//  Created by dongxuelei on 16/3/15.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

@interface RCSelectConversationCell : UITableViewCell

- (void)setConversation:(YTXConversation *)conversation ifSelected:(BOOL)ifSelected;

@end
