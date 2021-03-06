/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSMutableSet, NSMutableIndexSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject {
    NSMutableDictionary *_existingOIDsByUUID;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByPath;
    BOOL _hasProcessedAnyAssets;
    PLPhotoLibrary *_photoLibrary;
    NSMutableIndexSet *_thumbIndexes;
    unsigned int _thumbnailBatchFetchSize;
}

@property(retain) NSMutableDictionary * existingOIDsByUUID;
@property(retain) NSMutableSet * existingUUIDs;
@property(retain) NSMutableDictionary * existingUUIDsByPath;
@property unsigned int thumbnailBatchFetchSize;

- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 forceInsert:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2;
- (void)addAvailableThumbnailIndex:(unsigned int)arg1;
- (id)assetURLisInDatabase:(id)arg1;
- (void)createThumbnailForVideoAsset:(id)arg1;
- (void)dealloc;
- (id)existingOIDsByUUID;
- (id)existingUUIDs;
- (id)existingUUIDsByPath;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned int)nextThumbnailIndex;
- (void)setExistingOIDsByUUID:(id)arg1;
- (void)setExistingUUIDs:(id)arg1;
- (void)setExistingUUIDsByPath:(id)arg1;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (void)setThumbnailBatchFetchSize:(unsigned int)arg1;
- (BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2 thumbnailsInformation:(id)arg3 allowedToResetThumbnails:(BOOL)arg4;
- (unsigned int)thumbnailBatchFetchSize;

@end
