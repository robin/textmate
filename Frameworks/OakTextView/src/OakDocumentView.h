#import "OakTextView.h"
#import <oak/debug.h>

@class OakDocument;
@class OakTabBarView;

PUBLIC @interface OakDocumentView : NSView
@property (nonatomic, readonly) OakTextView* textView;
@property (nonatomic) OakTabBarView* tabBarView;
@property (nonatomic) NSArray<OakDocument*>* documents;
@property (nonatomic) OakDocument* document;
@property (nonatomic) BOOL hideStatusBar;
- (IBAction)toggleLineNumbers:(id)sender;
- (IBAction)takeThemeUUIDFrom:(id)sender;

- (void)setThemeWithUUID:(NSString*)themeUUID;

- (void)addAuxiliaryView:(NSView*)aView atEdge:(NSRectEdge)anEdge;
- (void)removeAuxiliaryView:(NSView*)aView;

- (IBAction)showSymbolChooser:(id)sender;
@end
