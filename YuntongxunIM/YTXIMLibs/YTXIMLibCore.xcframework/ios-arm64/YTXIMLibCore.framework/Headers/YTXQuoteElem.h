//
//  YTXQuoteElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
@class YTXMessage;

NS_ASSUME_NONNULL_BEGIN

@interface YTXQuoteElem : YTXBaseElem

@property (nonatomic, nullable, copy) NSString *text;

@property (nonatomic, nullable, strong) YTXMessage *quoteMessage;

@end

NS_ASSUME_NONNULL_END
