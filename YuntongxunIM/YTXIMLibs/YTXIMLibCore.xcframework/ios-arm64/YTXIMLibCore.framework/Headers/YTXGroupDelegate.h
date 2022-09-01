//
//  YTXGroupDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/19.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXGroupDelegate_h
#define YTXGroupDelegate_h
#import "YTXGroupMemberInfo.h"
#import "YTXGroupInfo.h"
#import "YTXGroupApplication.h"

@protocol YTXGroupDelegate <NSObject>

@optional
- (void)onGroupAdded:(NSArray<YTXGroupInfo *>* _Nullable)groupList;
- (void)onGroupDeleted:(NSArray<YTXGroupInfo *>* _Nullable)groupList;
- (void)onGroupApplicationAccepted:(YTXGroupApplication* _Nullable)groupApplication;
- (void)onGroupApplicationAdded:(NSArray<YTXGroupApplication*>* _Nullable)groupApplicationList;
- (void)onGroupApplicationDeleted:(NSArray<YTXGroupApplication*>* _Nullable)groupApplicationList;
- (void)onGroupApplicationRejected:(YTXGroupApplication* _Nullable)groupApplication;
- (void)onGroupMemberAdded:(NSArray<YTXGroupMemberInfo*>* _Nullable)groupMemberList;
- (void)onGroupMemberDeleted:(NSArray<YTXGroupMemberInfo*>* _Nullable)groupMemberList;
/*
 *  某个已加入的群的信息被修改了
 */
- (void)onGroupInfoChanged:(YTXGroupInfo *_Nullable)changeInfo;
/*
 *  某成员信息发生变更
 */
- (void)onGroupMemberInfoChanged:(YTXGroupMemberInfo *_Nullable)changeInfo;

@end
#endif /* YTXGroupDelegate_h */
