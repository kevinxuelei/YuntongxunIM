//
//  RCAlbumTableCell.h
//  YTXIMKit
//
//  Created by dongxuelei on 16/3/18.
//  Copyright © 2016年 yuntongxun. All rights reserved.
//

#import "RCAlbumModel.h"
#import "RCAssetHelper.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface RCAlbumTableCell : UITableViewCell

- (void)configCellWithItem:(RCAlbumModel *)model;

@end
