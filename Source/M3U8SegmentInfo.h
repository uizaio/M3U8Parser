//
//  M3U8SegmentInfo.h
//  M3U8Kit
//
//  Created by Oneday on 13-1-11.
//  Copyright (c) 2013年 0day. All rights reserved.
//

#import <Foundation/Foundation.h>

@class M3U8ExtXKey;

@interface M3U8SegmentInfo : NSObject

@property (readonly, nonatomic) NSTimeInterval duration;
@property (readonly, nonatomic, copy) NSURL *URI;
/** Key for media data decrytion. may be for this segment or next if no key. */
@property (readonly, readonly, nonatomic) M3U8ExtXKey *xKey;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary xKey:(M3U8ExtXKey *)key NS_DESIGNATED_INITIALIZER;

- (NSURL *)mediaURL;

@end
