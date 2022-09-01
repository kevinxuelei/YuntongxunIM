//
//  RCReferenceMessageCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 2020/2/27.
//  Copyright © 2020 yuntongxun. All rights reserved.
//

#import "YTXIMKitInnerHeader.h"
#import "YTXAttributedLabel.h"
#import "RCReferencedContentView.h"
NS_ASSUME_NONNULL_BEGIN

@interface YTXReferenceMessageCell : YTXMessageCell
/*!
 引用内容展示的容器
 */
@property (nonatomic, strong) RCReferencedContentView *referencedContentView;

/*!
 文本内容的Label
 */
@property (nonatomic, strong) YTXAttributedLabel *contentLabel;

@end

NS_ASSUME_NONNULL_END
