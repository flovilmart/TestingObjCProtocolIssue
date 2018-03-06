//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/Floats.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesFloats")
#ifdef RESTRICT_ComGoogleCommonPrimitivesFloats
#define INCLUDE_ALL_ComGoogleCommonPrimitivesFloats 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesFloats 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesFloats

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesFloats_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesFloats || defined(INCLUDE_ComGoogleCommonPrimitivesFloats))
#define ComGoogleCommonPrimitivesFloats_

@class ComGoogleCommonBaseConverter;
@class IOSFloatArray;
@class IOSObjectArray;
@class JavaLangFloat;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesFloats : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithFloatArray:(IOSFloatArray *)backingArray;

+ (jint)compareWithFloat:(jfloat)a
               withFloat:(jfloat)b;

+ (IOSFloatArray *)concatWithFloatArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithFloatArray:(IOSFloatArray *)array
                         withFloat:(jfloat)target;

+ (IOSFloatArray *)ensureCapacityWithFloatArray:(IOSFloatArray *)array
                                        withInt:(jint)minLength
                                        withInt:(jint)padding;

+ (jint)hashCodeWithFloat:(jfloat)value;

+ (jint)indexOfWithFloatArray:(IOSFloatArray *)array
                    withFloat:(jfloat)target;

+ (jint)indexOfWithFloatArray:(IOSFloatArray *)array
               withFloatArray:(IOSFloatArray *)target;

+ (jboolean)isFiniteWithFloat:(jfloat)value;

+ (NSString *)joinWithNSString:(NSString *)separator
                withFloatArray:(IOSFloatArray *)array;

+ (jint)lastIndexOfWithFloatArray:(IOSFloatArray *)array
                        withFloat:(jfloat)target;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jfloat)maxWithFloatArray:(IOSFloatArray *)array;

+ (jfloat)minWithFloatArray:(IOSFloatArray *)array;

+ (ComGoogleCommonBaseConverter *)stringConverter;

+ (IOSFloatArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (JavaLangFloat *)tryParseWithNSString:(NSString *)string;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesFloats)

inline jint ComGoogleCommonPrimitivesFloats_get_BYTES(void);
#define ComGoogleCommonPrimitivesFloats_BYTES 4
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesFloats, BYTES, jint)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesFloats_hashCodeWithFloat_(jfloat value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesFloats_compareWithFloat_withFloat_(jfloat a, jfloat b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesFloats_isFiniteWithFloat_(jfloat value);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesFloats_containsWithFloatArray_withFloat_(IOSFloatArray *array, jfloat target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesFloats_indexOfWithFloatArray_withFloat_(IOSFloatArray *array, jfloat target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesFloats_indexOfWithFloatArray_withFloatArray_(IOSFloatArray *array, IOSFloatArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesFloats_lastIndexOfWithFloatArray_withFloat_(IOSFloatArray *array, jfloat target);

FOUNDATION_EXPORT jfloat ComGoogleCommonPrimitivesFloats_minWithFloatArray_(IOSFloatArray *array);

FOUNDATION_EXPORT jfloat ComGoogleCommonPrimitivesFloats_maxWithFloatArray_(IOSFloatArray *array);

FOUNDATION_EXPORT IOSFloatArray *ComGoogleCommonPrimitivesFloats_concatWithFloatArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesFloats_stringConverter(void);

FOUNDATION_EXPORT IOSFloatArray *ComGoogleCommonPrimitivesFloats_ensureCapacityWithFloatArray_withInt_withInt_(IOSFloatArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesFloats_joinWithNSString_withFloatArray_(NSString *separator, IOSFloatArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesFloats_lexicographicalComparator(void);

FOUNDATION_EXPORT IOSFloatArray *ComGoogleCommonPrimitivesFloats_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesFloats_asListWithFloatArray_(IOSFloatArray *backingArray);

FOUNDATION_EXPORT JavaLangFloat *ComGoogleCommonPrimitivesFloats_tryParseWithNSString_(NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesFloats)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesFloats")
