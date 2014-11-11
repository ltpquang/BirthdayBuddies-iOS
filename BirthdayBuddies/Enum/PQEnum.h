//
//  PQEnum.h
//  BirthdayBuddies
//
//  Created by Le Thai Phuc Quang on 11/11/14.
//  Copyright (c) 2014 Le Thai Phuc Quang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, Zodiac)
{
    Aries, //Mar 21 - Apr 19
    Taurus, //Apr 20 - May 20
    Gemini, //May 21 - June 20
    Cancer, //Jun 21 - Jul 22
    Leo, //Jul 23 - Aug 22
    Virgo, //Aug 23 - Sep 22
    Libra, //Sep 23 - Oct 22
    Scorpio, //Oct 23 - Nov 21
    Sagittarius, //Nov 22 - Dec 21
    Capricorn, //Dec 22 - Jan 19
    Aquarius, //Jan 20 - Feb 18
    Pisces //Feb 19 - Mar 20
};

@interface PQEnum : NSObject

@end
