//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSAddAsLibraryAction : MSDocumentAction
{
}

- (void)addAsLibrary;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)saveAndAddLibrary;
- (void)askToSaveModificationsAndAddLibrary;
- (void)doPerformAction:(id)arg1;
- (void)addAsLibraryAction:(id)arg1;
- (BOOL)validate;

@end

