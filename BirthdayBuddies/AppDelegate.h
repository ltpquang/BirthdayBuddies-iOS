//
//  AppDelegate.h
//  BirthdayBuddies
//
//  Created by Le Thai Phuc Quang on 10/30/14.
//  Copyright (c) 2014 Le Thai Phuc Quang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
- (void)sessionStateChanged:(FBSession *)session state:(FBSessionState)state error:(NSError *)error;

@end

