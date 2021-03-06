/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, CKTextContentView, NSMutableArray, UIView, NSString, CKContentEntryBridge, UITapGestureRecognizer;

@interface CKContentEntryView : UIScrollView <CKEntryField, UITextContentViewDelegate, CKContentEntryBridgeClient, UIGestureRecognizerDelegate, CKTextContentViewDelegate> {
    unsigned int _showsSubject : 1;
    unsigned int _viewsLoaded : 1;
    CKTextContentView *_activeView;
    CKContentEntryBridge *_bridge;
    int _contentAdjustmentHoldCount;
    NSMutableArray *_contentViews;
    NSString *_defaultText;
    id _entryFieldDelegate;
    BOOL _needsContentAdjustment;
    BOOL _needsScrollToVisible;
    int _outgoingBubbleColor;
    UITapGestureRecognizer *_singleTap;
    UIView *_subjectLine;
    CKTextContentView *_subjectView;
    CKTextContentView *_textView;
}

@property(readonly) NSArray * contentViews;
@property(readonly) unsigned int displayedLines;
@property(readonly) BOOL isShowingDictationPlaceholder;
@property int outgoingBubbleColor;
@property BOOL showsSubject;

- (void)_addContentView:(id)arg1;
- (void)_adjustAllContent;
- (void)_adjustAllContentWithAnimation:(BOOL)arg1;
- (void)_beginHoldingContentAdjustments;
- (struct CGSize { float x1; float x2; })_contentSize;
- (void)_endHoldingContentAdjustments;
- (void)_endHoldingContentAdjustmentsWithAnimation:(BOOL)arg1;
- (void)_loadEntryViews;
- (void)_reloadEntryViewsIfLoaded;
- (void)_removeContentView:(id)arg1;
- (void)_setupGestureRecognizers;
- (id)activeView;
- (id)attachments;
- (BOOL)canPasteObject:(id)arg1;
- (BOOL)ckTextContentViewShouldReturn:(id)arg1;
- (void)clearMessage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEntryFrame:(BOOL)arg1;
- (id)contentViews;
- (int)cursorPosition;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })desiredSize;
- (void)disableEditing;
- (unsigned int)displayedLines;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1 inTextContentView:(id)arg2;
- (id)entryFieldDelegate;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (BOOL)hasContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertMessagePart:(id)arg1;
- (BOOL)isActive;
- (BOOL)isShowingDictationPlaceholder;
- (int)lastCursorPosition;
- (void)loadSubviews;
- (void)makeActive;
- (id)messageComposition;
- (void)moveCursorToEnd;
- (int)outgoingBubbleColor;
- (void)reflowContent;
- (void)reflowContentWithAnimation:(BOOL)arg1;
- (void)restoreCursorPosition;
- (void)saveCursorPosition;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)setContentHidden:(BOOL)arg1 subjectHidden:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCursorPosition:(int)arg1;
- (void)setDefaultText:(id)arg1;
- (void)setEntryFieldDelegate:(id)arg1;
- (void)setIgnoreAnimations:(BOOL)arg1;
- (void)setMessageComposition:(id)arg1;
- (void)setMessageParts:(id)arg1;
- (void)setOutgoingBubbleColor:(int)arg1;
- (void)setShowsSubject:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (void)showSubjectLinesAndDefaultText:(BOOL)arg1;
- (BOOL)showsSubject;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subject;
- (void)tapGesture:(id)arg1;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textContentViewDidBeginEditing:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentViewShouldBeginEditing:(id)arg1;
- (BOOL)textContentViewShouldEndEditing:(id)arg1;
- (void)updateFontSize;

@end
