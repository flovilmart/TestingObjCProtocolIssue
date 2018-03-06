//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/hash/MessageDigestHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashMessageDigestHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashMessageDigestHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashMessageDigestHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashMessageDigestHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashMessageDigestHashFunction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashMessageDigestHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashMessageDigestHashFunction || defined(INCLUDE_ComGoogleCommonHashMessageDigestHashFunction))
#define ComGoogleCommonHashMessageDigestHashFunction_

#define RESTRICT_ComGoogleCommonHashAbstractStreamingHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractStreamingHashFunction 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashMessageDigestHashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)algorithmName
                         withInt:(jint)bytes
                    withNSString:(NSString *)toString;

- (instancetype)initWithNSString:(NSString *)algorithmName
                    withNSString:(NSString *)toString;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashMessageDigestHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withNSString_(ComGoogleCommonHashMessageDigestHashFunction *self, NSString *algorithmName, NSString *toString);

FOUNDATION_EXPORT ComGoogleCommonHashMessageDigestHashFunction *new_ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withNSString_(NSString *algorithmName, NSString *toString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashMessageDigestHashFunction *create_ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withNSString_(NSString *algorithmName, NSString *toString);

FOUNDATION_EXPORT void ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withInt_withNSString_(ComGoogleCommonHashMessageDigestHashFunction *self, NSString *algorithmName, jint bytes, NSString *toString);

FOUNDATION_EXPORT ComGoogleCommonHashMessageDigestHashFunction *new_ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withInt_withNSString_(NSString *algorithmName, jint bytes, NSString *toString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashMessageDigestHashFunction *create_ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withInt_withNSString_(NSString *algorithmName, jint bytes, NSString *toString);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashMessageDigestHashFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashMessageDigestHashFunction")
