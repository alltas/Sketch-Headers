//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSSharingServicePickerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "SMKMirrorServerControllerDelegate.h"

@class NSButton, NSLayoutConstraint, NSString, NSTableView, NSTextField, SMKMirrorServerController;

@interface MSMirrorViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, SMKMirrorServerControllerDelegate, NSSharingServicePickerDelegate>
{
    SMKMirrorServerController *_connectionController;
    NSTableView *_tableView;
    NSButton *_visitLocalWebsiteButton;
    NSLayoutConstraint *_emptyLabelBottomConstraint;
    NSTextField *_emptyLabel;
    NSLayoutConstraint *_webButtonHeightConstraint;
    NSLayoutConstraint *_tableViewHeightConstraint;
}

+ (id)storyboardIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *webButtonHeightConstraint; // @synthesize webButtonHeightConstraint=_webButtonHeightConstraint;
@property(retain, nonatomic) NSTextField *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSLayoutConstraint *emptyLabelBottomConstraint; // @synthesize emptyLabelBottomConstraint=_emptyLabelBottomConstraint;
@property(retain, nonatomic) NSButton *visitLocalWebsiteButton; // @synthesize visitLocalWebsiteButton=_visitLocalWebsiteButton;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SMKMirrorServerController *connectionController; // @synthesize connectionController=_connectionController;
- (void).cxx_destruct;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)openMirrorWebsite:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)reloadData;
- (void)mirrorServerController:(id)arg1 didChangeWebURL:(id)arg2;
- (void)mirrorServerController:(id)arg1 didChangeClients:(id)arg2;
- (void)reloadWebURL;
- (void)openLocalWebsite:(id)arg1;
- (void)viewWillAppear;
- (struct CGSize)preferredContentSize;
- (void)updateViewConstraints;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

