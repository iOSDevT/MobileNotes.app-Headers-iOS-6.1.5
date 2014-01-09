/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobileNotes-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "NotesListAuthority.h"
#import "UISearchDisplayDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "NotesSideControllerPopoverMethods.h"
#import "ResumableViewController.h"

@class NSManagedObjectID, NSURL, NoteObject, NotesSearchTableView, NotesListTableView, UILabel, UIView, UIBarButtonItem, UISearchDisplayController, NSString, NSMutableArray, NSFetchedResultsController, NoteCollectionObject;

__attribute__((visibility("hidden")))
@interface NotesListController : ResumableViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, NotesListAuthority, UISearchDisplayDelegate, NSFetchedResultsControllerDelegate, UIPopoverControllerDelegate, NotesSideControllerPopoverMethods> {
	UIView* _backgroundView;
	NotesListTableView* _table;
	UIBarButtonItem* _addButton;
	UIBarButtonItem* _cancelButton;
	UILabel* _titleView;
	NotesSearchTableView* _searchTableView;
	UISearchDisplayController* _searchController;
	float _yOffset;
	NSString* _searching;
	void* _searchContext;
	NSMutableArray* _searchItems;
	NSMutableArray* _tempSearchItems;
	NSFetchedResultsController* _listFRC;
	unsigned _ignoringTableReloads;
	NoteCollectionObject* _collection;
	NSManagedObjectID* _collectionID;
	NSString* _placeholderNoteTitle;
	NSURL* _previousSelectedNoteID;
	BOOL _ignoreKeyboardNotifications;
	NSMutableArray* _animationQueue;
	BOOL _isAnimating;
	int _delayedDirection;
	NoteObject* _delayedNote;
	NoteObject* _editingNote;
	BOOL _dontAnimateSelectionChange;
	BOOL _ignoreNextNotesChangedNotification;
}
@property(assign) BOOL dontAnimateSelectionChange;
@property(retain) NSURL* previousSelectedNoteID;
-(void).cxx_destruct;
-(id)archivedConfiguration;
-(void)applyArchivedConfiguration:(id)configuration;
-(void)refreshDatesAndTimes;
-(void)noteEditingStateChanged;
-(void)noteContentChanged:(id)changed;
-(void)noteModified:(id)modified newTitle:(id)title;
-(void)modifyPlaceholderNote:(id)note;
-(void)removePlaceholderNote;
-(void)addPlaceholderNote;
-(id)noteWithId:(id)anId;
-(void)accessibilityLargeTextDidChange;
-(unsigned)countOfItems;
-(void)notesAddedToIndex:(id)index;
-(void)notesDidChange:(id)notes;
-(void)notesChangedExternally:(id)externally;
-(void)controllerDidChangeContent:(id)controller;
-(void)reloadTables;
-(void)reloadSearchResults;
-(void)reloadSearchResultsAfterIndexing;
-(void)reloadSearchResultsFromIndexer:(BOOL)indexer;
-(void)_ignoreDatabaseChanges:(BOOL)changes;
-(void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)_resetSearchWithString:(id)string;
-(void)_resetSearchWithString:(id)string requestedByIndexer:(BOOL)indexer;
-(Class)_resultsTableViewClass;
-(void)windowWillRotate:(id)window;
-(void)restoreSearch;
-(void)endEditingOnController:(id)controller;
-(float)tableViewSpacingForExtraSeparators:(id)extraSeparators;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view heightForRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)_itemArrayForTable:(id)table;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
-(void)removeFromPopover;
-(void)willShowInPopover;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(id)navigationController;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)cancelButtonClicked:(id)clicked;
-(void)addButtonClicked:(id)clicked;
-(void)queryForNewItem;
-(void)_createNewNote;
-(void)handleKeyboardShow:(id)show;
-(void)handleKeyboardHide:(id)hide;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)directionButtonClicked:(int)clicked forNote:(id)note;
-(void)delayedDirectionButtonClicked;
-(void)shouldEnableLeftButton:(BOOL*)button rightButton:(BOOL*)button2 forNote:(id)note;
-(id)currentList;
-(void)displayObjectAtIndex:(unsigned)index fromList:(id)list animated:(BOOL)animated;
-(void)displayNote:(id)note;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(id)storeForDisplayController;
-(id)noteAtIndex:(unsigned)index;
-(unsigned)indexOfNote:(id)note inList:(id)list;
-(id)selectedNote;
-(void)setSelectedNote:(id)note;
-(void)updateSelectionView;
-(void)hideSelectionView;
-(void)performSetup;
-(void)performSearch;
-(void)performSearchStartedWhileIndexing:(id)indexing;
-(void)removeSearchResult:(id)result;
-(id)collection;
-(void)setCollection:(id)collection;
-(void)_cancelAllCallbacks;
-(void)_delayedSearchRelease;
-(void)updateTitle;
-(void)updateSearchAfterResumeForNote:(id)note;
-(void)resumeAfterSuspend;
-(void)prepareForSuspend;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)loadView;
-(void)prepareForDefaultImageSnapshot;
-(void)setup;
-(void)dealloc;
-(id)initWithArchivedConfiguration:(id)archivedConfiguration;
-(id)init;
-(id)table;
@end

