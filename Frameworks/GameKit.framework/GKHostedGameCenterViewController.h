/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKRemoteGameCenterViewController, GKGameCenterViewController;

@interface GKHostedGameCenterViewController : GKHostedViewController {
}

@property(readonly) GKGameCenterViewController * _parentController;
@property(readonly) GKRemoteGameCenterViewController * _remoteController;

- (id)_parentController;
- (id)_presentingViewController;
- (id)_remoteController;
- (void)didGetRemoteViewController;
- (id)hostSideViewControllerClassName;
- (void)presentRemoteViewControllerIfNeeded;
- (id)serviceSideViewControllerClassName;

@end
