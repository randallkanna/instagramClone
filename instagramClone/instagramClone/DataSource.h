//
//  DataSource.h
//  instagramClone
//
//  Created by RandallKanna on 1/23/16.
//  Copyright © 2016 RandallKanna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
