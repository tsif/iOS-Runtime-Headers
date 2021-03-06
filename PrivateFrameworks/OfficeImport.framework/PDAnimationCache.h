/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDBuild, PDAnimateMotionBehavior, PDAnimationTargetElement, NSString;

@interface PDAnimationCache : NSObject {
    PDBuild *mBuild;
    double mDelay;
    double mDirection;
    double mDuration;
    NSString *mGroupId;
    BOOL mHasDelay;
    BOOL mHasDirection;
    BOOL mHasDuration;
    BOOL mHasPartCount;
    BOOL mHasValue;
    BOOL mIsHead;
    int mIterateType;
    int mLevel;
    PDAnimateMotionBehavior *mMotionPath;
    int mNodeType;
    int mPartCount;
    int mPresetClass;
    int mPresetId;
    int mPresetSubType;
    PDAnimationTargetElement *mTargetElement;
    double mValue;
}

@property(retain) PDBuild * build;
@property double delay;
@property double direction;
@property double duration;
@property(retain) NSString * groupId;
@property BOOL hasDelay;
@property BOOL hasDirection;
@property BOOL hasDuration;
@property BOOL hasPartCount;
@property BOOL hasValue;
@property BOOL isHead;
@property int iterateType;
@property int level;
@property(retain) PDAnimateMotionBehavior * motionPath;
@property int nodeType;
@property int partCount;
@property int presetClass;
@property int presetId;
@property int presetSubType;
@property(retain) PDAnimationTargetElement * targetElement;
@property double value;

+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;
+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;

- (id)build;
- (void)dealloc;
- (double)delay;
- (double)direction;
- (double)duration;
- (id)groupId;
- (BOOL)hasDelay;
- (BOOL)hasDirection;
- (BOOL)hasDuration;
- (BOOL)hasPartCount;
- (BOOL)hasValue;
- (id)initWithAnimationInfo:(id)arg1;
- (BOOL)isHead;
- (int)iterateType;
- (int)level;
- (id)motionPath;
- (int)nodeType;
- (int)partCount;
- (int)presetClass;
- (int)presetId;
- (int)presetSubType;
- (void)setBuild:(id)arg1;
- (void)setDelay:(double)arg1;
- (void)setDirection:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasDelay:(BOOL)arg1;
- (void)setHasDirection:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasPartCount:(BOOL)arg1;
- (void)setHasValue:(BOOL)arg1;
- (void)setIsHead:(BOOL)arg1;
- (void)setIterateType:(int)arg1;
- (void)setLevel:(int)arg1;
- (void)setMotionPath:(id)arg1;
- (void)setNodeType:(int)arg1;
- (void)setPartCount:(int)arg1;
- (void)setPresetClass:(int)arg1;
- (void)setPresetId:(int)arg1;
- (void)setPresetSubType:(int)arg1;
- (void)setTargetElement:(id)arg1;
- (void)setValue:(double)arg1;
- (id)targetElement;
- (double)value;

@end
