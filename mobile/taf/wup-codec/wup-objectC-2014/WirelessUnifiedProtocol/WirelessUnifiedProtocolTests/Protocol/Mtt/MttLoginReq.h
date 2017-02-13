// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttERelayProtoVer.h"
#import "MttSTSingleMD5.h"
#import "MttUserBase.h"

@interface MttLoginReq : JceObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(stUB,setStUB:)) MttUserBase* JV2_PROP_NM(r,0,stUB);
@property (nonatomic, retain, JV2_PROP_GS_V2(sOrigGUID,setSOrigGUID:)) NSData* JV2_PROP_NM(r,1,sOrigGUID);
@property (nonatomic, retain, JV2_PROP_GS_V2(vCrypt,setVCrypt:)) NSData* JV2_PROP_NM(r,2,vCrypt);
@property (nonatomic, assign, JV2_PROP_GS_V2(iWidth,setIWidth:)) JceInt32 JV2_PROP_NM(r,3,iWidth);
@property (nonatomic, assign, JV2_PROP_GS_V2(iHeight,setIHeight:)) JceInt32 JV2_PROP_NM(r,4,iHeight);
@property (nonatomic, retain, JV2_PROP_GS_V2(sChannel,setSChannel:)) NSString* JV2_PROP_NM(o,5,sChannel);
@property (nonatomic, assign, JV2_PROP_GS_V2(eRelayProtoVer,setERelayProtoVer:)) MttERelayProtoVer JV2_PROP_NM(r,6,eRelayProtoVer);
@property (nonatomic, retain, JV2_PROP_GS_V2(sMark,setSMark:)) NSData* JV2_PROP_NM(o,7,sMark);
@property (nonatomic, assign, JV2_PROP_GS_V2(iVerifyId,setIVerifyId:)) JceInt32 JV2_PROP_NM(o,8,iVerifyId);
@property (nonatomic, retain, JV2_PROP_GS_V2(vCharSet,setVCharSet:)) NSData* JV2_PROP_NM(o,9,vCharSet);
@property (nonatomic, retain, JV2_PROP_GS_V2(vMidCharSet,setVMidCharSet:)) NSData* JV2_PROP_NM(o,10,vMidCharSet);
@property (nonatomic, retain, JV2_PROP_GS_V2(vBigCharSet,setVBigCharSet:)) NSData* JV2_PROP_NM(o,11,vBigCharSet);
@property (nonatomic, retain, JV2_PROP_GS_V2(vCharSetMD5,setVCharSetMD5:)) NSData* JV2_PROP_NM(o,12,vCharSetMD5);
@property (nonatomic, retain, JV2_PROP_GS_V2(vCharSetMD5Group,setVCharSetMD5Group:)) NSArray* JV2_PROP_EX(o,13,vCharSetMD5Group,VOMTTSTSingleMD5);
@property (nonatomic, assign, JV2_PROP_GS_V2(bHttpProxy,setBHttpProxy:)) JceInt8 JV2_PROP_NM(o,14,bHttpProxy);
@property (nonatomic, assign, JV2_PROP_GS_V2(bCrashTag,setBCrashTag:)) JceInt8 JV2_PROP_NM(o,15,bCrashTag);

@end