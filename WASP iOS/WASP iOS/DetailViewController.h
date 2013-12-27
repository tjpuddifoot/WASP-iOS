//
//  DetailViewController.h
//  WASP iOS
//
//  Created by Tom Puddifoot on 27/12/2013.
//  Copyright (c) 2013 Tom Puddifoot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
