//
//  YTXMessageTool.h
//  RongIMKit
//
//  Created by 张改红 on 2020/6/11.
//  Copyright © 2020 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YTXMessageModel.h"

#define DestructBackGroundWidth 132
#define DestructBackGroundHeight 132

@interface YTXMessageCellTool : NSObject
+ (UIImage *)getDefaultMessageCellBackgroundImage:(YTXMessageModel *)model;
+ (CGFloat)getMessageContentViewMaxWidth;
+ (CGSize)getThumbnailImageSize:(UIImage *)image;
+ (NSDictionary *)getTextLinkOrPhoneNumberAttributeDictionary:(YTXMessageDirection)msgDirection;
@end

