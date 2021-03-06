/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImageView, UILabel, <IUGeniusGridViewDelegate>, UIView, NSMutableArray, NSString, NSArray;

@interface IUGeniusGridView : UIView {
    UILabel *_artistsLabel;
    UILabel *_basedOnLabel;
    NSMutableArray *_coverViews;
    UIView *_coversViewContainer;
    <IUGeniusGridViewDelegate> *_delegate;
    BOOL _enabled;
    struct CGImage { } *_image;
    int _orientation;
    unsigned int _page;
    UIImageView *_playImageView;
    NSArray *_representativeArtists;
    BOOL _showsPlayButton;
    NSString *_title;
    UILabel *_titleLabel;
}

@property(readonly) UIView * coversViewContainer;
@property <IUGeniusGridViewDelegate> * delegate;
@property(readonly) double durationForFlip;
@property(getter=isEnabled) BOOL enabled;
@property struct CGImage { }* image;
@property(readonly) int orientation;
@property unsigned int page;
@property(retain) NSArray * representativeArtists;
@property BOOL showsPlayButton;
@property(copy) NSString * title;

+ (float)coverImageSideLength;

- (void)_addFlipAnimationToLayer:(id)arg1 withBeginTime:(double)arg2 forwards:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gridFrame;
- (unsigned int)_gridSize;
- (void)_invalidateLayout;
- (id)_playButtonImage;
- (void)_removeAllAnimations;
- (void)_setCoverImages;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_updateArtistsLabelLayout;
- (id)coversViewContainer;
- (void)dealloc;
- (id)delegate;
- (double)durationForFlip;
- (void)flipToOrientation:(int)arg1 animated:(BOOL)arg2;
- (struct CGImage { }*)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (int)orientation;
- (unsigned int)page;
- (void)prepareForReuse;
- (id)representativeArtists;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setPage:(unsigned int)arg1;
- (void)setRepresentativeArtists:(id)arg1;
- (void)setShowsPlayButton:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showsPlayButton;
- (id)title;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
