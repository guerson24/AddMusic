
#import <UIKit/UIKit.h>

@class MainViewController;

@interface AddMusicAppDelegate : NSObject <UIApplicationDelegate> {

    UIWindow					*window;
	IBOutlet MainViewController	*mainViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow				*window;
@property (nonatomic, retain) IBOutlet MainViewController	*mainViewController;

@end

