/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, NSObject<WebOpenPanelResultListener>, UIFallbackCompatibleViewController, UIActionSheet, UIImagePickerController, UIWebRotatingNodePopover, UIViewController, <UIWebFileUploadPanelDelegate>, UIWebDocumentView, NSArray;

@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIWebRotatingNodePopoverDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _allowMultipleFiles;
    <UIWebFileUploadPanelDelegate> *_delegate;
    UIWebDocumentView *_documentView;
    BOOL _documentViewPresentedViewController;
    UIViewController *_fallbackViewController;
    UIWebRotatingNodePopover *_fileUploadPopover;
    UIImagePickerController *_imagePicker;
    DOMNode *_interactionElement;
    } _interactionPoint;
    BOOL _isUsingCamera;
    NSArray *_mimeTypes;
    NSObject<WebOpenPanelResultListener> *_resultListener;
    UIFallbackCompatibleViewController *_rootViewController;
    UIActionSheet *_selectPickerTypeSheet;
}

@property BOOL allowMultipleFiles;
@property <UIWebFileUploadPanelDelegate> * delegate;
@property UIWebDocumentView * documentView;
@property BOOL isUsingCamera;
@property(copy) NSArray * mimeTypes;
@property(retain) NSObject<WebOpenPanelResultListener> * resultListener;

- (void)_cancel;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (float)_compressionQuality;
- (void)_dismissDisplayAnimated:(BOOL)arg1;
- (void)_dispatchDidDismiss;
- (id)_displayStringForPhotos:(unsigned int)arg1 videos:(unsigned int)arg2;
- (void)_ensureInteractionElement;
- (id)_filePathForMediaURL:(id)arg1;
- (void)_filePathFromMediaInfo:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_mediaTypesForPickerSourceType:(int)arg1;
- (id)_photoPickerWithSourceType:(int)arg1;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (BOOL)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (void)_temporaryFilePathForOriginalImage:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_thumbnailSizedImageForImage:(id)arg1;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (BOOL)allowMultipleFiles;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)documentView;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithResultListener:(id)arg1 mimeTypes:(id)arg2 allowMultipleFiles:(BOOL)arg3 documentView:(id)arg4;
- (BOOL)isUsingCamera;
- (id)mimeTypes;
- (void)popoverWasDismissed:(id)arg1;
- (void)present;
- (id)resultListener;
- (void)setAllowMultipleFiles:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setIsUsingCamera:(BOOL)arg1;
- (void)setMimeTypes:(id)arg1;
- (void)setResultListener:(id)arg1;

@end
