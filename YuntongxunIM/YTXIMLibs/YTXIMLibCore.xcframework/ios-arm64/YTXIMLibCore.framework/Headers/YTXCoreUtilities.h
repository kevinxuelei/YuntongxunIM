//
//  YTXCoreUtilities.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/11.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CWModel.h"

//#import <YTXMessage.h>
NS_ASSUME_NONNULL_BEGIN

@interface YTXCoreUtilities : NSObject

+ (id)dictionaryWithJsonString:(NSString *)jsonString;
+ (NSString *)jsonStringWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
