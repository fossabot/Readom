// Generated by IB v1.0.1 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CFNetwork/CFNetwork.h>
#import <CoreAudio/CoreAudio.h>
#import <CoreData/CoreData.h>
#import <ImageIO/ImageIO.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <Security/Security.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <SafariServices/SafariServices.h>

@interface AppDelegate: UIViewController
@end

@interface StoryScreen: UICollectionViewController
-(IBAction) on_load;
-(IBAction) numberOfSectionsInCollectionView:(id) view;
-(IBAction) set_data;
-(IBAction) switch_topic;
-(IBAction) current_topic;
-(IBAction) topics;

@end

@interface Readom: NSObject
@end

@interface UIViewStyler: NSObject
@end

@interface StandardAppearance: NSObject
@end

@interface ApplicationStylesheet: RubyMotionQuery::Stylesheet
-(IBAction) application_setup;
-(IBAction) standard_button:(id) st;
-(IBAction) standard_label:(id) st;
-(IBAction) rounded_image:(id) st;

@end

@interface StoryScreenStylesheet: ApplicationStylesheet
-(IBAction) setup;
-(IBAction) collection_view:(id) st;
-(IBAction) switch_topic_btn:(id) st;
-(IBAction) refresh_btn:(id) st;

@end

@interface StoryCell: UICollectionViewCell
-(IBAction) on_load;
-(IBAction) set:(id) item;

@end

