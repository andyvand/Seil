// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-
#import <Cocoa/Cocoa.h>
#import "XMLTreeWrapper.h"

@interface OutlineView_mixed : NSObject
{
  IBOutlet id _outlineView;
}

- (IBAction) intelligentExpand:(id)sender;

@end