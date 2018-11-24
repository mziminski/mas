//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ASDJobManifest, NSXPCConnection;

@interface ASDJobOptions : NSObject <NSSecureCoding>
{
    NSXPCConnection *_endpoint;
    ASDJobManifest *_manifest;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) ASDJobManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSXPCConnection *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
