/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterRun, WDAnnotation, NSString, WDText, NSDate;

@interface WDAnnotation : WDRun {
    NSDate *mDate;
    WDAnnotation *mOtherEndOfRangedAnnotation;
    NSString *mOwner;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDText *mText;
    int mType;
}

- (int)annotationType;
- (id)date;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (id)otherEndOfRangedAnnotation;
- (id)owner;
- (id)reference;
- (BOOL)referencePropertiesFixed;
- (int)runType;
- (void)setDate:(id)arg1;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferencePropertiesFixed;
- (id)text;

@end
