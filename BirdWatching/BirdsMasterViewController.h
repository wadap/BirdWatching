//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by shuichi.wada on 2014/01/19.
//  Copyright (c) 2014年 shuichi.wada. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)canel:(UIStoryboardSegue *)segue;
@end
