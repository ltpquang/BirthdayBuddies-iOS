//
//  PQSettingManager.m
//  BirthdayBuddies
//
//  Created by Le Thai Phuc Quang on 11/12/14.
//  Copyright (c) 2014 Le Thai Phuc Quang. All rights reserved.
//

#import "PQSettingManager.h"

@implementation PQSettingManager

//+ (void)writeArrayWithCustomObjToUserDefaults:(NSString *)keyName withArray:(NSMutableArray *)myArray
//{
//    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
//    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:myArray];
//    [defaults setObject:data forKey:keyName];
//    [defaults synchronize];
//}
//
//+ (NSArray *)readArrayWithCustomObjFromUserDefaults:(NSString*)keyName
//{
//    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
//    NSData *data = [defaults objectForKey:keyName];
//    NSArray *myArray = [NSKeyedUnarchiver unarchiveObjectWithData:data];
//    [defaults synchronize];
//    return myArray;
//}

+ (void)SaveValue:(id)data forKey:(NSString *)key
{
    [[NSUserDefaults standardUserDefaults] setObject:data forKey:key];
    
}

+ (id)LoadValueOfKey:(NSString *)key
{
    id result = [[NSUserDefaults standardUserDefaults] objectForKey:key];
    return result;
}

@end
