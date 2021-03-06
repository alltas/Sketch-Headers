//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SCKShare, SCKShareUploadOperation;

@protocol SCKShareUploadDataSource <NSObject>
- (void)shareUploadOperation:(SCKShareUploadOperation *)arg1 exportDocumentWithHandler:(void (^)(NSURL *))arg2;
- (void)shareUploadOperation:(SCKShareUploadOperation *)arg1 willStartUploadingShare:(SCKShare *)arg2;
- (NSURL *)shareUploadOperation:(SCKShareUploadOperation *)arg1 fileURLForItemWithHash:(NSString *)arg2;
@end

