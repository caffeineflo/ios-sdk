//
//  MarketoConfig.h
//  Marketo
//
//  Created by Rohit on 19/11/15.
//  Copyright © 2015 Zubhium. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MKTSecuritySignature : NSObject <NSCoding>
-(id)initWithAccessKey:(NSString *)accessKey signature:(NSString *)signature timestamp:(NSString *)timestamp  email:(NSString *)email;


- (NSString *)getAccessKey;
- (NSString *)getSignature;
- (NSString *)getTimeStamp;
- (NSString *)getEmail;
- (BOOL)isValid;

@end
