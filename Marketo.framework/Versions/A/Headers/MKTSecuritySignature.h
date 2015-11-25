//
// MKTSecuritySignature
// Marketo
// Marketo Mobile Engagement framework
//
// Copyright (c) 2007-2015, Marketo, Inc. All rights reserved.

/*!
 * @header MKTSecuritySignature
 * @discussion The MarketoConfig class is used for secure communication.
 * @updated 2015-04-29
 */

#import <Foundation/Foundation.h>

@interface MKTSecuritySignature : NSObject

-(id)initWithAccessKey:(NSString *)accessKey signature:(NSString *)signature timestamp:(NSString *)timestamp  email:(NSString *)email;


- (NSString *)getAccessKey;
- (NSString *)getSignature;
- (NSString *)getTimeStamp;
- (NSString *)getEmail;
- (BOOL)isValid;

@end
