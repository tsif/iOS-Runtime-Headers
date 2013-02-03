/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVAssetInternal;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVAssetInternal *_assetInternal;
}

@property(readonly) NSArray * availableChapterLocales;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property(readonly) struct CGSize { float width; float height; } naturalSize;
@property(readonly) float preferredRate;
@property(readonly) struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } preferredTransform;
@property(readonly) float preferredVolume;

- (struct __CFURL { }*)_URL;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_comparisonToken;
- (id)_firstTrackGroupWithMediaType:(id)arg1;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (BOOL)_isReadyForBasicInspection;
- (BOOL)_isStreaming;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (void)_tracksDidChange;
- (id)_weakReference;
- (id)alternateTrackGroups;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLocales;
- (id)availableMetadataFormats;
- (void)cancelLoading;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)hasProtectedContent;
- (unsigned int)hash;
- (id)init;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (void)release;
- (id)retain;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (int)statusOfValueForKey:(id)arg1;
- (id)subtitleAlternatesTrackGroup;
- (id)trackGroups;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (int)unusedTrackID;

@end