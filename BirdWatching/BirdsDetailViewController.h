//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by shuichi.wada on 2014/01/19.
//  Copyright (c) 2014年 shuichi.wada. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface BirdsDetailViewController : UITableViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
