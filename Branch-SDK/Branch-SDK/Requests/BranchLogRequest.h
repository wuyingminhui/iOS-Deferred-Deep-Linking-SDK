//
//  BranchLogRequest.h
//  Branch-TestBed
//
//  Created by Graham Mueller on 6/3/15.
//  Copyright (c) 2015 Branch Metrics. All rights reserved.
//

#import "BNCDebugRequest.h"

@interface BranchLogRequest : BNCDebugRequest

- (id)initWithLog:(NSString *)log;

@end
