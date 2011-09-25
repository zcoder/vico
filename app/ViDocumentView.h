#import "ViTextView.h"
#import "ViDocument.h"
#import "ViTabController.h"

// XXX: actually a view _controller_
@interface ViDocumentView : NSObject <ViViewController>
{
	IBOutlet NSView		*_view;
	IBOutlet NSView		*_innerView;
	IBOutlet NSScrollView	*_scrollView;
	ViDocument		*_document;
	ViTabController		*_tabController;
}

@property(nonatomic,readonly) NSView *view;
@property(nonatomic,readonly) NSView *innerView;
@property(nonatomic,readwrite,assign) ViTabController *tabController;

- (ViDocumentView *)initWithDocument:(ViDocument *)aDocument;
- (ViTextView *)textView;
- (void)replaceTextView:(ViTextView *)newTextView;
- (NSString *)title;

@end
