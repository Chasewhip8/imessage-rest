//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSArray, _CNBufferingObservable;

@protocol _CNBufferingStrategy
- (void)bufferDidSendResults:(_CNBufferingObservable *)arg1;
- (void)buffer:(_CNBufferingObservable *)arg1 didReceiveResults:(NSArray *)arg2 forObserver:(id)arg3;
@end
