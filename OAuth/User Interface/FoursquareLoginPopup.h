//
//  FoursquareLoginPopup.h
//  PlainOAuth
//
//  Created by Jaanus Kase on 27.11.11.
//  Copyright (c) 2011 Intuit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OAuthLoginPopupDelegate.h"

@class OAuth;

@interface FoursquareLoginPopup : UIViewController <UIWebViewDelegate> {
    UIWebView *webView;
}

@property (unsafe_unretained) id<oAuthLoginPopupDelegate> delegate;
@property (strong, nonatomic) OAuth *oAuth;

@end
