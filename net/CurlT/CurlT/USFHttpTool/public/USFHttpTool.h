//
//  USFHttpTool.h
//  CurlT
//
//  Created by jeffery on 16/3/9.
//  Copyright © 2016年 jeffery. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface USFHttpTool : NSObject


- (NSInteger) HttpGet:(NSString *)nsurl result:(NSString **)nsresult out_errstr:(NSString **)nsout_errstr;

@end
