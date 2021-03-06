//
//  Photo.h
//  TripGo
//
//  Created by Y. Liu on 5/5/14.
//  Copyright (c) 2014 Y. Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Photo : NSManagedObject

@property (nonatomic, retain) NSString * addressFull;
@property (nonatomic, retain) NSString * addressRegions;
@property (nonatomic, retain) NSString * assetURL;
@property (nonatomic, retain) NSNumber * gpsCourse;
@property (nonatomic, retain) NSNumber * gpsLatitude;
@property (nonatomic, retain) NSNumber * gpsLongitude;
@property (nonatomic, retain) NSNumber * gpsSpeed;
@property (nonatomic, retain) NSDate * locationTimeStamp;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSString * tag;
@property (nonatomic, retain) NSDate * takeDateUTC;
@property (nonatomic, retain) NSString * takeTimeZone;
@property (nonatomic, retain) NSNumber * timeZoneOffsetInHour;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * weatherCategory;
@property (nonatomic, retain) NSNumber * weatherClouds;
@property (nonatomic, retain) NSString * weatherDescription;
@property (nonatomic, retain) NSNumber * weatherHumidity;
@property (nonatomic, retain) NSNumber * weatherLatitude;
@property (nonatomic, retain) NSNumber * weatherLongitude;
@property (nonatomic, retain) NSNumber * weatherTemperature;
@property (nonatomic, retain) NSNumber * weatherWindSpeed;
@property (nonatomic, retain) NSString * audioURL;

@end
