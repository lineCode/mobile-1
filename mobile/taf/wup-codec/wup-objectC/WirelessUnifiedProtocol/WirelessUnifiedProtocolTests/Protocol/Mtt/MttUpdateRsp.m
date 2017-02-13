// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttUpdateRsp.h"

@implementation MttUpdateRsp

@synthesize JV2_PROP_NM(r,0,iStatus);
@synthesize JV2_PROP_NM(r,1,sURL);
@synthesize JV2_PROP_NM(r,2,sText);
@synthesize JV2_PROP_NM(o,3,sMark);
@synthesize JV2_PROP_NM(o,4,iFreq);

+ (void)initialize
{
    if (self == [MttUpdateRsp class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sURL) = DefaultJceString;
        JV2_PROP(sText) = DefaultJceString;
        JV2_PROP(sMark) = DefaultJceString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sURL) = nil;
    JV2_PROP(sText) = nil;
    JV2_PROP(sMark) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.UpdateRsp";
}

@end