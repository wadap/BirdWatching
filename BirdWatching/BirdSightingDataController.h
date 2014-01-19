//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by shuichi.wada on 2014/01/19.
//  Copyright (c) 2014年 shuichi.wada. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

-(NSUInteger)countOfList;
-(BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
-(void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
