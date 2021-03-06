/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFAnnotation, UIPDFMarkupAnnotation, <NSObject><UIPDFAnnotationControllerDelegate>, UIPDFPageView, NSMutableArray, CALayer;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        int location; 
        int length; 
    struct CGSize { 
        float width; 
        float height; 
    NSMutableArray *_annotations;
    } _cachedMarginNoteSize;
    struct CGColor {} *_color[7];
    UIPDFMarkupAnnotation *_currentAnnotation;
    <NSObject><UIPDFAnnotationControllerDelegate> *_delegate;
    CALayer *_drawingSurface;
    } _initialRange;
    int _lock;
    BOOL _moving;
    UIPDFPageView *_pageView;
    } _startPoint;
    BOOL _tracking;
    int currentStyle;
    BOOL makeUnderlineAnnotation;
}

@property(retain) UIPDFAnnotation * currentAnnotation;
@property int currentStyle;
@property <NSObject><UIPDFAnnotationControllerDelegate> * delegate;
@property(retain) CALayer * drawingSurface;
@property BOOL makeUnderlineAnnotation;
@property(readonly) BOOL tracking;

+ (struct CGImage { }*)newMaskImage:(struct CGPDFPage { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)pageHasAnnotations:(id)arg1;

- (void)_addAnnotationViewFor:(id)arg1;
- (void)_initialRange:(struct CGPoint { float x1; float x2; })arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotationsInPage;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (BOOL)addLinkAnnotationsInPage;
- (id)annotatePageSelection;
- (BOOL)annotationLongPressRecognized:(id)arg1;
- (BOOL)annotationSingleTapRecognized:(id)arg1;
- (void)annotationTapRecognized:(id)arg1;
- (id)annotationWithIndex:(unsigned int)arg1;
- (struct CGColor { }*)colorForStyle:(int)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toSurfaceLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSurfaceLayer:(id)arg2;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (id)currentAnnotation;
- (int)currentStyle;
- (void)dealloc;
- (id)delegate;
- (void)doubleTapRecognized:(id)arg1;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (id)drawingSurface;
- (id)editableAnnotationAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)endTracking;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideAllAnnotations;
- (void)hostViewDidScroll;
- (id)init;
- (id)initWithPageView:(id)arg1;
- (BOOL)intersects:(struct CGPDFSelection { }*)arg1 with:(struct CGPDFSelection { }*)arg2;
- (BOOL)isSelection:(struct CGPDFSelection { }*)arg1 equalTo:(struct CGPDFSelection { }*)arg2;
- (void)layoutAnnotationViews:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)lock;
- (BOOL)madeInstantAnnotation;
- (BOOL)makeUnderlineAnnotation;
- (id)marginNoteImage:(int)arg1;
- (struct CGSize { float x1; float x2; })marginNoteImageSize;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (id)newAnnotation:(struct CGPDFDictionary { }*)arg1 type:(const char *)arg2;
- (struct CGImage { }*)newHighlightMaskImageFor:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (void)setAnnotation:(id)arg1 hidden:(BOOL)arg2;
- (void)setCurrentAnnotation:(id)arg1;
- (void)setCurrentStyle:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingSurface:(id)arg1;
- (void)setMakeUnderlineAnnotation:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setSurfacePosition:(id)arg1;
- (void)setView:(id)arg1;
- (BOOL)shouldHandleGestureAt:(struct CGPoint { float x1; float x2; })arg1 response:(BOOL*)arg2;
- (void)showAllAnnotations;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)trackMoved:(struct CGPoint { float x1; float x2; })arg1;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)tracking;
- (struct CGImage { }*)underlineImageFor:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)unlock;

@end
