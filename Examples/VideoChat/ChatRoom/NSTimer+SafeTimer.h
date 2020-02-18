//
//  NSTimer+SafeTimer.h
//  VideoChat
//
//  Created by Lee on 18/03/2017.
//  Copyright © 2020 StraaS.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (SafeTimer)
+ (NSTimer*)safeScheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                         block:(void(^)(void))block
                                       repeats:(BOOL)repeats;
@end
