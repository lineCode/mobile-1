// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface MttBrokerContentInfo : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(wVersion,setWVersion:)) JceInt16 JV2_PROP_NM(r,0,wVersion);
@property (nonatomic, assign, JV2_PROP_GS_V2(cZipType,setCZipType:)) JceInt8 JV2_PROP_NM(r,1,cZipType);
@property (nonatomic, assign, JV2_PROP_GS_V2(cContentType,setCContentType:)) JceInt8 JV2_PROP_NM(r,2,cContentType);
@property (nonatomic, assign, JV2_PROP_GS_V2(wStatusCode,setWStatusCode:)) JceInt16 JV2_PROP_NM(r,3,wStatusCode);
@property (nonatomic, retain, JV2_PROP_GS_V2(sURL,setSURL:)) NSString* JV2_PROP_NM(r,4,sURL);
@property (nonatomic, retain, JV2_PROP_GS_V2(sHttpHeader,setSHttpHeader:)) NSString* JV2_PROP_NM(r,5,sHttpHeader);
@property (nonatomic, assign, JV2_PROP_GS_V2(iContentDataLen,setIContentDataLen:)) JceInt32 JV2_PROP_NM(r,6,iContentDataLen);
@property (nonatomic, assign, JV2_PROP_GS_V2(wImgCacheFNV,setWImgCacheFNV:)) JceInt16 JV2_PROP_NM(o,7,wImgCacheFNV);
@property (nonatomic, assign, JV2_PROP_GS_V2(cRspEncrypted,setCRspEncrypted:)) JceInt8 JV2_PROP_NM(o,9,cRspEncrypted);
@property (nonatomic, assign, JV2_PROP_GS_V2(wErrorCode,setWErrorCode:)) JceInt16 JV2_PROP_NM(o,10,wErrorCode);

@end