/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSArray, NSObject<OS_dispatch_queue>, IMAVMicrophone, NSMutableArray;

@interface IMAVMicrophoneController : NSObject {
    id _internal;
    NSMutableArray *_microphones;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) IMAVMicrophone * currentMicrophone;
@property(readonly) NSArray * microphones;

+ (id)sharedInstance;

- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (id)currentMicrophone;
- (void)dealloc;
- (id)init;
- (id)microphones;
- (void)setCurrentMicrophone:(id)arg1;

@end
