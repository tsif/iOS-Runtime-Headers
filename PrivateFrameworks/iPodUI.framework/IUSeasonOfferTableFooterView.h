/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPStoreCompletionOffering, UILabel, UIButton, <IUSeasonOfferTableFooterViewDelegate>, IUTVShowListStoreOfferDownloadActionConfiguration, IUStoreOfferVariantSegmentedControl, UIColor, IUMediaDataSource;

@interface IUSeasonOfferTableFooterView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UILabel *_availableEpisodesLabel;
    UILabel *_completeMySeasonLabel;
    IUMediaDataSource *_dataSource;
    <IUSeasonOfferTableFooterViewDelegate> *_delegate;
    IUTVShowListStoreOfferDownloadActionConfiguration *_downloadAction;
    UIButton *_downloadButton;
    } _downloadButtonOriginalFrame;
    UILabel *_originalPriceLabel;
    UIColor *_separatorColor;
    UIButton *_showCompletedSeasonButton;
    UILabel *_showCompletedSeasonLabel;
    BOOL _showingMissingItems;
    MPStoreCompletionOffering *_storeCompletionOffering;
    IUStoreOfferVariantSegmentedControl *_variantSegmentedControl;
}

@property(retain) IUMediaDataSource * dataSource;
@property <IUSeasonOfferTableFooterViewDelegate> * delegate;
@property(retain) UIColor * separatorColor;

- (id)_completeMySeasonText;
- (void)_downloadButtonPressedAction:(id)arg1;
- (id)_newLabel:(BOOL)arg1;
- (id)_newLabelWithFontSize:(float)arg1 bold:(BOOL)arg2;
- (void)_reloadDownloadAction;
- (BOOL)_shouldShowOfferButtonOrLabel;
- (id)_showCompleteSeasonButtonText;
- (void)_showMissingItemsButtonAction:(id)arg1;
- (void)_variantSegmentedControlAction:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStoreCompletionOffering:(id)arg1 showingMissingItems:(BOOL)arg2 offerVariant:(int)arg3;
- (void)layoutSubviews;
- (id)separatorColor;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
