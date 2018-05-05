//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSMsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int userNameId;
    unsigned int msgLocalId;
    unsigned int createTime;
    unsigned int _reservedInt;
    NSString *msg;
    NSString *_reservedText;
}

+ (const struct WCTProperty *)reservedText;
+ (const struct WCTProperty *)reservedInt;
+ (const struct WCTProperty *)msg;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)userNameId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
