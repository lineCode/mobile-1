// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttIPListRsp.h"

@implementation MttIPListRsp

@synthesize JV2_PROP_EX(o,0,vQProxyList,VONSString);
@synthesize JV2_PROP_EX(o,1,vProxyList,VONSString);
@synthesize JV2_PROP_EX(o,2,vRelayList,VONSString);

+ (void)initialize
{
    if (self == [MttIPListRsp class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(vQProxyList) = nil;
    JV2_PROP(vProxyList) = nil;
    JV2_PROP(vRelayList) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.IPListRsp";
}

@end