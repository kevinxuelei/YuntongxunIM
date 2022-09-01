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

@property (nonatomic, nullable, copy) NSString *detail;

@property (nonatomic, nullable, copy) NSString *defaultTips;

/// 以下字段是从detail里面decode出来的
@property (nonatomic, nullable, strong, readonly) YTXGroupMemberInfo *opUser;

@property (nonatomic, nullable, strong, readonly) YTXGroupMemberInfo *quitUser;

@property (nonatomic, nullable, strong, readonly) YTXGroupMemberInfo *entrantUser;
/// 群改变新群主的信息
@property (nonatomic, nullable, strong, readonly) YTXGroupMemberInfo *groupNewOwner;

@property (nonatomic, nullable, strong, readonly) YTXGroupInfo *group;

@property (nonatomic, nullable, strong, readonly) NSArray <YTXGroupMemberInfo *> *kickedUserList;

@property (nonatomic, nullable, strong, readonly) NSArray <YTXGroupMemberInfo *> *invitedUserList;

@end

NS_ASSUME_NONNULL_END
