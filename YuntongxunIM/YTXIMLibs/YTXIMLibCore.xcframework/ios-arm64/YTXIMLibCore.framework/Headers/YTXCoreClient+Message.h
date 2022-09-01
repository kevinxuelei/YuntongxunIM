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
                            isAtAll:(BOOL)isAtAll
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
+ (YTXMessage *)createMergerMessage:(NSArray <YTXMessage *> *)messages
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


/**
 @brief 发送消息
 @param receiverId 接收者id
 @param groupId 群id
 @param message 消息内容，包含各种类型的消息。
 @param options 消息基本配置，如是否是静默消息等
 */
- (void)sendMessage:(NSString *)receiverId
            groupId:(NSString *)groupId
            message:(YTXMessage *)message
            options:(YTXSendMessageOptions *)options
          onSuccess:(nullable YTXMessageInfoCallback)onSuccess
         onProgress:(nullable YTXNumberCallback)onProgress
          onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 发送单聊 / 群聊 已读回执
 @param conversationId 会话 id
 @param msgIdList 消息UID
 */
- (void)sendReadReceipt:(NSString *)conversationId
              msgIdList:(NSArray *)msgIdList
              onSuccess:(nullable YTXSuccessCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 发送群已读回执请求
 @param msgId 消息UID
 */
- (void)sendGroupReadRequest:(NSArray *)msgId
                   onSuccess:(nullable YTXSuccessCallback)onSuccess
                   onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 多端同步阅读状态
 @param conversationId   会话信息，包含会话类型，目标id，会话渠道等。
 */
- (void)sendSyncReadStatus:(NSString *)conversationId
                 onSuccess:(nullable YTXSuccessCallback)onSuccess
                 onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 可以拉取指定某个会话的历史消息记录下拉加载的场景
 @param conversationId   会话id
 @param options 配置参数，过滤条件
 */
- (void)getHistoryMessageList:(NSString *)conversationId
                      options:(YTXGetHistoryMessageRequest *)options
                    onSuccess:(nullable YTXHistoryMessagesInfoCallback)onSuccess
                    onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 获取会话下所有未读的 @ 消息
 @param conversationId   会话id
 */
- (void)getUnreadAtMsgs:(NSString *)conversationId
              onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
              onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 本地插入一条消息，不发送到服务器
 @param receiverId   接收者id
 @param senderId   发送者id
 @param message 消息体
 */
- (void)insertMsgToLocal:(NSString *)receiverId
                senderId:(NSString *)senderId
                 message:(YTXMessage *)message
               onSuccess:(nullable YTXSuccessCallback)onSuccess
               onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 通过时间戳删除 ，会删除本地磁盘文件
 @param conversationId   会话信息，包含会话类型，目标id，会话渠道等
 @param timestamp       指定删除该时间戳之前的消息
 @param cleanSpace   指定删除该时间戳之前的消息
 */
- (void)removeLocalMsgsByTimestamp:(NSString *)conversationId
                         timestamp:(NSInteger)timestamp
                        cleanSpace:(BOOL)cleanSpace
                         onSuccess:(nullable YTXSuccessCallback)onSuccess
                         onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 按照条件删除本地消息
 @param conversationId   会话id
 @param msgIdList       消息id
 @param timestamp   清除时间点, 该时间之前的消息将被清除
 */
- (void)deleteMsgsFromLocal:(NSString *)conversationId
                  msgIdList:(NSArray *)msgIdList
                  timestamp:(NSInteger)timestamp
                  onSuccess:(nullable YTXSuccessCallback)onSuccess
                  onFailure:(nullable YTXFailureCallback)onFailure;



/**
 @brief 撤回消息
 @param msgId   消息id
 */
- (void)withdrawMsgs:(NSString*)msgId
           onSuccess:(nullable YTXSuccessCallback)onSuccess
           onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 按关键字搜索会话内的消息
 @param searchReq   过滤条件
 */
- (void)searchMsgs:(YTXSearchMessageReq *)searchReq
         onSuccess:(nullable YTXMessagesInfoCallback)onSuccess
         onFailure:(nullable YTXFailureCallback)onFailure;


/**
 @brief 上传图片
 @param filePath   图片路径
 @param obj   扩展
 */
- (void)uploadImage:(NSString *)filePath
                obj:(NSString *)obj
          onSuccess:(nullable YTXSuccessCallback)onSuccess
          onFailure:(nullable YTXFailureCallback)onFailure;

/**
 @brief 上传文件
 @param url   文件路径
 @param obj   扩展
 */
- (void)downloadFile:(NSString *)url
                 obj:(NSString *)obj
           onSuccess:(nullable YTXSuccessCallback)onSuccess
          onProgress:(nullable YTXNumberCallback)onProgress
           onFailure:(nullable YTXFailureCallback)onFailure;


@end

NS_ASSUME_NONNULL_END
