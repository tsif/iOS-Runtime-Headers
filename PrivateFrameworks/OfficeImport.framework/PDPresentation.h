/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextListStyle, NSMutableArray, NSMutableDictionary;

@interface PDPresentation : OCDDocument {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    NSMutableArray *mBulletBlips;
    NSMutableDictionary *mCommentAuthors;
    OADTextListStyle *mDefaultTextStyle;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsKiosk;
    BOOL mIsLooping;
    NSMutableArray *mNotesMasters;
    } mNotesSize;
    NSMutableArray *mSlideMasters;
    } mSlideSize;
    NSMutableArray *mSlides;
}

- (id).cxx_construct;
- (unsigned long)addBulletBlip:(id)arg1;
- (void)addNotesMaster:(id)arg1;
- (void)addSlide:(id)arg1;
- (void)addSlideMaster:(id)arg1;
- (id)bulletBlipAtIndex:(long)arg1;
- (unsigned long)bulletBlipCount;
- (id)bulletBlips;
- (id)commentAuthorForId:(unsigned int)arg1;
- (void)dealloc;
- (id)defaultTextStyle;
- (void)flushUnusedMastersAndLayouts;
- (unsigned int)indexOfSlide:(id)arg1;
- (id)init;
- (BOOL)isAutoPlay;
- (BOOL)isCommentsVisible;
- (BOOL)isKiosk;
- (BOOL)isLooping;
- (id)notesMasterAtIndex:(unsigned int)arg1;
- (unsigned int)notesMasterCount;
- (struct CGSize { float x1; float x2; })notesSize;
- (void)setCommentAuthor:(id)arg1 forId:(unsigned int)arg2;
- (void)setIsAutoPlay:(BOOL)arg1;
- (void)setIsCommentsVisible:(BOOL)arg1;
- (void)setIsKiosk:(BOOL)arg1;
- (void)setIsLooping:(BOOL)arg1;
- (void)setNotesSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSlideSize:(struct CGSize { float x1; float x2; })arg1;
- (id)slideAtIndex:(unsigned int)arg1;
- (unsigned int)slideCount;
- (id)slideMasterAtIndex:(unsigned int)arg1;
- (unsigned int)slideMasterCount;
- (struct CGSize { float x1; float x2; })slideSize;

@end
