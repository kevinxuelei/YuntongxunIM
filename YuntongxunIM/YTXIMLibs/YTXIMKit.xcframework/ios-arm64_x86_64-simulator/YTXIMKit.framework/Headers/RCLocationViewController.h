//
//  RCLocationViewController.h
//  iOS-IMKit
//
//  Created by dongxuelei on 14/11/4.
//  Copyright (c) 2014年 yuntongxun. All rights reserved.
//

#import "YTXBaseViewController.h"
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

/*!
 在地图中展示位置消息的ViewController
 */
@interface RCLocationViewController : YTXBaseViewController <MKMapViewDelegate>

/*!
 位置信息中的地理位置的二维坐标
 */
@property (nonatomic, assign) CLLocationCoordinate2D location;

/*!
 位置消息中的地理位置的名称
 */
@property (nonatomic, copy) NSString *locationName;

/*!
 返回按钮的点击事件

 @param sender 返回按钮

 @discussion SDK在此方法中，会针对默认的NavigationBa退出当前界面；
 如果您使用自定义导航按钮或者自定义按钮，可以重写此方法退出当前界面。
 */
- (void)leftBarButtonItemPressed:(id)sender;

@end
