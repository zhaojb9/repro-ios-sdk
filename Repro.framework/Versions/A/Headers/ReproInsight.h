//
//  ReproInsight.h
//  ReproInsith
//
//  Created by akira on 1/27/14.
//  Copyright (c) 2014 akira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReproInsight : NSObject

@property (nonatomic, retain, readwrite) NSString *token;
@property (nonatomic, assign, readonly) NSUInteger status;

+ (void)setupWithToken:(NSString *)token;
+ (id)sharedInstance;

// control recorder
- (void)configureWithToken:(NSString *)token didFailWithError:(NSError **)error;
- (void)startRecordingDidFailWithError:(NSError**)error;
- (void)stopRecordingDidFailWithError:(NSError**)error;

@end