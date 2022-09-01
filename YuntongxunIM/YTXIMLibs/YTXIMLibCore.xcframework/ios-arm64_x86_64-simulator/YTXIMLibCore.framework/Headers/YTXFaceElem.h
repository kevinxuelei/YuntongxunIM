//
//  YTXFaceElem.h
//  YTXIMLibCore
//
//  Created by x on 2022/3/9.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXFaceElem : YTXBaseElem

@property (nonatomic, assign) NSInteger index;

@property (nonatomic, nullable, copy) NSString *data;
@end

NS_ASSUME_NONNULL_END
