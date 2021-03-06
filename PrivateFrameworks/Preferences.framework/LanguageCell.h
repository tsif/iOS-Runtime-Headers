/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIImageView, NSString;

@interface LanguageCell : PSTableCell {
    UIImageView *_languageNameImage;
    NSString *_languageNameText;
}

@property(retain) UIImageView * languageNameImage;
@property(retain) NSString * languageNameText;

- (void)dealloc;
- (id)languageNameImage;
- (id)languageNameText;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLanguageNameImage:(id)arg1;
- (void)setLanguageNameText:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)turnOffLanguageNameImage;

@end
