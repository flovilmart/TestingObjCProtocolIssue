//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/SetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSetMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectSetMultimap || defined(INCLUDE_ComGoogleCommonCollectSetMultimap))
#define ComGoogleCommonCollectSetMultimap_

#define RESTRICT_ComGoogleCommonCollectMultimap 1
#define INCLUDE_ComGoogleCommonCollectMultimap 1
#include "com/google/common/collect/Multimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@protocol ComGoogleCommonCollectSetMultimap < ComGoogleCommonCollectMultimap, JavaObject >

- (id<JavaUtilSet>)getWithId:(id)key;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSetMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSetMultimap")
