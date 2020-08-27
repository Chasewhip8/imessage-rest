//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterBevelEmbossFilterLocal : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSize;
    NSNumber *inputAngle;
    NSNumber *inputAltitude;
    CIColor *inputHighlightColor;
    CIColor *inputShadowColor;
    NSNumber *inputSoften;
}

+ (id)filterWithName:(id)arg1;
@property(retain, nonatomic) NSNumber *inputSoften; // @synthesize inputSoften;
@property(retain, nonatomic) CIColor *inputShadowColor; // @synthesize inputShadowColor;
@property(retain, nonatomic) CIColor *inputHighlightColor; // @synthesize inputHighlightColor;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelColorizeWithImageMask;
- (id)_kernelColorize;
- (id)_kernel;
- (id)customAttributes;
- (void)dealloc;

@end
