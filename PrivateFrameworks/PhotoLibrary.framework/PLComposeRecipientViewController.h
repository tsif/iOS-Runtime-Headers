/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLComposeRecipientView, NSNumber, MFContactsSearchManager, UIPopoverController, MFContactsSearchResultsModel, UITableView, MFSearchShadowView, <PLComposeRecipientViewControllerDelegate>, UIScrollView, NSArray;

@interface PLComposeRecipientViewController : UIViewController <MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, UIPopoverControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int showingPeoplePicker : 1; 
        unsigned int showingSearchResultsTable : 1; 
        unsigned int offsettingForResultsTable : 1; 
        unsigned int wasFirstResponder : 1; 
    NSNumber *_currentSearchTaskID;
    <PLComposeRecipientViewControllerDelegate> *_delegate;
    BOOL _drawsLetterpress;
    } _flags;
    } _keyboardFrame;
    unsigned int _maxExpandRows;
    UIPopoverController *_peoplePickerPopoverController;
    UIScrollView *_recipientContainerView;
    PLComposeRecipientView *_recipientView;
    MFContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    MFContactsSearchResultsModel *_searchResultsModel;
    UIPopoverController *_searchResultsPopoverController;
    UITableView *_searchResultsTable;
    MFSearchShadowView *_shadowView;
}

@property <PLComposeRecipientViewControllerDelegate> * delegate;
@property BOOL drawsLetterpress;
@property unsigned int maxExpandRows;
@property(readonly) PLComposeRecipientView * recipientView;

+ (void)recordRecentEventForAddresses:(id)arg1;

- (void*)_addressBook;
- (void)_forceDismissPeoplePickerPopover;
- (void)_keyboardSizeDidChange:(id)arg1;
- (id)_newSearchResultsTable;
- (id)_newShadowView;
- (void)_presentSearchResultsPopover;
- (void)_searchForRecipientWithText:(id)arg1;
- (id)_searchManager;
- (BOOL)_searchResultsShowInPopover;
- (void)_setSearchResults:(id)arg1;
- (void)_updateSearchResultsTableVisibility;
- (void)_updateViewsLayoutAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)beganNetworkActivity;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (BOOL)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)drawsLetterpress;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(int)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isRecipientViewFirstResponder;
- (void)loadView;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (unsigned int)maxExpandRows;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)recipientView;
- (id)recipients;
- (void)setDelegate:(id)arg1;
- (void)setDrawsLetterpress:(BOOL)arg1;
- (void)setMaxExpandRows:(unsigned int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidUnload;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
