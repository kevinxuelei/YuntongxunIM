//
//  RCDestructCountDownButton.h
//  YTXIMKit
//
//  Created by linlin on 2018/6/7.
//  Copyright © 2018年 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCDestructCountDownButton : UIButton

- (void)setDestructCountDownButtonHighlighted;

- (void)messageDestructing:(NSInteger)duration;

- (BOOL)isDestructCountDownButtonHighlighted;

@end
