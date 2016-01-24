//
//  Comment.h
//  instagramClone
//
//  Created by RandallKanna on 1/23/16.
//  Copyright © 2016 RandallKanna. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
