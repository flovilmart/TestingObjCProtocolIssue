//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/RemovalListeners.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners")
#ifdef RESTRICT_ComGoogleCommonCacheRemovalListeners
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners 1
#endif
#undef RESTRICT_ComGoogleCommonCacheRemovalListeners

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheRemovalListeners_) && (INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners || defined(INCLUDE_ComGoogleCommonCacheRemovalListeners))
#define ComGoogleCommonCacheRemovalListeners_

@protocol ComGoogleCommonCacheRemovalListener;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonCacheRemovalListeners : NSObject

#pragma mark Public

+ (id<ComGoogleCommonCacheRemovalListener>)asynchronousWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener>)listener
                                                                withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListeners)

FOUNDATION_EXPORT id<ComGoogleCommonCacheRemovalListener> ComGoogleCommonCacheRemovalListeners_asynchronousWithComGoogleCommonCacheRemovalListener_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonCacheRemovalListener> listener, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListeners)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners")
