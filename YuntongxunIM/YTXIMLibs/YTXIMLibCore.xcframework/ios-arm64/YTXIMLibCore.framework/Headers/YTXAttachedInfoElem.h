//
//  YTXAttachedInfoElem.h
//  YTXIMLibCore
//
//  Created by x on 2022/3/18.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

/// 已读用户
///
@interface YTXGroupHasReadInfo : NSObject

@property (nonatomic, nullable, copy) NSArray <NSString *> *hasReadUserIDList;

@property (nonatomic, assign) NSInteger hasReadCount;

@end

@interface YTXAttachedInfoElem : YTXBaseElem

@property (nonatomic, nullable, strong) YTXGroupHasReadInfo *groupHasReadInfo;

@property (nonatomic, assign) BOOL isPrivateChat;

@property (nonatomic, assign) NSTimeInterval hasReadTime;
@end

NS_ASSUME_NONNULL_END
