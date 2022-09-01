//
//  RCConversationViewController+internal.h
//  YTXIMKit
//
//  Created by dongxuelei on 2020/12/23.
//  Copyright © 2020 yuntongxun. All rights reserved.
//

#ifndef RCConversationViewController_internal_h
#define RCConversationViewController_internal_h
@interface YTXConversationViewController ()
@property (nonatomic, strong, readonly) YTXConversationVCUtil *util;
@property (nonatomic, strong, readonly) YTXConversationCSUtil *csUtil;
@property (nonatomic, strong, readonly) YTXConversationCollectionViewHeader *collectionViewHeader;
@property (nonatomic, assign, readonly) BOOL isConversationAppear;
@property (nonatomic, assign) BOOL needAutoScrollToBottom;

- (void)updateUnreadMsgCountLabel;
- (void)updateForMessageSendSuccess:(long)messageId content:(id )content;
- (void)fetchPublicServiceProfile;
@end

#endif /* RCConversationViewController_internal_h */
