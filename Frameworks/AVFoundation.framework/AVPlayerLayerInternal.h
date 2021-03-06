/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSString, NSObject<OS_dispatch_queue>, CALayer, AVSubtitleLayer, AVPlayerItem;

@interface AVPlayerLayerInternal : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    AVPlayer *_player;
    CALayer *contentLayer;
    BOOL hasPlayerToObserve;
    BOOL isObservingPlayer;
    BOOL isOverscanSubtitleSupportEnabled;
    BOOL isPresentationLayer;
    BOOL isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    AVPlayerItem *itemMarkedReadyForDisplay;
    } latestPlayerLayerBoundsAtRendering;
    } latestPresentationSizeAtRendering;
    } latestSubtitleLayoutAtRendering;
    } presentationSize;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL shouldObservePlayer;
    NSString *subtitleGravity;
    AVSubtitleLayer *subtitleLayer;
    NSString *videoGravity;
}

@end
