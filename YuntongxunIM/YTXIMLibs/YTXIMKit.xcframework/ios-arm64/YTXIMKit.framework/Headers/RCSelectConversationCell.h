//
//  RCSelectConversationCell.h
//  RongCallKit
//
//  Created by 岑裕 on 16/3/15.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

@interface RCSelectConversationCell : UITableViewCell

- (void)setConversation:(YTXConversation *)conversation ifSelected:(BOOL)ifSelected;

@end
