//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/FilteredMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredMultimap))
#define ComGoogleCommonCollectFilteredMultimap_

#define RESTRICT_ComGoogleCommonCollectMultimap 1
#define INCLUDE_ComGoogleCommonCollectMultimap 1
#include "com/google/common/collect/Multimap.h"

@protocol ComGoogleCommonBasePredicate;

@protocol ComGoogleCommonCollectFilteredMultimap < ComGoogleCommonCollectMultimap, JavaObject >

- (id<ComGoogleCommonCollectMultimap>)unfiltered;

- (id<ComGoogleCommonBasePredicate>)entryPredicate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimap")
