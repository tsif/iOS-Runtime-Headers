/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSDate, IUViewControllerContext, NSMutableArray, UIView, NSString, MPAVController, UITabBarItem, IUModalContext;

@interface IUiPodViewController : UIViewController <MPAVControllerNode, IUModalContextDelegate, ViewControllerArchiveNode> {
    unsigned int _deviceOrientationNotificationsEnabled : 1;
    unsigned int _loading : 1;
    unsigned int _reloadOnNextAppear : 1;
    unsigned int _isAutoDismissDisabled : 1;
    unsigned int _appearanceState;
    UIView *_backstopView;
    UITabBarItem *_cachedTabBarItem;
    IUViewControllerContext *_context;
    UIView *_loadingView;
    IUModalContext *_modalContext;
    MPAVController *_player;
    int _playerLockedCount;
    IUModalContext *_presentedModalContext;
    BOOL _registeredForPlayerNotifications;
    NSMutableArray *_scheduledInvocations;
    BOOL _shouldConfigureNavigationItem;
    NSString *_tabBarItemTitle;
    NSDate *_timeOfLastAppear;
    int _transitionCount;
}

@property(readonly) unsigned int appearanceState;
@property(retain) IUViewControllerContext * context;
@property(getter=isCurrentController,readonly) BOOL currentController;
@property(readonly) BOOL isAutoDismissDisabled;
@property(getter=isLoading) BOOL loading;
@property(retain) IUModalContext * modalContext;
@property(readonly) int modalTransition;
@property(readonly) int navigationTransition;
@property(retain) MPAVController * player;
@property BOOL shouldConfigureNavigationItem;
@property(readonly) BOOL shouldShowStoreButton;
@property(retain) NSString * tabBarItemTitle;

+ (Class)backstopViewClass;
+ (id)newViewControllerForContext:(id)arg1 redirectType:(int)arg2 didRedirect:(BOOL*)arg3;
+ (BOOL)supportsViewControllerStyle:(int)arg1;

- (BOOL)_canReloadView;
- (void)_dataSourceInvalidate:(id)arg1;
- (void)_delayedPerformScheduledInvocations;
- (void)_deviceOrientationChangedNotification:(id)arg1;
- (void)_disableDeviceOrientationNotifications;
- (void)_enableDeviceOrientationNotifications;
- (BOOL)_enoughTimeSinceAppear;
- (void)_eventsOnlyChangedNotification:(id)arg1;
- (id)_existingTabBarItem;
- (void)_fixupTitleOfExistingTabBarItem;
- (void)_goToMovieStore:(id)arg1;
- (void)_goToMusicStore:(id)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (id)_loadingView;
- (void)_reloadForModalContextChange;
- (void)_setExistingTabBarItem:(id)arg1;
- (void)_showOrHideStoreButtonInItem:(id)arg1;
- (void)_storeRestrictionsChangedNotification:(id)arg1;
- (void)_suspendChangedNotification:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)addToLegacyAggregateStatistic;
- (id)aggregateStatisticsDisplayCountKey;
- (unsigned int)appearanceState;
- (void)applicationResumedEventsOnly:(BOOL)arg1;
- (void)applicationSuspendedEventsOnly:(BOOL)arg1;
- (void)beginTransition;
- (void)cancelScheduledInvocationsWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)cancelScheduledInvocationsWithTarget:(id)arg1;
- (void)configureNavigationItem:(id)arg1;
- (void)configureRootNavigationItem:(id)arg1 navigationBar:(id)arg2;
- (id)context;
- (id)copyArchivableContexts;
- (void)dealloc;
- (id)description;
- (void)deviceOrientationChanged:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)disableAutoDismissUntilFinishedAppearing;
- (void)endTransition;
- (BOOL)handleShortcutWithIdentifier:(id)arg1;
- (BOOL)handleTabBarSelectedViewController:(id)arg1;
- (void)incrementAggregateStatisticsDisplayCount;
- (id)init;
- (BOOL)isAppearingOrAppeared;
- (BOOL)isAutoDismissDisabled;
- (BOOL)isCurrentController;
- (BOOL)isDisappearingOrDisappeared;
- (BOOL)isLoading;
- (BOOL)isTransitioning;
- (BOOL)isViewWillAppearReappearing;
- (BOOL)isViewWillAppearReappearingForNavigationPop;
- (BOOL)isWindowRotatable:(id)arg1;
- (void)loadView;
- (void)lockPlayer;
- (id)modalContext;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)modalContextWillDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (int)modalTransition;
- (int)navigationTransition;
- (id)newMediaNavigationItem;
- (id)player;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
- (id)query;
- (void)registerForPlayerNotifications;
- (void)reloadData;
- (void)reloadDataForDataSourceInvalidation;
- (void)reloadNavigationItem;
- (void)removeChildViewController:(id)arg1;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (void)restoreViewControllerInfo:(id)arg1 animated:(BOOL)arg2;
- (void)scheduleInvocationAfterTransition:(id)arg1;
- (void)scheduleReloadData;
- (void)setContext:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setModalContext:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRegisteredForPlayerNotifications:(BOOL)arg1;
- (void)setShouldConfigureNavigationItem:(BOOL)arg1;
- (void)setTabBarItem:(id)arg1;
- (void)setTabBarItemTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldConfigureNavigationItem;
- (BOOL)shouldShowNowPlayingButton;
- (BOOL)shouldShowStoreButton;
- (id)tabBarItem;
- (id)tabBarItemTitle;
- (id)transitionSafePerformerWithTarget:(id)arg1;
- (void)unloadReloadableContextDataIfPossible;
- (void)unlockPlayer;
- (void)unregisterForPlayerNotifications;
- (id)viewControllerContextForSpecifier:(id)arg1;
- (void)viewControllerDidFinishReloadForDataSourceInvalidation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
