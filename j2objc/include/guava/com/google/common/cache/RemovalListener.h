//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/RemovalListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListener")
#ifdef RESTRICT_ComGoogleCommonCacheRemovalListener
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListener 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListener 1
#endif
#undef RESTRICT_ComGoogleCommonCacheRemovalListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheRemovalListener_) && (INCLUDE_ALL_ComGoogleCommonCacheRemovalListener || defined(INCLUDE_ComGoogleCommonCacheRemovalListener))
#define ComGoogleCommonCacheRemovalListener_

@class ComGoogleCommonCacheRemovalNotification;

@protocol ComGoogleCommonCacheRemovalListener < JavaObject >

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListener)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListener")
