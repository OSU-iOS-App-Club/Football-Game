//
//  AppDelegate.h
//  ThrowABall
//
//  Created by MingChieh Chang on 7/27/11.
//  Copyright Oregon State University 2011. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GameManager.h"

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
