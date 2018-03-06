//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/escape/ArrayBasedEscaperMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedEscaperMap")
#ifdef RESTRICT_ComGoogleCommonEscapeArrayBasedEscaperMap
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedEscaperMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedEscaperMap 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeArrayBasedEscaperMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeArrayBasedEscaperMap_) && (INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedEscaperMap || defined(INCLUDE_ComGoogleCommonEscapeArrayBasedEscaperMap))
#define ComGoogleCommonEscapeArrayBasedEscaperMap_

@class IOSObjectArray;
@protocol JavaUtilMap;

@interface ComGoogleCommonEscapeArrayBasedEscaperMap : NSObject

#pragma mark Public

+ (ComGoogleCommonEscapeArrayBasedEscaperMap *)createWithJavaUtilMap:(id<JavaUtilMap>)replacements;

#pragma mark Package-Private

+ (IOSObjectArray *)createReplacementArrayWithJavaUtilMap:(id<JavaUtilMap>)map;

- (IOSObjectArray *)getReplacementArray;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonEscapeArrayBasedEscaperMap)

FOUNDATION_EXPORT ComGoogleCommonEscapeArrayBasedEscaperMap *ComGoogleCommonEscapeArrayBasedEscaperMap_createWithJavaUtilMap_(id<JavaUtilMap> replacements);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonEscapeArrayBasedEscaperMap_createReplacementArrayWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeArrayBasedEscaperMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedEscaperMap")