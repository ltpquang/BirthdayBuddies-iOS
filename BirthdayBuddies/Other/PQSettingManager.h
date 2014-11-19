//
//  PQSettingManager.h
//  BirthdayBuddies
//
//  Created by Le Thai Phuc Quang on 11/12/14.
//  Copyright (c) 2014 Le Thai Phuc Quang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PQSettingManager : NSObject

+ (void)SaveValue:(id)data forKey:(NSString *)key;
+ (id)LoadValueOfKey:(NSString *)key;

@end
