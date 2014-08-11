//
//  MUMatchViewController.h
//  MatchedUp
//
//  Created by Allan Jones on 8/1/14.
//  Copyright (c) 2014 Allan Jones. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol MUMatchViewControllerDelegate <NSObject>

- (void)presentMatchesViewController;

@end

@interface MUMatchViewController : UIViewController

@property (strong, nonatomic) UIImage *matchedUserImage;
@property (weak) id <MUMatchViewControllerDelegate> delegate;


@end
