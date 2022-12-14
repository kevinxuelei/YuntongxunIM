//
//  YTXActionSheetView.h
//  YTXIMKit
//
//  Created by liyan on 2019/8/22.
//  Copyright © 2019 yuntongxun. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface YTXActionSheetView : UIView <UITableViewDelegate, UITableViewDataSource>

+ (void)showActionSheetView:(NSString *)title
                  cellArray:(NSArray *)cellArray
                cancelTitle:(NSString *)cancelTitle
              selectedBlock:(void (^)(NSInteger index))selectedBlock
                cancelBlock:(void (^)(void))cancelBlock;
@end

