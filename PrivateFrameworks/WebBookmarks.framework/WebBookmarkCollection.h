/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmark, TIWordTokenizer;

@interface WebBookmarkCollection : NSObject {
    struct sqlite3 { } *_db;
    BOOL _dirty;
    struct __CFLocale { } *_locale;
    BOOL _merging;
    WebBookmark *_rootBookmark;
    TIWordTokenizer *_wordTokenizer;
}

@property(getter=isMerging) BOOL merging;

+ (void)_postBookmarksChangedSyncNotification;
+ (id)_uniqueExternalUUID;
+ (BOOL)isLockedSync;
+ (BOOL)lockSync;
+ (id)readingListArchivesDirectoryPath;
+ (unsigned long long)readingListArchivesDiskUsage;
+ (id)safariBookmarkCollection;
+ (id)safariDirectoryPath;
+ (void)unlockSync;

- (int)_DAVGeneration;
- (BOOL)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(unsigned int)arg3 orderIndex:(unsigned int)arg4 isFolder:(BOOL)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 reorderSiblings:(BOOL)arg8 updateParentChildCount:(BOOL)arg9 updateAncestorEntries:(BOOL)arg10;
- (BOOL)_addChildrenOfID:(unsigned int)arg1 toCollection:(id)arg2 recursive:(BOOL)arg3 error:(id*)arg4;
- (id)_bookmarkDictionaryForSqliteRow:(struct sqlite3_stmt { }*)arg1 recursive:(BOOL)arg2 error:(id*)arg3;
- (unsigned int)_bookmarkIDForServerID:(id)arg1;
- (id)_bookmarkWithServerID:(id)arg1;
- (id)_bookmarkWithSpecialID:(unsigned int)arg1;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (id)_bookmarksInListWhere:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)_changeList;
- (BOOL)_clearAllDAVSyncData;
- (BOOL)_clearAllSyncKeys;
- (BOOL)_clearAllTombstones;
- (void)_clearAndCreateAncestorTable;
- (void)_clearAndCreateBookmarksTables;
- (void)_clearAndCreateBookmarksTitleWordTable;
- (BOOL)_clearChangeList;
- (BOOL)_clearSyncKeysUnderBookmarkID:(unsigned int)arg1 isFolder:(BOOL)arg2;
- (BOOL)_clearTitleWordsForBookmarkID:(unsigned int)arg1;
- (void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3;
- (void)_createSchema;
- (void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned int)arg2;
- (void)_cullReadingListBookmarksNeedingArchiveInModeToRollingListSize:(int)arg1;
- (id)_databaseTitleForSpecialID:(unsigned int)arg1;
- (BOOL)_deleteAncestorTableEntriesForBookmarkID:(unsigned int)arg1;
- (BOOL)_deleteBookmark:(id)arg1 leaveTombstone:(BOOL)arg2;
- (BOOL)_deleteRecursively:(unsigned int)arg1;
- (BOOL)_deleteSyncPropertyForKey:(id)arg1;
- (id)_errorForMostRecentSQLiteError;
- (id)_errorForMostRecentSQLiteErrorWithErrorCode:(int)arg1;
- (int)_executeSQL:(id)arg1;
- (int)_executeSQLWithCString:(const char *)arg1;
- (int)_finalizeStatementIfNotNull:(struct sqlite3_stmt { }*)arg1;
- (id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2 inParent:(unsigned int)arg3;
- (BOOL)_importBookmarksPlist:(id)arg1;
- (BOOL)_importSyncAnchorPlist:(id)arg1;
- (BOOL)_incrementDAVGeneration;
- (BOOL)_incrementGeneration;
- (BOOL)_indexAllTitleWords;
- (BOOL)_indexBookmarkID:(unsigned int)arg1 title:(id)arg2;
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned int)arg1 withAncestorIDs:(id)arg2;
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned int)arg1 withParentID:(unsigned int)arg2;
- (BOOL)_insertTombstoneWithServerID:(id)arg1;
- (int)_intFromExecutingSQL:(id)arg1;
- (BOOL)_markBookmarkID:(unsigned int)arg1 added:(BOOL)arg2;
- (BOOL)_markBookmarkID:(unsigned int)arg1 withSpecialID:(unsigned int)arg2;
- (BOOL)_markSpecialBookmarks;
- (id)_mergeCandidateBookmarkWithAddress:(id)arg1 parent:(unsigned int)arg2;
- (id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(unsigned int)arg2;
- (BOOL)_mergeChildrenOfID:(unsigned int)arg1 referencingBase:(id)arg2 error:(id*)arg3;
- (BOOL)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2;
- (void)_migrateSchemaVersion0ToVersion1;
- (void)_migrateSchemaVersion10ToVersion11;
- (void)_migrateSchemaVersion11And12And13ToVersion14;
- (void)_migrateSchemaVersion14ToVersion15;
- (void)_migrateSchemaVersion15ToVersion16;
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
- (void)_migrateSchemaVersion19And20ToVersion21;
- (void)_migrateSchemaVersion1And2ToVersion3;
- (void)_migrateSchemaVersion21ToVersion22;
- (void)_migrateSchemaVersion22ToVersion23;
- (void)_migrateSchemaVersion23ToVersion24;
- (void)_migrateSchemaVersion24ToVersion25;
- (void)_migrateSchemaVersion25ToVersion26;
- (void)_migrateSchemaVersion26ToVersion27;
- (void)_migrateSchemaVersion27ToVersion28;
- (void)_migrateSchemaVersion28ToVersion29;
- (void)_migrateSchemaVersion29ToVersion30;
- (void)_migrateSchemaVersion30ToVersion31;
- (void)_migrateSchemaVersion3ToVersion4;
- (void)_migrateSchemaVersion4ToVersion5;
- (void)_migrateSchemaVersion5ToVersion6;
- (void)_migrateSchemaVersion6ToVersion7;
- (void)_migrateSchemaVersion7ToVersion8;
- (void)_migrateSchemaVersion8ToVersion9;
- (void)_migrateSchemaVersion9ToVersion10;
- (void)_migrateToCurrentSchema;
- (BOOL)_moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (BOOL)_moveBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (void)_normalizeDatabaseURLs;
- (void)_normalizeSearchString:(struct __CFString { }*)arg1;
- (BOOL)_openDatabaseAtPath:(id)arg1 checkIntegrity:(BOOL)arg2 error:(id*)arg3;
- (BOOL)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (int)_orderIndexForBookmarkInsertedIntoParent:(unsigned int)arg1 insertAtBeginning:(BOOL)arg2;
- (id)_orderedWhereClauseForArchiveMode:(int)arg1;
- (void)_postBookmarksDidReloadNotification;
- (void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
- (void)_postBookmarksFolderContentsDidChangeNotification:(unsigned int)arg1;
- (void)_postBookmarksSpecialFoldersDidChangeNotification;
- (struct sqlite3_stmt { }*)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (BOOL)_rebuildAncestorTable;
- (void)_registerForSyncBookmarksFileChangedNotification;
- (BOOL)_reindexBookmarkID:(unsigned int)arg1 title:(id)arg2;
- (void)_rerunMigrationsIfNecessary;
- (BOOL)_restoreBookmarkBarIfMissing;
- (BOOL)_restoreMissingSpecialBookmarks;
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(BOOL)arg1;
- (BOOL)_saveBookmark:(id)arg1 withSpecialID:(unsigned int)arg2 updateGenerationIfNeeded:(BOOL)arg3;
- (struct sqlite3_stmt { }*)_selectBookmarksWhere:(id)arg1 countOnly:(BOOL)arg2;
- (struct sqlite3_stmt { }*)_selectBookmarksWhere:(id)arg1;
- (id)_serverIDAtOrderIndex:(int)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDForBookmarkID:(unsigned int)arg1;
- (id)_serverIDsInFolderWithServerID:(id)arg1;
- (BOOL)_setServerID:(id)arg1 forBookmark:(id)arg2;
- (BOOL)_setSyncData:(id)arg1 forBookmark:(id)arg2;
- (BOOL)_setSyncKey:(id)arg1 forBookmark:(id)arg2;
- (void)_simulateCrashWithDescription:(id)arg1;
- (unsigned int)_specialIDForBookmarkBeingSaved:(id)arg1;
- (unsigned int)_specialIDForBookmarkTitle:(id)arg1;
- (void)_startReadingListFetcher;
- (BOOL)_syncAdd:(id)arg1 toParent:(unsigned int)arg2 withOrderIndex:(unsigned int)arg3 error:(id*)arg4;
- (id)_syncKeysForServerIDs:(id)arg1;
- (BOOL)_syncPropertyExistsForKey:(id)arg1;
- (BOOL)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (BOOL)_updateCachedChildCountForParentID:(unsigned int)arg1 inDirection:(int)arg2;
- (BOOL)_updateHiddenAncestorCountForBookmarksUnderFolderID:(unsigned int)arg1 addingOffset:(int)arg2;
- (int)_userVersion;
- (BOOL)beginSyncTransaction;
- (id)bookmarkAtPath:(id)arg1;
- (id)bookmarkWithID:(unsigned int)arg1;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarksBarBookmark;
- (id)bookmarksBarList;
- (id)bookmarksDictionary;
- (id)bookmarksMatchingString:(id)arg1;
- (id)bookmarksWithTitlesMatchingString:(id)arg1;
- (id)bookmarksWithURLsMatchingString:(id)arg1;
- (BOOL)cleanupReadingListArchives;
- (BOOL)clearAllReadingListArchives;
- (void)commitSyncTransaction;
- (unsigned int)countReadingListBookmarksNeedingArchiveInMode:(int)arg1;
- (void)dealloc;
- (BOOL)deleteBookmark:(id)arg1 postChangeNotification:(BOOL)arg2;
- (BOOL)deleteBookmark:(id)arg1;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1;
- (id)firstReadingListBookmarkWithIconDataWithBaseURL:(id)arg1;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2;
- (unsigned int)generation;
- (unsigned int)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(BOOL)arg2;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1;
- (id)initWithPath:(id)arg1 checkIntegrity:(BOOL)arg2;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(BOOL)arg4;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (id)initWithPath:(id)arg1;
- (BOOL)isMerging;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(BOOL)arg3;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithID:(unsigned int)arg1;
- (id)listWithSpecialID:(unsigned int)arg1;
- (void)localeSettingsChanged;
- (BOOL)markArchivedReadingListItemsAsNonRecoverable;
- (BOOL)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(BOOL)arg2 error:(id*)arg3;
- (BOOL)moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (void)postBookmarksDidReloadNotification;
- (unsigned long long)purge:(unsigned long long)arg1;
- (id)purgeableReadingListItems;
- (unsigned long long)purgeableSpace;
- (id)readingList;
- (id)readingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)readingListFolder;
- (unsigned int)readingListFolderBookmarkID;
- (id)readingListItemsWithIconData:(BOOL)arg1 unreadOnly:(BOOL)arg2;
- (id)readingListWithUnreadOnly:(BOOL)arg1;
- (BOOL)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (BOOL)rollOutLastReadingListItem;
- (void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
- (void)rollbackSyncTransaction;
- (id)rollingListOfArchivedReadingListItems;
- (unsigned int)rollingReadingListMaximumCount;
- (id)rootBookmark;
- (id)rootList;
- (BOOL)saveBookmark:(id)arg1;
- (void)setMerging:(BOOL)arg1;
- (BOOL)setSyncData:(id)arg1 forKey:(id)arg2;
- (id)subfoldersOfID:(unsigned int)arg1;
- (id)syncDataForKey:(id)arg1;
- (BOOL)syncSetString:(id)arg1 forKey:(id)arg2;
- (id)syncStringForKey:(id)arg1;
- (BOOL)vacuum;

@end
