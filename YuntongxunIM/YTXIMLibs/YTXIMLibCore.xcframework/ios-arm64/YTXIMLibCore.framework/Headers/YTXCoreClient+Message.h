//
//  YTXCoreClient+Message.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/17.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <YTXIMLibCore/YTXIMLibCore.h>
#import "YTXMessage.h"
NS_ASSUME_NONNULL_BEGIN




@interface YTXMessage (extension)

/*
 *  是否是发送出去的消息
 */
- (BOOL)isSelf;

/*
 * 创建文本消息
 *
 * @param text 内容
 */
+ (YTXMessage *)createTextMessage:(NSString *)text;

/*
 * 创建@文本消息
 *
 * @param text      内容
 * @param atUidList 用户id列表
 * @param message 引用消息的时候使用
 */
+ (YTXMessage *)createTextAtMessage:(NSString *)text
                          atUidList:(NSArray<NSString *> *)atUidList;


/*
 * 创建图片消息（
 * initSDK时传入了数据缓存路径，如路径：A，这时需要你将图片复制到A路径下后，如 A/pic/a.png路径，imagePath的值：“/pic/.png”
 *
 * @param imagePath 相对路径
 */
+ (YTXMessage *)createImageMessage:(NSString *)imagePath;

/*
 * 创建图片消息
 *
 * @param imagePath 绝对路径
 */
+ (YTXMessage *)createImageMessageFromFullPath:(NSString *)imagePath;


+ (YTXMessage *)createImageMessageByURL:(YTXPictureInfo *)sourcePicture
                             bigPicture:(YTXPictureInfo *)bigPicture
                        snapshotPicture:(YTXPictureInfo *)snapshotPicture;



+ (YTXMessage *)createSoundMessageByURL:(YTXSoundElem *)soundBaseInfo;

+ (YTXMessage *)createVideoMessageByURL:(YTXVideoElem *)videoBaseInfo;

+ (YTXMessage *)createFileMessageByURL:(YTXFileElem *)fileBaseInfo;




/*
 * 创建声音消息
 * initSDK时传入了数据缓存路径，如路径：A，这时需要你将声音文件复制到A路径下后，如 A/voice/a.m4c路径，soundPath的值：“/voice/.m4c”
 *
 * @param soundPath 相对路径
 * @param duration  时长
 */
+ (YTXMessage *)createSoundMessage:(NSString *)soundPath
                              duration:(NSInteger)duration;

/*
 * 创建声音消息
 *
 * @param soundPath 绝对路径
 * @param duration  时长
 */
+ (YTXMessage *)createSoundMessageFromFullPath:(NSString *)soundPath
                                          duration:(NSInteger)duration;

/*
 * 创建视频消息
 * initSDK时传入了数据缓存路径，如路径：A，这时需要你将声音文件复制到A路径下后，如 A/video/a.mp4路径，soundPath的值：“/video/.mp4”
 *
 * @param videoPath    视频相对路径
 * @param videoType    mine type
 * @param duration     时长
 * @param snapshotPath 缩略图相对路径
 */
+ (YTXMessage *)createVideoMessage:(NSString *)videoPath
                             videoType:(NSString *)videoType
                              duration:(NSInteger)duration
                          snapshotPath:(NSString *)snapshotPath;

/*
 * 创建视频消息
 *
 * @param videoPath    绝对路径
 * @param videoType    mine type
 * @param duration     时长
 * @param snapshotPath 缩略图绝对路径
 *
 */
+ (YTXMessage *)createVideoMessageFromFullPath:(NSString *)videoPath
                                         videoType:(NSString *)videoType
                                          duration:(NSInteger)duration
                                      snapshotPath:(NSString *)snapshotPath;

/*
 * 创建文件消息
 * initSDK时传入了数据缓存路径，如路径：A，这时需要你将声音文件复制到A路径下后，如 A/file/a.txt路径，soundPath的值：“/file/.txt”
 *
 * @param filePath 相对路径
 * @param fileName 文件名
 */
+ (YTXMessage *)createFileMessage:(NSString *)filePath
                             fileName:(NSString *)fileName;

/*
 * 创建文件消息
 * initSDK时传入了数据缓存路径，如路径：A，这时需要你将声音文件复制到A路径下后，如 A/file/a.txt路径，soundPath的值：“/file/.txt”
 *
 * @param filePath 绝对路径
 * @param fileName 文件名
 *
 */
+ (YTXMessage *)createFileMessageFromFullPath:(NSString *)filePath
                                         fileName:(NSString *)fileName;

/*
 * 创建合并消息
 *
 * @param title       标题
 * @param summaryList 摘要
 * @param messageList 消息列表
 */
+ (YTXMessage *)createMergeMessage:(NSArray <YTXMessage *> *)messages
                                 title:(NSString *)title
                           summaryList:(NSArray <NSString *> *)summarys;

/*
 * 创建转发消息
 *
 */
+ (YTXMessage *)createForwardMessage:(YTXMessage *)message;

/*
 * 创建位置消息
 *
 * @param latitude    经度
 * @param longitude   纬度
 * @param description 描述消息
 */
+ (YTXMessage *)createLocationMessage:(NSString *)description
                                 latitude:(double)latitude
                                longitude:(double)longitude;

/*
 * 创建引用消息
 *
 * @param text    内容
 * @param message 被引用的消息体
 *
 */
+ (YTXMessage *)createQuoteMessage:(NSString *)text
                               message:(YTXMessage *)message;

/*
 * 创建名片消息
 *
 * @param content String
*/
+ (YTXMessage *)createCardMessage:(NSString *)content;

/*
 * 创建自定义消息
 *
 * @param data        json String
 * @param extension   json String
 * @param description 描述
 */
+ (YTXMessage *)createCustomMessage:(NSString *)data
                              extension:(NSString * _Nullable)extension
                            description:(NSString * _Nullable)description;

/*
 * 创建动图消息
 *
 */
+ (YTXMessage *)createFaceMessageWithIndex:(NSInteger)index
                                          data:(NSString *)dataStr;
@end






@interface YTXCoreClient (Message)

- (void)sendMessage:(NSString *)receiverId
            groupId:(NSString *)groupId
            message:(YTXMessage*)message
            options:(YTXSendMessageOptions*)options
          onSuccess:(nullable YTXMessageInfoCallback)onSuccess
         onProgress:(nullable YTXNumberCallback)onProgress
          onFailure:(nullable YTXFailureCallback)onFailure;


- (void)sendReadReceipt:(NSString *)conversationId
              msgIdList:(NSArray*)msgIdList
              channelId:(NSString*)channelId
              onSuccess:(nullable YTXSuccessCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;


- (void)sendGroupReadRequest:(NSArray*)msgId
                   channelId:(NSString*)channelId
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;


- (void)sendSyncReadStatus:(NSString *)conversationId
       lastMessageSendTime:(int)lastMessageSendTime
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;


- (void)getHistoryMessageList:(NSString *)conversationId
                options:(YTXGetHistoryMessageRequest*)options
              onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;


- (void)getUnreadAtMsgs:(NSString *)conversationId
              onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;


- (void)insertMsgToLocal:(NSString *)receiverId
                senderId:(NSString*)senderId
                 message:(YTXMessage*)message
               onSuccess:(nullable YTXSuccessCallback)onSuccess
               onFailure:(nullable YTXFailureCallback)onFailure;

- (void)removeLocalMsgsByTimestamp:(NSString *)conversationId
                         timestamp:(NSInteger)timestamp
                        cleanSpace:(BOOL)cleanSpace
                         onSuccess:(nullable YTXSuccessCallback)onSuccess
                         onFailure:(nullable YTXFailureCallback)onFailure;

- (void)deleteMsgsFromLocal:(NSString *)conversationId
                  msgIdList:(NSArray*)msgIdList
                  timestamp:(NSInteger)timestamp
                  onSuccess:(nullable YTXSuccessCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;

- (void)withdrawMsgs:(NSString*)msgId
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;


- (void)searchMsgs:(YTXSearchMessageReq *)searchReq
         onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
         onFailure:(nullable YTXFailureCallback)onFailure;

- (void)uploadImage:(NSString *)filePath
              token:(NSString*)token
                obj:(NSString*)obj
          onSuccess:(nullable YTXSuccessCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

@end

NS_ASSUME_NONNULL_END
