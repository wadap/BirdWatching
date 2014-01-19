//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by shuichi.wada on 2014/01/19.
//  Copyright (c) 2014年 shuichi.wada. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;
@end
