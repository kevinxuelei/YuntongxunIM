//
//  UIImage+YTXDynamicImage.h
//  YTXIMKit
//
//  Created by dongxuelei on 2019/11/11.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (YTXDynamicImage)

@property (nonatomic, copy) NSString *rc_imageLocalPath;

+ (UIImage *)rc_imageWithLocalPath:(NSString *)path;

- (BOOL)rc_needReloadImage;
@end

NS_ASSUME_NONNULL_END
