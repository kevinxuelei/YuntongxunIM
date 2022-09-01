//
//  YTXConversationBaseCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 2022/6/15.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTXConversationModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXConversationBaseCell : UITableViewCell
/*!
 会话Cell的数据模型
 */
@property (nonatomic, strong) YTXConversationModel *model;

/*!
 设置会话Cell的数据模型

 @param model 会话Cell的数据模型
 */
- (void)setDataModel:(YTXConversationModel *)model;
@end

NS_ASSUME_NONNULL_END
