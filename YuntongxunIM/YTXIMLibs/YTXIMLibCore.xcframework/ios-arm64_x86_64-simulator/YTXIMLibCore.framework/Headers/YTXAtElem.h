//
//  YTXAtElem.h
//
//  Created by dongxuelei on 2022/5/11.
//  Copyright © 2022 yuntongxun. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "YTXQuoteElem.h"

NS_ASSUME_NONNULL_BEGIN

@interface YTXAtInfo : NSObject

/*
 * at 成员的id
 */
@property (nonatomic, nullable, copy) NSString *atUserID;

/*
 * at 成员的昵称/群名片
 */
@property (nonatomic, nullable, copy) NSString *groupNickname;

@end

@interface YTXAtElem : YTXBaseElem

/*
 * at 消息内容
 */
@property (nonatomic, nullable, copy) NSString *text;

/*
 * 被@的用户id集合
 */
@property (nonatomic, nullable, copy) NSArray<NSString *> *atUidList;

///*
// * 被@的用户集合
// */
//@property (nonatomic, nullable, copy) NSArray<YTXAtInfo *> *atUsersInfo;
//
///*
// * at 引用消息
// */
//@property (nonatomic, nullable, strong) YTXQuoteElem *quoteMessage;

/*
 * 自己是否被@了
 */
@property (nonatomic, assign) BOOL isAtSelf;



@end

NS_ASSUME_NONNULL_END
