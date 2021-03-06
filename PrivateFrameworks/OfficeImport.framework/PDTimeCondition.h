/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTargetElement;

@interface PDTimeCondition : NSObject {
    int mDelay;
    BOOL mHasDelay;
    PDAnimationTargetElement *mTgtElement;
    int mTriggerEvent;
}

- (void)dealloc;
- (int)delay;
- (BOOL)hasDelay;
- (id)init;
- (void)setDelay:(int)arg1;
- (void)setTgtElement:(id)arg1;
- (void)setTriggerEvent:(int)arg1;
- (id)tgtElement;
- (int)triggerEvent;

@end
