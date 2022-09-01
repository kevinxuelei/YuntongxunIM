//
//  YTXNotificationElem.h
//  YTXIMLibCore
//
//  Created by x on 2022/2/21.
//

#import <Foundation/Foundation.h>
#import "YTXGroupMemberInfo.h"
#import "YTXGroupInfo.h"
#import "YTXBaseElem.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXNotificationElem : YTXBaseElem

@property (nonatomic, nullable, copy) NSString *senderNickname;
@property (nonatomic, nullable, copy) NSString *senderId;
@property (nonatomic, nullable, copy) NSString *receiverId;
@property (nonatomic, nullable, strong) NSArray *onlineTemplate;
@end

NS_ASSUME_NONNULL_END
