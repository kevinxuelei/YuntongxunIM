//
//  YTXIMLibCore.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/11.
//

#import <Foundation/Foundation.h>

//! Project version number for YTXIMLibCore.
FOUNDATION_EXPORT double YTXIMLibCoreVersionNumber;

//! Project version string for YTXIMLibCore.
FOUNDATION_EXPORT const unsigned char YTXIMLibCoreVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YTXIMLibCore/PublicHeader.h>

/// IMLib核心类
#import <YTXIMLibCore/YTXCoreClient.h>
#import <YTXIMLibCore/YTXStatusDefine.h>
#import <YTXIMLibCore/YTXBaseConfigOption.h>
#import <YTXIMLibCore/YTXCallbacker.h>

#import <YTXIMLibCore/YTXFriend.h>
#import <YTXIMLibCore/YTXUserInfo.h>
#import <YTXIMLibCore/YTXGroupApplication.h>
#import <YTXIMLibCore/YTXFriendApplication.h>
#import <YTXIMLibCore/YTXGroupInfo.h>
#import <YTXIMLibCore/YTXGroupMemberInfo.h>


//delegate
#import <YTXIMLibCore/YTXCoreDelegate.h>
#import <YTXIMLibCore/YTXSDKDelegate.h>
#import <YTXIMLibCore/YTXUserDelegate.h>
#import <YTXIMLibCore/YTXFriendDelegate.h>
#import <YTXIMLibCore/YTXGroupDelegate.h>
#import <YTXIMLibCore/YTXFriendDelegate.h>
#import <YTXIMLibCore/YTXConversationDelegate.h>


#import <YTXIMLibCore/YTXCoreClient+Connection.h>
#import <YTXIMLibCore/YTXCoreClient+Login.h>
#import <YTXIMLibCore/YTXCoreClient+User.h>
#import <YTXIMLibCore/YTXCoreClient+Message.h>
#import <YTXIMLibCore/YTXCoreClient+Group.h>
#import <YTXIMLibCore/YTXCoreClient+Friend.h>
#import <YTXIMLibCore/YTXCoreClient+Conversation.h>
#import <YTXIMLibCore/YTXCoreClient+Signaling.h>

/// 会话消息相关类
#import <YTXIMLibCore/YTXConversation.h>
#import <YTXIMLibCore/YTXMessage.h>
#import <YTXIMLibCore/YTXBaseElem.h>
#import <YTXIMLibCore/YTXTextElem.h>
#import <YTXIMLibCore/YTXAtElem.h>
#import <YTXIMLibCore/YTXAttachedInfoElem.h>
#import <YTXIMLibCore/YTXCustomElem.h>
#import <YTXIMLibCore/YTXFaceElem.h>
#import <YTXIMLibCore/YTXFileElem.h>
#import <YTXIMLibCore/YTXLocationElem.h>
#import <YTXIMLibCore/YTXMergeElem.h>
#import <YTXIMLibCore/YTXNotificationElem.h>
#import <YTXIMLibCore/YTXPictureElem.h>
#import <YTXIMLibCore/YTXQuoteElem.h>
#import <YTXIMLibCore/YTXSoundElem.h>
#import <YTXIMLibCore/YTXVideoElem.h>

/// 工具类
#import <YTXIMLibCore/YTXCoreUtilities.h>
#import <YTXIMLibCore/YTXLog.h>





