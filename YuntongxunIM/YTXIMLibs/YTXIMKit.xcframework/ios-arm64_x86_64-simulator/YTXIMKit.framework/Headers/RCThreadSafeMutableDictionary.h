//
//  RCThreadSafeMutableDictionary.h
//  YTXIMKit
//
//  Created by dongxuelei on 16/5/12.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RCThreadSafeMutableDictionary : NSMutableDictionary <NSLocking>

@end
