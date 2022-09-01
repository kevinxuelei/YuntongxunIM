//
//  YTXUserDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/19.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#ifndef YTXUserDelegate_h
#define YTXUserDelegate_h

#import "YTXUserInfo.h"
@protocol YTXUserDelegate <NSObject>

@optional
- (void)onUserInfoChanged:(YTXUserInfo* _Nullable)userInfo;

@end


#endif /* YTXUserDelegate_h */
