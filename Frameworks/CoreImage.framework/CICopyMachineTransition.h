/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, CIColor, NSNumber;

@interface CICopyMachineTransition : CIFilter {
    NSNumber *inputAngle;
    CIColor *inputColor;
    CIVector *inputExtent;
    CIImage *inputImage;
    NSNumber *inputOpacity;
    CIImage *inputTargetImage;
    NSNumber *inputTime;
    NSNumber *inputWidth;
}

@property(copy) NSNumber * inputAngle;
@property(copy) CIColor * inputColor;
@property(copy) CIVector * inputExtent;
@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputOpacity;
@property(retain) CIImage * inputTargetImage;
@property(copy) NSNumber * inputTime;
@property(copy) NSNumber * inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputColor;
- (id)inputExtent;
- (id)inputImage;
- (id)inputOpacity;
- (id)inputTargetImage;
- (id)inputTime;
- (id)inputWidth;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOpacity:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
