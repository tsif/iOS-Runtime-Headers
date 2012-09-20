/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSArray;

@interface AVAudioPayload : NSObject  {
    struct tagHANDLE { int x1; } *encoder;
    int payload;
    unsigned long samplesPerFrame;
    unsigned long blockSize;
    unsigned long sampleRate;
    unsigned long encodedBytesPerFrame;
    unsigned long bundleHeaderBytes;
    unsigned long bitrate;
    NSArray *supportedBitrates;
    BOOL canBundle;
    BOOL canSetBitrate;
    BOOL forcingBitrate;
    BOOL useSBR;
    BOOL shouldReset;
    int format;
}

@property(readonly) int payload;
@property(readonly) unsigned long samplesPerFrame;
@property(readonly) unsigned long blockSize;
@property(readonly) unsigned long sampleRate;
@property(readonly) unsigned long encodedBytesPerFrame;
@property(readonly) unsigned long bundleHeaderBytes;
@property(readonly) unsigned long bitrate;
@property(readonly) NSArray * supportedBitrates;
@property(readonly) BOOL canBundle;
@property BOOL useSBR;

+ (BOOL)isPayloadSupported:(int)arg1;

- (void)dealloc;
- (unsigned int)flags;
- (void)createSupportedBitratesForAACELD;
- (unsigned long)aacBitrate;
- (void)createSupportedBitrates;
- (id)supportedBitrates;
- (void)setInternalSampleRate:(unsigned long)arg1;
- (BOOL)getEncodeProperties;
- (BOOL)getProperties;
- (unsigned long)encodedBytesPerFrame;
- (float)qualityForBitrate:(unsigned long)arg1;
- (BOOL)setBitrate:(unsigned long)arg1;
- (void)resetEncoder;
- (unsigned long)bitrate;
- (unsigned long)bundleHeaderBytes;
- (BOOL)createEncoderWithInternalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned int*)arg2;
- (void)cleanupEncoder;
- (void)setUseSBR:(BOOL)arg1;
- (id)initWithPayload:(int)arg1 blockSize:(unsigned long)arg2;
- (BOOL)useSBR;
- (unsigned long)blockSize;
- (unsigned long)sampleRate;
- (BOOL)canBundle;
- (int)payload;
- (int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4;
- (unsigned long)samplesPerFrame;

@end