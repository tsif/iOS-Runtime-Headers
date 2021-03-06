/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, MPDetailSlider, <MPVideoOverlayDelegate>, MPAVItem, <MPVideoControllerProtocol>, MPAVController, NSMutableDictionary;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
    BOOL _controlsAutohideDisabled;
    <MPVideoOverlayDelegate> *_delegate;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    int _interfaceOrientation;
    MPAVItem *_item;
    double _lastTickTime;
    MPAVController *_player;
    MPDetailSlider *_scrubControl;
    NSMutableDictionary *_tickTimeEvents;
    <MPVideoControllerProtocol> *_videoViewController;
    unsigned long long _visibleParts;
    BOOL _wantsTick;
}

@property BOOL allowsWirelessPlayback;
@property <MPVideoOverlayDelegate> * delegate;
@property unsigned long long desiredParts;
@property unsigned long long disabledParts;
@property int interfaceOrientation;
@property(retain) MPAVItem * item;
@property(readonly) UINavigationBar * navigationBar;
@property BOOL navigationBarHidden;
@property(retain) MPAVController * player;
@property <MPVideoControllerProtocol> * videoViewController;
@property unsigned long long visibleParts;

- (double)_duration;
- (void)_endSliderTracking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (double)_playableDuration;
- (void)_tickNotification:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (id)item;
- (void)layoutSubviews;
- (id)navigationBar;
- (BOOL)navigationBarHidden;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (id)player;
- (void)registerForPlayerNotifications;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setItem:(id)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (void)unregisterForPlayerNotifications;
- (BOOL)updateTimeBasedValues;
- (id)videoViewController;
- (unsigned long long)visibleParts;

@end
