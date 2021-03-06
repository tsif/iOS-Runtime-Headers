/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, ML3Container, ML3NondurableWriteSet, ML3SqliteDatabase, ML3DatabaseMetadata, NSCountedSet, NSArray, NSObject<OS_dispatch_queue>, ML3MusicLibrary_SQLiteDatabaseContext, ML3UbiquitousDatabase, NSMutableArray, MLSQLiteConnection;

@interface ML3MusicLibrary : NSObject {
    NSMutableArray *_artworkConversionCompletionHandlers;
    NSString *_artworkConverterPIDNotifyName;
    int _artworkConverterPIDToken;
    NSString *_artworkDirectory;
    BOOL _artworkDirectoryFilesystemRepresentation[1024];
    NSObject<OS_dispatch_queue> *_atomicityQueue;
    ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;
    int _backupDisabledCount;
    BOOL _backupNeeded;
    NSString *_displayValuesNotifyName;
    int _displayValuesNotifyToken;
    BOOL _enableWrites;
    ML3SqliteDatabase *_geniusDatabase;
    BOOL _hasEverConnectedTo;
    BOOL _hasEverConnectedToDatabase;
    MLSQLiteConnection *_inMemoryDatabaseConnection;
    NSString *_invisiblePropertyNotifyName;
    int _invisiblePropertyNotifyToken;
    BOOL _isConvertingArtwork;
    BOOL _keepPresignedValidyAfterVerification;
    NSString *_libraryUIDNotifyName;
    int _libraryUIDNotifyToken;
    id _loggingObserver;
    ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;
    id _mcSettingsObserver;
    NSString *_nonContentsNotifyName;
    int _nonContentsNotifyToken;
    NSObject<OS_dispatch_queue> *_nondurableConcurrentQueue;
    ML3NondurableWriteSet *_nondurableWriteSet;
    NSString *_notifyName;
    NSCountedSet *_notifyNamesToIgnore;
    int _notifyToken;
    NSString *_path;
    NSMutableArray *_pendingNotifyPostNames;
    BOOL _requiresProcessAssertion;
    NSString *_syncGenerationNotifyName;
    int _syncGenerationNotifyToken;
    ML3UbiquitousDatabase *_ubiquitousDatabase;
}

@property(readonly) long long autoFilledTracksTotalSize;
@property(readonly) long long currentContentRevision;
@property(readonly) long long currentRevision;
@property(readonly) ML3DatabaseMetadata * databaseInfo;
@property(readonly) BOOL hasEverConnectedToDatabase;
@property BOOL keepPresignedValidyAfterVerification;
@property(readonly) NSArray * localizedSectionIndexTitles;
@property(readonly) BOOL mediaRestrictionEnabled;
@property(getter=isNondurableWritingActive,readonly) BOOL nondurableWritingActive;
@property(readonly) NSString * path;
@property(readonly) long long persistentID;
@property(readonly) NSArray * preferredAudioTracks;
@property(readonly) NSArray * preferredSubtitleTracks;
@property(readonly) ML3Container * purchasedTracksPlaylist;
@property(readonly) BOOL requiresArtworkConversionPostProcessing;
@property(readonly) BOOL requiresPostProcessing;
@property long long syncGenerationID;
@property(readonly) BOOL writable;

+ (BOOL)_inTransactionUpdateSearchMapOnConnection:(id)arg1;
+ (BOOL)_inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
+ (id)_newDatabaseConnectionForPath:(id)arg1 enableWrites:(BOOL)arg2 forLibrary:(id)arg3;
+ (id)_purgeableTrackPredicateWithUrgency:(int)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (id)allArtworkFormatSizes;
+ (id)allSchemaSQL;
+ (id)allTables;
+ (struct MLArtworkFormatSpec { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; int x6; BOOL x7; })artworkFormatSpecForArtworkFormatID:(unsigned int)arg1;
+ (BOOL)automaticDatabaseArtworkConversionEnabled;
+ (void)beginDatabaseMigrationIfNecessary;
+ (void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3 progressHandler:(id)arg4;
+ (void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)buildDatabaseTablesUsingConnection:(id)arg1;
+ (void)connection:(id)arg1 didOpenDBHandle:(struct sqlite3 { }*)arg2;
+ (void)connection:(id)arg1 willCloseDBHandle:(struct sqlite3 { }*)arg2;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (BOOL)createIndexesUsingConnection:(id)arg1;
+ (int)currentUserVersion;
+ (void)disableAutomaticDatabaseArtworkConversion;
+ (void)disableAutomaticDatabaseValidation;
+ (BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char *)arg2;
+ (BOOL)dropIndexesUsingConnection:(id)arg1;
+ (void)enumerateSortMapTablesUsingBlock:(id)arg1;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 { }*)arg2;
+ (id)fallbackGeniusDatabaseFilePath;
+ (id)geniusDatabaseFilePath;
+ (BOOL)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1;
+ (BOOL)importationEnabled;
+ (id)indexSchemaSQL;
+ (void)initialize;
+ (id)itemIndexSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)mainDatabasePath;
+ (id)mediaFolderPath;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (BOOL)migrateToCurrentUserVersionUsingConnection:(id)arg1;
+ (id)newDatabaseConnectionForPath:(id)arg1 enableWrites:(BOOL)arg2;
+ (unsigned int)numberOfArtworkStyles;
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (unsigned int)readableArtworkFormatIDForArtworkFormatID:(unsigned int)arg1;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (void)setImportationEnabled:(BOOL)arg1;
+ (id)sharedLibrary;
+ (id)sortMapSchemaSQL;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (id)storeLinkSchemaSQL;
+ (id)systemCurrentLanguage;
+ (BOOL)updateSortMapOnConnection:(id)arg1;
+ (BOOL)updateTrackIntegrityOnConnection:(id)arg1;
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;

- (void).cxx_destruct;
- (BOOL)__convertArtworkCacheID:(id)arg1 fromArtworkFormat:(unsigned int)arg2 toArtworkFormat:(unsigned int)arg3 sourceOptions:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)_accessAccountCacheDBForSQL:(id)arg1 usingBlock:(id)arg2;
- (void)_accessDatabaseContextUsingBlock:(id)arg1;
- (id)_albumArtistGroupingNameFromDataSource:(id)arg1;
- (long long)_albumArtistPIDFromDataSource:(id)arg1 sortableNames:(id)arg2 existingAlbumArtistPIDsForGroupingKeys:(id)arg3 insertIntoAlbumArtistStatement:(id)arg4;
- (id)_albumGroupingIdentifierFromDataSource:(id)arg1 albumArtistPersistentID:(long long)arg2 groupingKeysForGroupingNames:(id)arg3;
- (long long)_albumPIDFromDataSource:(id)arg1 sortableNames:(id)arg2 albumArtistPID:(long long)arg3 existingAlbumStatesForGroupingIdentifiers:(id)arg4 insertIntoAlbumStatement:(id)arg5 groupingKeysForGroupingNames:(id)arg6;
- (id)_artistGroupingNameFromDataSource:(id)arg1;
- (long long)_artistPIDFromDataSource:(id)arg1 sortableNames:(id)arg2 existingArtistPIDsForGroupingKeys:(id)arg3 insertIntoItemArtistStatement:(id)arg4;
- (void)_atomicClearIsConvertingArtwork;
- (BOOL)_atomicTestAndSetIsConvertingArtworkWithCompletionHandler:(id)arg1;
- (long long)_baseLocationPIDFromDataSource:(id)arg1;
- (BOOL)_commitNondurableWrites;
- (id)_composerGroupingNameFromDataSource:(id)arg1;
- (long long)_composerPIDFromDataSource:(id)arg1 sortableNames:(id)arg2 existingComposerPIDsForGroupingKeys:(id)arg3 insertIntoComposerStatement:(id)arg4;
- (void)_convertArtworkInManifsetFromArtworkFormat:(unsigned int)arg1 toArtworkFormat:(unsigned int)arg2 notificationInterval:(double)arg3;
- (void)_delayableNotifyPost:(id)arg1 localNotificationName:(id)arg2;
- (BOOL)_drawAndWriteImage:(struct CGImage { }*)arg1 outputWidth:(unsigned long)arg2 outputHeight:(unsigned long)arg3 colorSpace:(struct CGColorSpace { }*)arg4 cacheID:(id)arg5 formatID:(unsigned int)arg6 artworkStyle:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg7 resultingImageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg8 resultingLength:(unsigned int*)arg9;
- (void)_enumerateDatabaseContextsUsingBlock:(id)arg1;
- (void)_enumeratePurgeableTracksForUrgency:(int)arg1 respectSongMattress:(BOOL)arg2 usingBlock:(id)arg3;
- (id)_existingAlbumStatesForGroupingIdentifiers:(id)arg1;
- (id)_existingCollectionPIDsForTable:(id)arg1 groupingNames:(id)arg2 groupingKeysForGroupingNames:(id)arg3;
- (id)_genreGroupingNameFromDataSource:(id)arg1;
- (long long)_genrePIDFromDataSource:(id)arg1 sortableNames:(id)arg2 existingGenrePIDsForGroupingKeys:(id)arg3 insertIntoGenreStatement:(id)arg4;
- (id)_insertIntoAlbumArtistStatement;
- (id)_insertIntoAlbumStatement;
- (id)_insertIntoChapterUsingVtabSQL;
- (id)_insertIntoComposerStatement;
- (id)_insertIntoGenreStatement;
- (id)_insertIntoItemArtistStatement;
- (id)_insertIntoItemExtraUsingVtabSQL;
- (id)_insertIntoItemSearchUsingVtabSQL;
- (id)_insertIntoItemStatsUsingVtabSQL;
- (id)_insertIntoItemUsingVtabSQL;
- (id)_insertIntoPurgeableListUsingVtabSQL;
- (id)_insertStringsIntoSortMapOrFail:(id)arg1;
- (long long)_int64ValueForFirstRowAndColumnWithSQL:(id)arg1;
- (long long)_locationKindPIDFromDataSource:(id)arg1;
- (BOOL)_mustProcessLanguageChange;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (void)_noteUnnecessaryConversionForDeviceTypeFromArtworkFormat:(unsigned int)arg1 toArtworkFormat:(unsigned int)arg2;
- (void)_onBackgroundQueuePerformDatabaseContextBlock:(id)arg1;
- (void)_onMainQueuePerformDatabaseContextBlock:(id)arg1;
- (void)_populateNameOrderForPID:(struct unordered_map<long long, ML3NameOrder, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, ML3NameOrder>>, false> { struct _Select1st<std::pair<const long long, ML3NameOrder> > { } x1; struct equal_to<long long> { } x2; struct hash<long long> { } x3; struct _Mod_range_hashing { } x4; struct allocator<std::tr1::__detail::_Hash_node<std::pair<const long long, ML3NameOrder>, false> > { } x5; struct _Hash_node<std::pair<const long long, ML3NameOrder>, false> {} **x6; unsigned int x7; unsigned int x8; struct _Prime_rehash_policy { float x_9_1_1; float x_9_1_2; unsigned long x_9_1_3; } x9; }*)arg1 table:(id)arg2 nameSQL:(id)arg3;
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)arg1;
- (void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_postLibraryNotification:(id)arg1 isSourceExternal:(BOOL)arg2 userInfo:(id)arg3;
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (id)_replaceIntoPurgeableListUsingVtabSQL;
- (BOOL)_runStatementWithSQL:(id)arg1 bindingValue:(id)arg2 :(id)arg3;
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)arg1;
- (BOOL)_writeCGImage:(struct CGImage { }*)arg1 length:(unsigned long)arg2 forCacheID:(id)arg3 formatID:(unsigned int)arg4 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (BOOL)_writeImageBytes:(const void*)arg1 length:(unsigned long)arg2 formatID:(unsigned int)arg3 cacheID:(id)arg4;
- (void)accessConnectionUsingBlock:(id)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (void)accessSortKeyBuilder:(id)arg1;
- (long long)addStringToSortMap:(id)arg1;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artworkDataForCacheID:(id)arg1 formatID:(unsigned int)arg2;
- (long long)autoFilledTracksTotalSize;
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)arg1 respectSongMattress:(BOOL)arg2;
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)arg1;
- (void)beginAutoConvertingArtworkFormats;
- (void)beginConvertingArtworkFormatsWithCompletionHandler:(id)arg1;
- (BOOL)buildDatabaseTables;
- (void)checkForChangesOnConnection:(id)arg1 completionHandler:(id)arg2;
- (void)clearTrackAndCollectionCloudStatus;
- (BOOL)coerceValidDatabase;
- (BOOL)compactArtwork;
- (id)composerForComposerName:(id)arg1;
- (void)convertAlbumGridBGRA1xToJPEG1xWithNotificationInterval:(double)arg1;
- (void)convertAlbumListJPEGToBGRAWithNotificationInterval:(double)arg1;
- (void)convertArtworkFormatsInBackground:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)convertLegacyArtworkFromArtworkBlobFilePath:(id)arg1;
- (BOOL)createIndexes;
- (long long)currentContentRevision;
- (long long)currentRevision;
- (id)databaseInfo;
- (void)dealloc;
- (BOOL)deleteAllArtwork;
- (BOOL)deleteAndRecreateDatabaseUsingConnection:(id)arg1;
- (BOOL)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2 deleteAllFromConversionTable:(BOOL)arg3;
- (BOOL)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2;
- (BOOL)deleteArtworkForCacheID:(id)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(int)arg2 respectSongMattress:(BOOL)arg3;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(int)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (BOOL)deleteDatabase;
- (void)deleteFromArtworkConversionForCacheID:(id)arg1 fromFormatID:(unsigned int)arg2 toFormatID:(unsigned int)arg3;
- (void)deletePresignedValidity;
- (BOOL)dropItemIndexes;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(id)arg2;
- (BOOL)executeSQL:(id)arg1;
- (void)fillContainerForHomeSharingConnection:(id)arg1 containerID:(long long)arg2 completionHandler:(id)arg3;
- (id)geniusDatabase;
- (id)genreForGenre:(id)arg1;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(int)arg2 usingBlock:(id)arg3;
- (id)groupingKeyForString:(id)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (BOOL)handleArtworkConversion;
- (BOOL)handlePrepareDatabase;
- (BOOL)hasArtworkForCacheID:(id)arg1 ensureArtworkFileExists:(BOOL)arg2;
- (BOOL)hasArtworkForCacheID:(id)arg1;
- (BOOL)hasEverConnectedToDatabase;
- (BOOL)hasPresignedValidity;
- (BOOL)importTracksFromDataSource:(id)arg1 progressHandler:(id)arg2;
- (BOOL)importTracksFromDataSource:(id)arg1;
- (id)initWithPath:(id)arg1 enableWrites:(BOOL)arg2;
- (BOOL)insertArtworkWithImageData:(id)arg1 forCacheID:(id)arg2;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (BOOL)isNondurableWritingActive;
- (BOOL)isReadable;
- (BOOL)keepPresignedValidyAfterVerification;
- (id)libraryUID;
- (void)loadArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2 completionHandler:(id)arg3;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (id)locationKindForKind:(id)arg1;
- (BOOL)mediaRestrictionEnabled;
- (void)migratePresignedValidity;
- (struct { long long x1; int x2; })nameOrderForString:(id)arg1;
- (id)newDatabaseConnection;
- (id)nondurableWriteSetForReading;
- (id)nondurableWriteSetForWriting;
- (void)notifyContentsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (id)path;
- (void)performTransactionAllowingWrites:(BOOL)arg1 withBlock:(id)arg2;
- (void)performTransactionKind:(int)arg1 waitIfBusy:(BOOL)arg2 withBlock:(id)arg3;
- (void)performTransactionKind:(int)arg1 withBlock:(id)arg2;
- (void)performTransactionWithBlock:(id)arg1;
- (BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(int)arg3;
- (long long)persistentID;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1 trackValues:(id)arg2;
- (BOOL)populateStaticItemsOfDynamicContainers;
- (id)preferredAudioTracks;
- (id)preferredSubtitleTracks;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (id)purchasedTracksPlaylist;
- (void)reconnectToDatabase;
- (void)reconnectToDatabaseWithCompletionHandler:(id)arg1;
- (BOOL)removeLocationsForItemsMissingAssets;
- (void)removeOrphanedTracks;
- (BOOL)requiresArtworkConversionPostProcessing;
- (BOOL)requiresPostProcessing;
- (BOOL)resetAllContents;
- (void)resetUbiquitousMetadata;
- (BOOL)runStatementWithSQL:(id)arg1 bindingValue:(id)arg2;
- (void)savePlaylists;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (unsigned int)sectionIndexTitleIndexForSectionIndex:(unsigned int)arg1;
- (BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (void)setKeepPresignedValidyAfterVerification:(BOOL)arg1;
- (void)setLibraryUID:(id)arg1;
- (void)setSyncGenerationID:(long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (void)statementWithSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (void)statementWithSQL:(id)arg1 usingBlock:(id)arg2;
- (id)statementWithSQL:(id)arg1;
- (void)statementWithSQLPrefix:(id)arg1 inPersistentIDs:(const long long*)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
- (long long)syncGenerationID;
- (id)ubiquitousDatabase;
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)updateSortMap;
- (void)updateTrackIntegrity;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)verifyPresignedValidity;
- (BOOL)writable;
- (BOOL)writeToDatabaseArtworkForCacheID:(id)arg1 length:(unsigned long)arg2 formatID:(unsigned int)arg3 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (BOOL)writeToDiskArtworkWithImageData:(id)arg1 forCacheID:(id)arg2 resultingLengths:(unsigned int**)arg3 formatIDs:(unsigned int**)arg4 imageSubRects:(struct CGRect {}**)arg5 count:(unsigned int*)arg6;

@end
