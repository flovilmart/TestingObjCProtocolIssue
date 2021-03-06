//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/DiscreteDomain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain")
#ifdef RESTRICT_ComGoogleCommonCollectDiscreteDomain
#define INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain 1
#endif
#undef RESTRICT_ComGoogleCommonCollectDiscreteDomain

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectDiscreteDomain_) && (INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain || defined(INCLUDE_ComGoogleCommonCollectDiscreteDomain))
#define ComGoogleCommonCollectDiscreteDomain_

@protocol JavaLangComparable;

@interface ComGoogleCommonCollectDiscreteDomain : NSObject

#pragma mark Public

+ (ComGoogleCommonCollectDiscreteDomain *)bigIntegers;

- (jlong)distanceWithJavaLangComparable:(id<JavaLangComparable>)start
                 withJavaLangComparable:(id<JavaLangComparable>)end;

+ (ComGoogleCommonCollectDiscreteDomain *)integers;

+ (ComGoogleCommonCollectDiscreteDomain *)longs;

- (id<JavaLangComparable>)maxValue;

- (id<JavaLangComparable>)minValue;

- (id<JavaLangComparable>)nextWithJavaLangComparable:(id<JavaLangComparable>)value;

- (id<JavaLangComparable>)previousWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain)

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_integers(void);

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_longs(void);

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_bigIntegers(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectDiscreteDomain_init(ComGoogleCommonCollectDiscreteDomain *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain")
