//
//  YTXCardElem.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/7/1.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXBaseElem.h"
@class YTXMessage;
@class YTXFileElem;
NS_ASSUME_NONNULL_BEGIN

@interface YTXCardElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *title;
@property (nonatomic, nullable, copy) NSString *desc;
@property (nonatomic, nullable, copy) NSString *url;
@property (nonatomic, nullable, copy) NSString *data;
@end

@interface YTXTypingElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *tips;
@property (nonatomic, nullable, copy) NSString *conversationId;
@end

@interface YTXBurnAfterReadingElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *msgId;
@property (nonatomic, nullable, copy) NSString *data;
@end

@interface YTXShareElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *title;
@property (nonatomic, nullable, copy) NSString *desc;
@property (nonatomic, nullable, copy) NSString *url;
@property (nonatomic, nullable, copy) NSString *data;
@end

@interface YTXTextAndPictureElem : YTXBaseElem
@property (nonatomic, nullable, strong) NSArray<YTXMessage *> *multiMessage;
@end

@interface YTXTransferFileElem : YTXBaseElem
@property (nonatomic, nullable, strong)YTXFileElem *fileElem;
@property (nonatomic, nullable, copy) NSString *data;
@end

@interface YTXSayHiElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *data;
@end

@interface YTXClapElem : YTXBaseElem
@property (nonatomic, nullable, copy) NSString *data;
@end

@interface YTXChainElem : YTXBaseElem
@property (nonatomic, nullable, strong) NSArray *data;
@end

@interface YTXForwardElem : YTXBaseElem
@property (nonatomic, nullable, strong) NSArray *data;
@end








NS_ASSUME_NONNULL_END
