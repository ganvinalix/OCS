//
//  OCSDynamicProtocolTool.h
//  OCS
//
//  Created by Xummer on 2017/5/31.
//  Copyright © 2017年 Xummer. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OCSProtocolInfo;
@interface OCSDynamicProtocolTool : NSObject

+ (BOOL)setUpDynamicProtocol:(OCSProtocolInfo *)protocolInfo;

@end
