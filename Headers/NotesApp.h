/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIApplicationDelegate.h"
#import "MobileNotes-Structs.h"

@class UINavigationController, NoteContext, NSMutableSet, NotesListController, NotesAccountsController, NotesDisplayController, UIWindow, NotesMainViewController;

__attribute__((visibility("hidden")))
@interface NotesApp : XXUnknownSuperclass <UIApplicationDelegate> {
	UIWindow* _window;
	NotesMainViewController* _mainViewController;
	UINavigationController* _navigationController;
	NoteContext* _noteContext;
	unsigned _isLaunching : 1;
	unsigned _isTransitioningToNotesList : 1;
	unsigned _ignoreSelectionChange : 1;
	unsigned _isBackgrounding : 1;
	unsigned _shouldHandleExternalChangeOnResume : 1;
	unsigned _refreshIsPendingForStoresList : 1;
	unsigned _refreshIsPendingForAllNotes : 1;
	NSMutableSet* _collectionIDsPendingRefresh;
}
@property(retain, nonatomic) UIWindow* window;
@property(readonly, assign) NotesMainViewController* mainViewController;
@property(readonly, assign) UINavigationController* navigationController;
@property(readonly, assign, nonatomic) NotesAccountsController* accountsController;
@property(readonly, assign, nonatomic) NotesListController* listController;
@property(readonly, assign, nonatomic) NotesDisplayController* displayController;
-(void).cxx_destruct;
-(void)_cancelAllPendingRefreshes;
-(void)refreshOrphanedAccountsIfNeeded;
-(void)_performRefreshIfNeededForOrphanedAccounts;
-(void)refreshStoresListIfNeeded;
-(void)_markRefreshAsPendingForStoresList;
-(BOOL)_refreshIsPendingForStoresList;
-(void)_performRefreshIfNeededForStoresList;
-(void)_unmarkRefreshAsPendingForStoresList;
-(void)refreshNotesIfNeededForCollection:(id)collection;
-(void)_markRefreshAsPendingForCollectionWithId:(id)anId;
-(BOOL)_refreshIsPendingForCollectionWithId:(id)anId;
-(void)_performRefreshIfNeededForCollectionWithId:(id)anId;
-(void)_unmarkRefreshAsPendingForCollectionWithId:(id)anId;
-(void)resetViewFrames;
-(id)noteAtIndex:(unsigned)index;
-(void)displayNote:(id)note highlightOnly:(BOOL)only;
-(void)_saveState;
-(id)contentView;
-(void)displayNotesList:(BOOL)list;
-(void)displayNotesList:(BOOL)list animated:(BOOL)animated;
-(void)prepareForDefaultImageSnapshot;
-(void)_displayNotesList:(id)list;
-(void)notesDisplayController:(id)controller didDisplayNote:(id)note;
-(BOOL)isIgnoringSelectionChange;
-(void)ignoreSelectionChange:(BOOL)change;
-(id)noteContext;
-(BOOL)isLaunching;
-(void)applicationSignificantTimeChange:(id)change;
-(void)timeZoneChanged:(id)changed;
-(void)localeChanged:(id)changed;
-(void)refreshDatesAndTimes;
-(void)applicationWillSuspendForEventsOnly;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)addNote;
-(void)updateViewsForDisplayController;
-(void)updateViewsForListController;
-(void)configureNavigationBar;
-(void)notesChangedExternally:(id)externally;
-(void)dealloc;
-(BOOL)openURL:(id)url;
-(BOOL)application:(id)application handleOpenURL:(id)url;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)applicationWillTerminate;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)addOrRemoveAccountsController;
-(void)didChangeOrientation:(id)orientation;
-(void)didShowList;
-(void)didShowNote;
-(void)startShowNoteTest:(id)test;
-(void)_showNote;
-(void)_showNoteList;
-(void)startScrollListTest:(id)test;
-(void)failedTest:(id)test;
-(void)finishedTest:(id)test extraResults:(id)results;
-(BOOL)runTest:(id)test options:(id)options;
@end

