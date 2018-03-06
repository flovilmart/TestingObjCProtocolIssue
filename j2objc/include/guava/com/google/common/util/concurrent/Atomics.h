//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/Atomics.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAtomics
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAtomics

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAtomics_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics || defined(INCLUDE_ComGoogleCommonUtilConcurrentAtomics))
#define ComGoogleCommonUtilConcurrentAtomics_

@class IOSObjectArray;
@class JavaUtilConcurrentAtomicAtomicReference;
@class JavaUtilConcurrentAtomicAtomicReferenceArray;

@interface ComGoogleCommonUtilConcurrentAtomics : NSObject

#pragma mark Public

+ (JavaUtilConcurrentAtomicAtomicReference *)newReference OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentAtomicAtomicReference *)newReferenceWithId:(id)initialValue OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentAtomicAtomicReferenceArray *)newReferenceArrayWithNSObjectArray:(IOSObjectArray *)array OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentAtomicAtomicReferenceArray *)newReferenceArrayWithInt:(jint)length OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomics)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *ComGoogleCommonUtilConcurrentAtomics_newReference(void);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *ComGoogleCommonUtilConcurrentAtomics_newReferenceWithId_(id initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *ComGoogleCommonUtilConcurrentAtomics_newReferenceArrayWithInt_(jint length);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *ComGoogleCommonUtilConcurrentAtomics_newReferenceArrayWithNSObjectArray_(IOSObjectArray *array);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomics)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics")