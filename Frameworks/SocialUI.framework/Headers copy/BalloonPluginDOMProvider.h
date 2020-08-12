//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/DOMProvider.h>

#import "DOMEventListener.h"

@class NSString;

@interface BalloonPluginDOMProvider : DOMProvider <DOMEventListener>
{
    id <SOBalloonPluginCache> _balloonPluginCache;
}

+ (id)blurredImagePath:(id)arg1 andRect:(struct CGRect)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SOBalloonPluginCache> balloonPluginCache; // @synthesize balloonPluginCache=_balloonPluginCache;
- (void)handleEvent:(id)arg1;
- (BOOL)setupGeneralInvisibleInk:(id)arg1;
- (BOOL)setupHandwritingInvisibleInk:(id)arg1;
- (BOOL)setupInvisibleInkChatItemIsHandwritingPlugin:(BOOL)arg1 withContainerElement:(id)arg2;
- (BOOL)setupInvisibleInkChatItem:(id)arg1 withContainerElement:(id)arg2;
- (id)parseInvisbleChatItem:(id)arg1 withDOMChatItem:(id)arg2 andMessageTextContainerElement:(id)arg3;
- (id)parseMediaURL:(id)arg1;
- (id)parseChatItem:(id)arg1 DOMChatItem:(id)arg2;
- (void)_setUpDTEventListenerIfValid:(id)arg1 containerElement:(id)arg2 pluginBundleID:(id)arg3 domChatItem:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
