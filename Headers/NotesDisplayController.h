/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileNotes-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UITextViewDelegate.h"
#import "NoteContentLayerDelegate.h"
#import "NoteNavigationViewDelegate.h"
#import "AFContextProvider.h"
#import "ResumableViewController.h"

@class NoteObject, NSTimer, UIActionSheet, NoteStoreObject, UIPopoverController, UISnapshotView, NoteContentLayer, UILabel, NotesBackgroundView, NoteDateView, NoteNavigationView, UIBarButtonItem, NSString;
@protocol NotesListAuthority;

__attribute__((visibility("hidden")))
@interface NotesDisplayController : ResumableViewController <UITextViewDelegate, NoteContentLayerDelegate, NoteNavigationViewDelegate, UIActionSheetDelegate, AFContextProvider, UIPopoverControllerDelegate> {
	id<NotesListAuthority> _delegate;
	NotesBackgroundView* _backgroundView;
	NoteDateView* _dateView;
	NoteNavigationView* _navigationView;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _addButton;
	NoteObject* _note;
	int _noteIndexToDisplayAfterDelete;
	NoteContentLayer* _contentLayer;
	BOOL _dontTransitionOut;
	BOOL _showKeyboardAfterTransition;
	BOOL _delayingSetContent;
	BOOL _rotating;
	unsigned _noteNeedsSaving : 1;
	unsigned _emailDeliveryFailed : 1;
	unsigned _didSetContentFromNote : 1;
	float _yOffset;
	NSString* _emailErrorTitle;
	NSString* _emailErrorDescription;
	NSTimer* _autosaveTimer;
	UIActionSheet* _alertSheet;
	BOOL _restoreAlertSheet;
	NoteStoreObject* _noteStore;
	UILabel* _customTitleView;
	BOOL _isAutosaving;
	BOOL _isRunningDeleteAnimation;
	BOOL _useCachedNoteContentIfPossible;
	NSString* _noteContentBeforeInvalidation;
	BOOL _noteContentWasPlainTextBeforeInvalidation;
	BOOL _printPanelShowing;
	BOOL _restorePrintPanel;
	UIPopoverController* _sharePopover;
	UISnapshotView* _snapshotView;
}
@property(assign) int noteIndexToDisplayAfterDelete;
@property(assign) BOOL isRunningDeleteAnimation;
@property(assign) BOOL isAutosaving;
@property(assign, nonatomic) BOOL showKeyboardAfterTransition;
@property(assign) id<NotesListAuthority> delegate;
+(void)setIsTransitioning:(BOOL)transitioning;
+(BOOL)isFading;
-(void).cxx_destruct;
-(id)getCurrentContext;
-(BOOL)allowContextProvider:(id)provider;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)controllerIsRotating;
-(void)resetViewFrame;
-(id)archivedConfiguration;
-(void)applyArchivedConfiguration:(id)configuration;
-(id)initWithArchivedConfiguration:(id)archivedConfiguration;
-(void)scrollView:(id)view setContentOffset:(CGPoint)offset;
-(void)noteContentLayer:(id)layer setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)noteContentLayerContentDidChange:(id)noteContentLayerContent;
-(void)noteContentLayer:(id)layer containsCJK:(BOOL)cjk;
-(void)_noteContentLayerDidChange;
-(BOOL)noteNeedsSaving;
-(void)trashClosed:(id)closed;
-(void)suckAnimationFinished;
-(void)trashOpened:(id)opened;
-(void)_suckNote;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(BOOL)trashIsOpen;
-(BOOL)isShowingDeleteConfirmation;
-(void)deleteButtonClicked;
-(void)enableUserInteraction;
-(void)suckAnimationDidStop:(id)suckAnimation finished:(id)finished context:(void*)context;
-(void)animationDidStop:(id)animation finished:(BOOL)finished context:(void*)context;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)shareButtonClicked;
-(void)rightButtonClicked;
-(void)leftButtonClicked;
-(void)createNote;
-(BOOL)willTransitionOut;
-(void)resetFontOnResume;
-(void)accessibilityLargeTextDidChange;
-(void)scrollToTop;
-(void)notesButtonClicked:(id)clicked;
-(void)doneButtonClicked:(id)clicked;
-(void)addButtonClicked:(id)clicked;
-(void)_updateRightNavigationButtonAnimated:(BOOL)animated;
-(void)_updateLeftNavigationButtonAnimated:(BOOL)animated;
-(void)viewWillDisappear:(BOOL)view;
-(void)transitionAnimationFinished:(id)finished;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(BOOL)noteContainsNonWhitespaceCharacters;
-(void)setNote:(id)note;
-(void)subvertWithNote:(id)note;
-(void)setContentFromNote;
-(BOOL)restoreObjectsAfterInvalidation:(id)invalidation;
-(id)prepareObjectsForInvalidation;
-(void)dataDetectorsDidFinishURLification:(id)dataDetectors;
-(void)crossfade;
-(void)snapshot;
-(void)_presentWithContext:(id)context;
-(id)note;
-(void)saveNote;
-(void)discardChanges;
-(void)setNoteStore:(id)store;
-(void)prepareForDefaultImageSnapshot;
-(void)updateDateLabels;
-(void)_updateDate;
-(void)_updateTitle;
-(void)_searchResultsUpdated:(id)updated;
-(void)updateBottomNavigationButtons;
-(void)updateBottomActionButtons;
-(void)significantTimeChange;
-(void)dealloc;
-(id)contextManager;
-(void)_autosaveTimerFired:(id)fired;
-(void)_resetAutosaveTimer;
-(void)_invalidateAutosaveTimer;
@end

