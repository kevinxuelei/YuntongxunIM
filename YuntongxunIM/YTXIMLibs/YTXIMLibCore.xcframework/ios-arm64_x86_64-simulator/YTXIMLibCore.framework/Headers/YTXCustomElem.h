//
//  YTXCustomElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXCustomElem : YTXBaseElem

@property (nonatomic, nullable, copy) NSString *data;

@property (nonatomic, nullable, copy) NSString *extension;

@property (nonatomic, nullable, copy) NSString *description;

@end

NS_ASSUME_NONNULL_END
