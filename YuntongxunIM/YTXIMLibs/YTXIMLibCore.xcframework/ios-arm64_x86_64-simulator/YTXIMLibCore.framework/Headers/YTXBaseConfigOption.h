//
//  YTXSDKConfig.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/24.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTXBaseConfigOption : NSObject

-(instancetype)initWithApiAddress:(NSString*)apiAddress
                      longAddress:(NSString*)longAddress
                          dataDir:(NSString*)dataDir
                    objectStorage:(NSString*)objectStorage
                        pushToken:(NSString*)pushToken
                     pushKitToken:(NSString*)pushKitToken
                         logLevel:(NSInteger)logLevel
                      connectType:(NSInteger)connectType;

@end




NS_ASSUME_NONNULL_END
