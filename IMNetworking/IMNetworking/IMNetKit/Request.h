//
//  IMRequest.h
//  IMNetKit
//
//  Created by liqian on 15/11/10.
//  Copyright © 2015年 LQ. All rights reserved.
//
/**
 *  请求发起类
 *
 *  @param id
 *
 *  @return
 */
#import "Networking.h"
#import "ServiceError.h"

//结果块
typedef void (^callBackResponse)(id);


@interface Request : Networking

-(void)send:(callBackResponse)successCallback;

-(void) send:(callBackResponse)successCallback failCallback:(callBackResponse) failCallback;

-(void) setHeaderValue:(NSString*) value forName:(NSString*) name;

+(instancetype) create:(NSString*) serviceMethodName parameterValues:(NSArray*) parameterValues;

@end
