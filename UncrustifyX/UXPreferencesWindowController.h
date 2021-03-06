//
//  UXPreferencesWindowController.h
//  UncrustifyX
//
//  Created by Ryan Maxwell on 20/10/12.
//  Copyright (c) 2012 Ryan Maxwell. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface UXPreferencesWindowController : NSWindowController

@property (weak, nonatomic) IBOutlet NSTextField *uncrustifyPluginInfoLabel;
@property (weak, nonatomic) IBOutlet NSTextField *uncrustifyPluginVersionLabel;

- (IBAction)choosePressed:(id)sender;
- (IBAction)installXcodePluginPressed:(id)sender;

@end
