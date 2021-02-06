//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand
{
    NSMutableDictionary *_registeredSpecializedQueues;
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    _Bool _supportsSharedQueue;
    NSObject *_serialQueue;
    long long _upNextItemCount;
}


@property(nonatomic) long long upNextItemCount; // @synthesize upNextItemCount=_upNextItemCount;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedSharedQueue:(_Bool)arg1;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;
- (void)registerSupportedQueueType:(long long)arg1;
- (void)unregisterSpecializedQueueIdentifier:(id)arg1;
- (void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end
