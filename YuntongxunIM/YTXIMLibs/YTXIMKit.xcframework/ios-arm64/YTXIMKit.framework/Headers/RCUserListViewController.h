//
//  RCUserListViewController.h
//  YTXIMKit
//
//  Created by 杜立召 on 16/7/14.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import <UIKit/UIKit.h>
#import "YTXBaseViewController.h"

@protocol RCSelectingUserDataSource;

@interface RCUserListViewController : YTXBaseViewController

@property (nonatomic, copy) void (^selectedBlock)(YTXUserInfo *selectedUserInfo);
@property (nonatomic, copy) void (^cancelBlock)(void);

@property (nonatomic, strong) NSString *navigationTitle;

@property (nonatomic, weak) id<RCSelectingUserDataSource> dataSource;
@property (nonatomic, assign) int maxSelectedUserNumber;

@end

@protocol RCSelectingUserDataSource <NSObject>

- (void)getSelectingUserIdList:(void (^)(NSArray<NSString *> *userIdList))completion;

- (YTXUserInfo *)getSelectingUserInfo:(NSString *)userId;

@end
