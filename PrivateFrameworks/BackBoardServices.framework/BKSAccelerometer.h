/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSThread, <BKSAccelerometerDelegate>, NSLock;

@interface BKSAccelerometer : NSObject {
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    <BKSAccelerometerDelegate> *_delegate;
    double _interval;
    NSLock *_lock;
    int _orientationCheckToken;
    BOOL _orientationEventsEnabled;
    NSThread *_orientationEventsThread;
    int _orientationNotificationsToken;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property BOOL accelerometerEventsEnabled;
@property <BKSAccelerometerDelegate> * delegate;
@property BOOL orientationEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;

- (void)_checkIn;
- (void)_checkOut;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)_serverWasRestarted;
- (BOOL)accelerometerEventsEnabled;
- (int)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)orientationEventsEnabled;
- (void)setAccelerometerEventsEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientationEventsEnabled:(BOOL)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (double)updateInterval;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;

@end
