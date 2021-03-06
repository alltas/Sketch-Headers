//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSLocalDataSupplierDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MSDataSupplierManager : NSObject <MSLocalDataSupplierDelegate>
{
    id <MSDataSupplierManagerDelegate> _delegate;
    NSString *_objectID;
    NSMutableArray *_pluginData;
    NSMutableArray *_localData;
    NSMutableArray *_builtinData;
    NSMutableDictionary *_replyContexts;
}

+ (BOOL)validLocalDataFileSystemURL:(id)arg1;
+ (id)URLForBuiltinDataNamed:(id)arg1;
+ (id)builtinDataFolder;
+ (id)sketchBuiltinLocalData;
+ (id)makeObjectID;
@property(retain, nonatomic) NSMutableDictionary *replyContexts; // @synthesize replyContexts=_replyContexts;
@property(retain, nonatomic) NSMutableArray *builtinData; // @synthesize builtinData=_builtinData;
@property(retain, nonatomic) NSMutableArray *localData; // @synthesize localData=_localData;
@property(retain, nonatomic) NSMutableArray *pluginData; // @synthesize pluginData=_pluginData;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) __weak id <MSDataSupplierManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)localDataForDefaultsKey:(id)arg1;
- (void)postLocalDataSupplierChangeNotification;
- (BOOL)isBuiltinDataSupplier:(id)arg1;
- (void)locaDataSupplierDataChanged:(id)arg1;
- (void)removeDataSupplier:(id)arg1;
- (void)loadBuiltinData;
- (void)loadLocalData;
- (void)addLocalData:(id)arg1;
- (void)resetSketchBuiltinData;
@property(readonly, nonatomic) NSArray *localDataSuppliers;
@property(readonly, nonatomic) NSArray *dataSuppliers;
- (void)supplyData:(id)arg1 forKey:(id)arg2;
- (void)requestDataFromPluginDataSupplier:(id)arg1 numberOfItems:(unsigned long long)arg2 applierBlock:(CDUnknownBlockType)arg3;
- (void)deregisterDataSuppliersForPluginWithIdentifier:(id)arg1;
- (void)registerPluginDataSupplier:(id)arg1 withName:(id)arg2 dataType:(id)arg3 pluginIdentifier:(id)arg4 commandIdentifier:(id)arg5;
- (void)setPluginDataReplyContext:(id)arg1 forDataKey:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

