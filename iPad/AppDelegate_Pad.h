//
//  AppDelegate_Pad.h
//  Plain2
//
//  Created by Jaanus Kase on 03.05.10.
//  Copyright 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Master;

@interface AppDelegate_Pad : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UINavigationController *nav;
    Master *root;

}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@end

