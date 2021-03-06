//
//  FxStdTestAppForMacAppDelegate.h
//  FxStdTestAppForMac
//
//  Created by Benjawan Tanarattanakorn on 9/26/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FileDescriptorNotifier.h"


@interface FxStdTestAppForMacAppDelegate : NSObject <NSApplicationDelegate, FileDescriptorDelegate> {
    NSWindow *window;
    FileDescriptorNotifier *fdn;
}

@property (assign) IBOutlet NSWindow *window;

@end
