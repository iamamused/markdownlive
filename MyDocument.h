/*******************************************************************************
	MyDocument.h - <http://github.com/rentzsch/MarkdownLive>
		Copyright (c) 2006-2010 Jonathan 'Wolf' Rentzsch: <http://rentzsch.com>
		Some rights reserved: <http://opensource.org/licenses/mit-license.php>

	***************************************************************************/

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class GitCommitMessageSheet;

@interface MyDocument : NSDocument {
	IBOutlet	NSTextView					*markdownSourceTextView;
	IBOutlet	WebView						*htmlPreviewWebView;
	IBOutlet	NSToolbar					*toolbar;
	IBOutlet	NSToolbarItem				*commitButton;
	IBOutlet	GitCommitMessageSheet		*gitCommitMessageSheet;

	
				NSMutableAttributedString	*markdownSource;
	
				NSTimeInterval				whenToUpdatePreview;
				NSTimer						*htmlPreviewTimer;
				
				BOOL						hasSavedOrigin;
				NSPoint						savedOrigin;
				BOOL						savedAtBottom;
	
				NSTask						*commit;
				NSPipe						*gitOut;
	
				
}

- (IBAction)copyGeneratedHTMLAction:(id)sender;

- (IBAction)commitChanges:(id)sender;
- (IBAction)doCommit:(id)sender;

@end
