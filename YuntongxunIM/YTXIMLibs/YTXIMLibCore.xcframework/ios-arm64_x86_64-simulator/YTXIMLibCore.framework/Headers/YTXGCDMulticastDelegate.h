//
//  YTXGCDMulticastDelegate.h
//  YTXIMLibCore
//
//  Created by dongxuelei on 2022/5/18.
//  Copyright © 2022 yuntongxun. All rights reserved.
//

#import <Foundation/Foundation.h>
@class YTXGCDMulticastDelegateEnumerator;
NS_ASSUME_NONNULL_BEGIN

@interface YTXGCDMulticastDelegate : NSObject
- (void)addDelegate:(id)delegate delegateQueue:(dispatch_queue_t)delegateQueue;
- (void)removeDelegate:(id)delegate delegateQueue:(nullable dispatch_queue_t)delegateQueue;
- (void)removeDelegate:(id)delegate;
- (void)removeAllDelegates;

@property (nonatomic, readonly) NSUInteger count;
- (NSUInteger)countOfClass:(Class)aClass;
- (NSUInteger)countForSelector:(SEL)aSelector;

- (BOOL)hasDelegateThatRespondsToSelector:(SEL)aSelector;

- (YTXGCDMulticastDelegateEnumerator *)delegateEnumerator;
@end

@interface YTXGCDMulticastDelegateEnumerator : NSObject

@property (nonatomic, readonly) NSUInteger count;
- (NSUInteger)countOfClass:(Class)aClass;
- (NSUInteger)countForSelector:(SEL)aSelector;

- (BOOL)getNextDelegate:(id _Nullable * _Nonnull)delPtr delegateQueue:(dispatch_queue_t _Nullable * _Nonnull)dqPtr;
- (BOOL)getNextDelegate:(id _Nullable * _Nonnull)delPtr delegateQueue:(dispatch_queue_t _Nullable * _Nonnull)dqPtr ofClass:(Class)aClass;
- (BOOL)getNextDelegate:(id _Nullable * _Nonnull)delPtr delegateQueue:(dispatch_queue_t _Nullable * _Nonnull)dqPtr forSelector:(SEL)aSelector;

@end

NS_ASSUME_NONNULL_END
