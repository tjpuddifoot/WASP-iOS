//
//  MasterViewController.h
//  WASP iOS
//
//  Created by Tom Puddifoot on 27/12/2013.
//  Copyright (c) 2013 Tom Puddifoot. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
