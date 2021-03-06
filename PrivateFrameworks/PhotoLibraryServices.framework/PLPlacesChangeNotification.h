/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSOrderedSet, PLPlaces, PLChangeNotification;

@interface PLPlacesChangeNotification : PLAlbumListChangeNotification {
    PLChangeNotification *_changeNotification;
    NSArray *_changedPlacesList;
    NSOrderedSet *_newPlacesSet;
    NSOrderedSet *_originalPlacesSet;
    PLPlaces *_places;
}

+ (id)notificationWithPlaces:(id)arg1 originalPlacesSet:(id)arg2 newPlacesSet:(id)arg3 changedPlacesList:(id)arg4 backingNotification:(id)arg5;

- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (struct NSObject { Class x1; }*)albumList;
- (void)dealloc;
- (id)init;
- (id)initWithPlaces:(id)arg1 originalPlacesSet:(id)arg2 newPlacesSet:(id)arg3 changedPlacesList:(id)arg4 backingNotification:(id)arg5;

@end
