//
//  YTXMergeElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/12.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
@class YTXMessage;

NS_ASSUME_NONNULL_BEGIN

@interface YTXMergeElem : YTXBaseElem

@property (nonatomic, nullable, copy) NSString *title;
@property (nonatomic, nullable, copy) NSArray<NSString *> *abstractList;
@property (nonatomic, nullable, copy) NSArray<YTXMessage *> *multiMessage;

@end

@interface YTXTransferElem : YTXBaseElem

@property (nonatomic, nullable, copy) NSArray<NSString *> *abstractList;
@property (nonatomic, nullable, copy) NSArray<YTXMessage *> *multiMessage;

@end

NS_ASSUME_NONNULL_END
