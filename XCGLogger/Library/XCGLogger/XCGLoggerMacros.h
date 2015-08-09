//
//  XCGLoggerMacros.h
//  XCGLogger
//
//  Created by Don Vaughn on 09/08/15.
//

#import <Foundation/Foundation.h>

#ifndef XCGLOGGER_MACROS
#define XCGLOGGER_MACROS YES

#define xLogVerbose(fmt, ...)   [[XCGLogger defaultInstance] verbose:^NSString * _Nullable{ return [NSString stringWithFormat: fmt, ##__VA_ARGS__]; } functionName: [NSString stringWithUTF8String: __PRETTY_FUNCTION__] fileName: @__FILE__ lineNumber: __LINE__];

#define xLogDebug(fmt, ...)     [[XCGLogger defaultInstance] debug:^NSString * _Nullable{ return [NSString stringWithFormat: fmt, ##__VA_ARGS__]; } functionName: [NSString stringWithUTF8String: __PRETTY_FUNCTION__] fileName: @__FILE__ lineNumber: __LINE__];

#define xLogInfo(fmt, ...)      [[XCGLogger defaultInstance] info:^NSString * _Nullable{ return [NSString stringWithFormat: fmt, ##__VA_ARGS__]; } functionName: [NSString stringWithUTF8String: __PRETTY_FUNCTION__] fileName: @__FILE__ lineNumber: __LINE__];

#define xLogWarning(fmt, ...)   [[XCGLogger defaultInstance] warning:^NSString * _Nullable{ return [NSString stringWithFormat: fmt, ##__VA_ARGS__]; } functionName: [NSString stringWithUTF8String: __PRETTY_FUNCTION__] fileName: @__FILE__ lineNumber: __LINE__];

#define xLogError(fmt, ...)     [[XCGLogger defaultInstance] error:^NSString * _Nullable{ return [NSString stringWithFormat: fmt, ##__VA_ARGS__]; } functionName: [NSString stringWithUTF8String: __PRETTY_FUNCTION__] fileName: @__FILE__ lineNumber: __LINE__];

#define xLogSevere(fmt, ...)    [[XCGLogger defaultInstance] severe:^NSString * _Nullable{ return [NSString stringWithFormat: fmt, ##__VA_ARGS__]; } functionName: [NSString stringWithUTF8String: __PRETTY_FUNCTION__] fileName: @__FILE__ lineNumber: __LINE__];

#endif