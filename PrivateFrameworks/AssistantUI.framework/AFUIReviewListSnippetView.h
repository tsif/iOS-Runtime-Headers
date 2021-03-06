/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class AFUIReviewListTitleView, UIImageView, UILabel, UIView, SALocalSearchReviewList, NSString, <AFUIReviewListSnippetViewDelegate>, AFUIReviewListItemView, NSArray;

@interface AFUIReviewListSnippetView : AFUISnippetView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _contentEdgeInsets;
    UIImageView *_footerSeparator;
    UIView *_footerView;
    UIImageView *_headerSeparator;
    UIView *_headerView;
    } _headerViewOffset;
    AFUIReviewListItemView *_pendingSelectionView;
    NSString *_providerName;
    UIView *_providerView;
    } _providerViewOffset;
    SALocalSearchReviewList *_reviewList;
    <AFUIReviewListSnippetViewDelegate> *_reviewListDelegate;
    NSArray *_reviewViews;
    UIView *_selectionOverlayView;
    AFUIReviewListTitleView *_titleView;
    } _titleViewOffset;
    } _totalRatingOffset;
    UIView *_totalRatingView;
    UILabel *_totalReviewsLabel;
    } _totalReviewsOffset;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentEdgeInsets;
@property struct UIOffset { float x1; float x2; } headerViewOffset;
@property struct UIOffset { float x1; float x2; } providerViewOffset;
@property <AFUIReviewListSnippetViewDelegate> * reviewListDelegate;
@property struct UIOffset { float x1; float x2; } totalRatingOffset;
@property struct UIOffset { float x1; float x2; } totalReviewsOffset;

+ (float)listItemHorizontalPadding;
+ (id)titleColor;
+ (float)titleFirstRowSpacing;

- (void).cxx_destruct;
- (void)_cancelSelection;
- (void)_checkForFooterFromDelegate;
- (void)_checkForHeaderFromDelegate;
- (id)_displayStringForReviewCount:(int)arg1 providerName:(id)arg2 providerView:(id)arg3;
- (id)_itemViewForTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1 event:(id)arg2;
- (void)_layoutSelectionViewOverView:(id)arg1;
- (void)_removeSelectionView;
- (void)_selectView:(id)arg1;
- (void)_setSelectReviews:(id)arg1;
- (void)_setTotalCount:(int)arg1 providerName:(id)arg2 view:(id)arg3;
- (void)_setTotalRating:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentEdgeInsets;
- (struct UIOffset { float x1; float x2; })headerViewOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIOffset { float x1; float x2; })providerViewOffset;
- (id)reviewListDelegate;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHeaderViewOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setProviderViewOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setReviewList:(id)arg1 providerName:(id)arg2 view:(id)arg3;
- (void)setReviewListDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalRatingOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setTotalReviewsOffset:(struct UIOffset { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct UIOffset { float x1; float x2; })totalRatingOffset;
- (struct UIOffset { float x1; float x2; })totalReviewsOffset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
