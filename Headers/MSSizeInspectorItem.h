//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSTwoTextFieldInspectorItem.h"

@interface MSSizeInspectorItem : MSTwoTextFieldInspectorItem
{
}

- (void)updateDisplayedValues;
- (double)layerSizeOnAxis:(unsigned long long)arg1;
- (long long)anchorFromString:(id)arg1 axis:(unsigned long long)arg2;
- (void)setLayerSizeFromString:(id)arg1 onAxis:(unsigned long long)arg2;
- (void)interTextFieldButtonAction:(id)arg1;
- (void)textField2Action:(id)arg1;
- (void)textField1Action:(id)arg1;
- (void)setupAccessoryButton;
- (void)updateUI;
@property(readonly, nonatomic) unsigned long long accessory;
- (BOOL)allowFloatValues;
- (void)setLayers:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

