//
//  RootViewController.h
//  PageBased_iOS
//
//  Created by Presley Cannady on 1/11/15.
//  Copyright (c) 2015 Universal Secure Registry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

