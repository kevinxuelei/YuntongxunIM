//
//  YTXLocationElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXLocationElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *desc;
@property (nonatomic, assign) double longitude;
@property (nonatomic, assign) double latitude;
@end

NS_ASSUME_NONNULL_END
