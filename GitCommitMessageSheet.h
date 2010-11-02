//
//  GitCommentSheet.h
//  MarkdownLive
//
//  Created by Jeffrey Sambells on 10-10-28.
//  Copyright 2010 We-Create Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// http://cocoadevcentral.com/articles/000014.php

@interface GitCommitMessageSheet : NSWindow {
	IBOutlet NSButton *commit;
	IBOutlet NSButton *cancel;
	IBOutlet NSTextField *message;
}

@property (nonatomic, retain) NSTextField *message; 

@end
