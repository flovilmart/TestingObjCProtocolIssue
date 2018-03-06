//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/LoadingCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheLoadingCache")
#ifdef RESTRICT_ComGoogleCommonCacheLoadingCache
#define INCLUDE_ALL_ComGoogleCommonCacheLoadingCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheLoadingCache 1
#endif
#undef RESTRICT_ComGoogleCommonCacheLoadingCache

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheLoadingCache_) && (INCLUDE_ALL_ComGoogleCommonCacheLoadingCache || defined(INCLUDE_ComGoogleCommonCacheLoadingCache))
#define ComGoogleCommonCacheLoadingCache_

#define RESTRICT_ComGoogleCommonCacheCache 1
#define INCLUDE_ComGoogleCommonCacheCache 1
#include "com/google/common/cache/Cache.h"

#define RESTRICT_ComGoogleCommonBaseFunction 1
#define INCLUDE_ComGoogleCommonBaseFunction 1
#include "com/google/common/base/Function.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentConcurrentMap;

@protocol ComGoogleCommonCacheLoadingCache < ComGoogleCommonCacheCache, ComGoogleCommonBaseFunction, JavaObject >

- (id)getWithId:(id)key;

- (id)getUncheckedWithId:(id)key;

- (ComGoogleCommonCollectImmutableMap *)getAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)applyWithId:(id)key;

- (void)refreshWithId:(id)key;

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheLoadingCache)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheLoadingCache)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheLoadingCache")
