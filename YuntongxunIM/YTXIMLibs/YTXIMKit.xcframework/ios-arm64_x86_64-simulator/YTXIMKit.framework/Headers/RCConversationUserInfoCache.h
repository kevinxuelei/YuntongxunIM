//
//  YTXConversationUserInfoCache.h
//  YTXIMKit
//
//  Created by dongxuelei on 16/1/22.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YTXIMLibCore/YTXIMLibCore.h>

@protocol YTXConversationUserInfoUpdateDelegate <NSObject>

- (void)onConversationUserInfoUpdate:(YTXUserInfo *)userInfo
                      inConversation:(YTXConversationType)conversationType
                            targetId:(NSString *)targetId;

@end

@interface YTXConversationUserInfoCache : NSObject

@property (nonatomic, weak) id<YTXConversationUserInfoUpdateDelegate> updateDelegate;

+ (instancetype)sharedCache;

- (YTXUserInfo *)getUserInfo:(NSString *)userId
           conversationType:(YTXConversationType)conversationType
                   targetId:(NSString *)targetId;

- (void)updateUserInfo:(YTXUserInfo *)userInfo
             forUserId:(NSString *)userId
      conversationType:(YTXConversationType)conversationType
              targetId:(NSString *)targetId;

- (void)clearConversationUserInfoNetworkCacheOnly:(NSString *)userId
                                 conversationType:(YTXConversationType)conversationType
                                         targetId:(NSString *)targetId;

- (void)clearConversationUserInfo:(NSString *)userId
                 conversationType:(YTXConversationType)conversationType
                         targetId:(NSString *)targetId;

- (void)clearAllConversationUserInfo;

@end
