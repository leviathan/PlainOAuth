//
//  4sqController.h
//  PlainOAuth
//
//  Created by Jaanus Kase on 27.11.11.
//  Copyright (c) 2011 Intuit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OAuthLoginPopupDelegate.h"

@class OAuth, FoursquareLoginPopup;

@interface FoursquareController : UIViewController <oAuthLoginPopupDelegate> {
    FoursquareLoginPopup *loginPopup;
}
@property (strong, nonatomic) IBOutlet UIButton *seeCheckinsButton;
@property (strong, nonatomic) IBOutlet UITextView *checkinsField;
- (IBAction)didTapSeeCheckins:(id)sender;

@property (strong, nonatomic) OAuth *oAuth4sq;

@end
