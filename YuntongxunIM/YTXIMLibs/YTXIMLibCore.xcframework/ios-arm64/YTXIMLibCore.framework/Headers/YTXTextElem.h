//
//  YTXTextElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/6/23.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXTextElem : YTXBaseElem
/*
 *  消息内容
 */
@property (nonatomic, nullable, copy) NSString *text;

@end

NS_ASSUME_NONNULL_END
