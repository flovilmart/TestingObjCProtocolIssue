//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/SignedBytes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes")
#ifdef RESTRICT_ComGoogleCommonPrimitivesSignedBytes
#define INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesSignedBytes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesSignedBytes_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes || defined(INCLUDE_ComGoogleCommonPrimitivesSignedBytes))
#define ComGoogleCommonPrimitivesSignedBytes_

@class IOSByteArray;
@protocol JavaUtilComparator;

@interface ComGoogleCommonPrimitivesSignedBytes : NSObject

#pragma mark Public

+ (jbyte)checkedCastWithLong:(jlong)value;

+ (jint)compareWithByte:(jbyte)a
               withByte:(jbyte)b;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withByteArray:(IOSByteArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jbyte)maxWithByteArray:(IOSByteArray *)array;

+ (jbyte)minWithByteArray:(IOSByteArray *)array;

+ (jbyte)saturatedCastWithLong:(jlong)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesSignedBytes)

inline jbyte ComGoogleCommonPrimitivesSignedBytes_get_MAX_POWER_OF_TWO(void);
#define ComGoogleCommonPrimitivesSignedBytes_MAX_POWER_OF_TWO 64
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesSignedBytes, MAX_POWER_OF_TWO, jbyte)

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesSignedBytes_compareWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_minWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_maxWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesSignedBytes_joinWithNSString_withByteArray_(NSString *separator, IOSByteArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesSignedBytes_lexicographicalComparator(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesSignedBytes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes")
