/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _gotTouchEnd : 1;
    unsigned int _gotTooMany : 1;
    unsigned int _gotEnoughTaps : 1;
    unsigned int _cancelPastAllowableMovement : 1;
    NSMutableSet *_activeTouches;
    float _allowableMovement;
    id _enoughTimeElapsed;
    id _imp;
    double _minimumPressDuration;
    unsigned int _numberOfTouchesRequired;
    } _startPointScreen;
    id _tooMuchTimeElapsed;
    NSArray *_touches;
}

@property float allowableMovement;
@property BOOL cancelPastAllowableMovement;
@property(readonly) struct CGPoint { float x1; float x2; } centroid;
@property double delay;
@property double minimumPressDuration;
@property unsigned int numberOfTapsRequired;
@property unsigned int numberOfTouchesRequired;
@property(readonly) struct CGPoint { float x1; float x2; } startPoint;
@property(readonly) NSArray * touches;

+ (void)addLongPressGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 minimumPressDuration:(double)arg4 touchCount:(int)arg5;

- (void)_resetGestureRecognizer;
- (void)_startTapFinishedTimer;
- (float)allowableMovement;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)cancelPastAllowableMovement;
- (struct CGPoint { float x1; float x2; })centroid;
- (struct CGPoint { float x1; float x2; })centroidScreen;
- (void)clearTimer;
- (void)dealloc;
- (double)delay;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (double)minimumPressDuration;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouches;
- (unsigned int)numberOfTouchesRequired;
- (void)setAllowableMovement:(float)arg1;
- (void)setCancelPastAllowableMovement:(BOOL)arg1;
- (void)setDelay:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)setTouches:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (void)startTimer;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
