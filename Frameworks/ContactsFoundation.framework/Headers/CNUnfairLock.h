//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>
#import <os/lock.h>

@interface CNUnfairLock : NSObject
{
    struct os_unfair_lock_s _os_unfair_lock;
}

- (void)assertCurrentThreadIsNotOwner;
- (void)assertCurrentThreadIsOwner;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)description;
- (id)init;

@end
