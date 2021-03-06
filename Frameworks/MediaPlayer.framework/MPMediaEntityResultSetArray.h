/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPMediaLibraryResultSet>, MPWeakRef, MPMediaQuerySectionInfo, NSObject<OS_dispatch_queue>, MPMediaQueryCriteria;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
    id *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    Class _entityClass;
    MPWeakRef *_libraryWeakRef;
    MPMediaQueryCriteria *_queryCriteria;
    <MPMediaLibraryResultSet> *_resultSet;
    MPMediaQuerySectionInfo *_sectionInfo;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(int)arg3 library:(id)arg4;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)sectionInfo;

@end
