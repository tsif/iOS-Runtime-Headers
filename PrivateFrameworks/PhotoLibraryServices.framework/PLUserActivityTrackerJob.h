/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSArray;

@interface PLUserActivityTrackerJob : PLDaemonJob {
    long long _activity;
    NSString *_clientID;
    NSArray *_uuids;
}

@property long long activity;
@property(retain) NSString * clientID;
@property(retain) NSArray * uuids;

+ (void)_noteActivity:(long long)arg1 uuid:(id)arg2;
+ (void)_noteActivity:(long long)arg1 uuids:(id)arg2;
+ (id)_queue;
+ (id)managedObjectContext;
+ (id)managedObjectModel;
+ (id)persistentStoreCoordinator;
+ (void)trackAlbumChosenForPictureFrame:(struct NSObject { Class x1; }*)arg1;
+ (void)trackAlbumStartedSlideShow:(struct NSObject { Class x1; }*)arg1;
+ (void)trackAlbumUUIDWasDeleted:(id)arg1;
+ (void)trackAssetUUIDsWereDeleted:(id)arg1;
+ (void)trackAssetWasLoadedViaAPI:(id)arg1;
+ (void)trackAssetWasPickedViaAPI:(id)arg1;
+ (void)trackAssetsWereSharedViaAssignToContact:(id)arg1;
+ (void)trackAssetsWereSharedViaCopyToPasteboard:(id)arg1;
+ (void)trackAssetsWereSharedViaFacebook:(id)arg1;
+ (void)trackAssetsWereSharedViaMail:(id)arg1;
+ (void)trackAssetsWereSharedViaMessage:(id)arg1;
+ (void)trackAssetsWereSharedViaPrint:(id)arg1;
+ (void)trackAssetsWereSharedViaSharedPhotoStream:(id)arg1;
+ (void)trackAssetsWereSharedViaTudou:(id)arg1;
+ (void)trackAssetsWereSharedViaTwitter:(id)arg1;
+ (void)trackAssetsWereSharedViaWeibo:(id)arg1;
+ (void)trackAssetsWereSharedViaYouTube:(id)arg1;
+ (void)trackAssetsWereSharedViaYouku:(id)arg1;
+ (void)trackPhotoSetAsWallpaper:(id)arg1;
+ (void)trackPhotoWasEditedWithAutoEnhance:(id)arg1;
+ (void)trackPhotoWasEditedWithCrop:(id)arg1;
+ (void)trackPhotoWasEditedWithRedEye:(id)arg1;
+ (void)trackPhotoWasEditedWithRotation:(id)arg1;
+ (void)trackPhotoWasEditedWithStraighten:(id)arg1;
+ (void)trackPhotoWasViewed:(id)arg1;
+ (void)trackPhotoWasZoomed:(id)arg1;
+ (void)trackVideoWasPlayed:(id)arg1;
+ (void)trackVideoWasTrimmed:(id)arg1;

- (long long)activity;
- (id)clientID;
- (int)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1;
- (void)run;
- (void)runDaemonSide;
- (void)setActivity:(long long)arg1;
- (void)setClientID:(id)arg1;
- (void)setUuids:(id)arg1;
- (id)uuids;

@end
