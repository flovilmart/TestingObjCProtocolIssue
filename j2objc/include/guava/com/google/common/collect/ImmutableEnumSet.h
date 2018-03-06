//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableEnumSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableEnumSet
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableEnumSet

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableEnumSet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet || defined(INCLUDE_ComGoogleCommonCollectImmutableEnumSet))
#define ComGoogleCommonCollectImmutableEnumSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@class JavaUtilEnumSet;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectImmutableEnumSet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableSet *)asImmutableWithJavaUtilEnumSet:(JavaUtilEnumSet *)set;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumSet)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableEnumSet_asImmutableWithJavaUtilEnumSet_(JavaUtilEnumSet *set);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEnumSet")
