//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/base/MockitoAssertionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError")
#ifdef RESTRICT_OrgMockitoExceptionsBaseMockitoAssertionError
#define INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError 1
#endif
#undef RESTRICT_OrgMockitoExceptionsBaseMockitoAssertionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoExceptionsBaseMockitoAssertionError_) && (INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError || defined(INCLUDE_OrgMockitoExceptionsBaseMockitoAssertionError))
#define OrgMockitoExceptionsBaseMockitoAssertionError_

#define RESTRICT_JavaLangAssertionError 1
#define INCLUDE_JavaLangAssertionError 1
#include "java/lang/AssertionError.h"

@class IOSObjectArray;
@class JavaLangThrowable;

@interface OrgMockitoExceptionsBaseMockitoAssertionError : JavaLangAssertionError

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (IOSObjectArray *)getUnfilteredStackTrace;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithBoolean:(jboolean)arg0 NS_UNAVAILABLE;

- (instancetype)initWithChar:(jchar)arg0 NS_UNAVAILABLE;

- (instancetype)initWithDouble:(jdouble)arg0 NS_UNAVAILABLE;

- (instancetype)initWithFloat:(jfloat)arg0 NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype)initWithLong:(jlong)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsBaseMockitoAssertionError)

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *new_OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *create_OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsBaseMockitoAssertionError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError")
