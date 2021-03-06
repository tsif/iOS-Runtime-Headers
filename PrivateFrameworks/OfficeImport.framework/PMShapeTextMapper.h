/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper {
    OADOrientedBounds *mBounds;
    BOOL mRectangular;
    CMStyle *mStyle;
    OADTextBody *mTextBody;
}

- (void)dealloc;
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (BOOL)isTableCellContent;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (BOOL)setRectangular:(BOOL)arg1;
- (int)textAnchor;

@end
