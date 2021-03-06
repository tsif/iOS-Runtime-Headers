/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextSelection, UIView, NSTimer, UITextRangeView, NSArray, UITextInteractionAssistant;

@interface UITextSelectionView : UIView {
    BOOL m_activated;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    BOOL m_deferSelectionCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    UITextInteractionAssistant *m_interactionAssistant;
    struct __CFRunLoopObserver { } *m_observer;
    UITextRangeView *m_rangeView;
    NSArray *m_replacements;
    UITextSelection *m_selection;
    int m_showingCommandsCounter;
    BOOL m_visible;
    BOOL m_wasShowingCommands;
}

@property BOOL caretBlinks;
@property(readonly) UIView * caretView;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property(readonly) UITextRangeView * rangeView;
@property(retain) NSArray * replacements;
@property(readonly) UITextSelection * selection;
@property(readonly) BOOL selectionCommandsShowing;
@property BOOL visible;

- (void)activate;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (void)appearOrFadeIfNecessary;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)cancelDelayedCommandRequests;
- (void)caretBlinkTimerFired:(id)arg1;
- (BOOL)caretBlinks;
- (id)caretView;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (void)clearRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)configureForHighlightMode;
- (void)configureForReplacementMode;
- (void)configureForSelectionMode;
- (void)deactivate;
- (void)dealloc;
- (void)deferredUpdateSelectionCommands;
- (void)deferredUpdateSelectionRects;
- (void)detach;
- (void)didRotate:(id)arg1;
- (void)doneMagnifying;
- (void)hideCaret:(int)arg1;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewDidChange;
- (void)inputViewDidMove;
- (void)inputViewWillAnimate;
- (void)inputViewWillChange;
- (void)inputViewWillMove;
- (void)installIfNecessary;
- (id)interactionAssistant;
- (void)invalidate;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)prepareForMagnification;
- (id)rangeView;
- (void)removeFromSuperview;
- (id)replacements;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (id)scrollView;
- (id)selection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundingBox;
- (void)selectionChanged;
- (BOOL)selectionCommandsShowing;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setReplacements:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)shouldBeVisible;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)showCaret:(int)arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)textSelectionViewActivated:(id)arg1;
- (void)touchCaretBlinkTimer;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (void)updateSelectionCommands;
- (void)updateSelectionDots;
- (void)updateSelectionRects;
- (void)updateSelectionRectsIfNeeded;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)viewAnimate:(id)arg1;
- (BOOL)visible;
- (void)willRotate:(id)arg1;
- (void)windowDidResignOrBecomeKey;

@end
