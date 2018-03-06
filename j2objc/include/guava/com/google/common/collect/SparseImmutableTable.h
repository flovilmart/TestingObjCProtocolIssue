//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/SparseImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable")
#ifdef RESTRICT_ComGoogleCommonCollectSparseImmutableTable
#define INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSparseImmutableTable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSparseImmutableTable_) && (INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable || defined(INCLUDE_ComGoogleCommonCollectSparseImmutableTable))
#define ComGoogleCommonCollectSparseImmutableTable_

#define RESTRICT_ComGoogleCommonCollectRegularImmutableTable 1
#define INCLUDE_ComGoogleCommonCollectRegularImmutableTable 1
#include "com/google/common/collect/RegularImmutableTable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@protocol ComGoogleCommonCollectTable_Cell;

@interface ComGoogleCommonCollectSparseImmutableTable : ComGoogleCommonCollectRegularImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (id<ComGoogleCommonCollectTable_Cell>)getCellWithInt:(jint)index;

- (id)getValueWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSparseImmutableTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectSparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectSparseImmutableTable *self, ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

FOUNDATION_EXPORT ComGoogleCommonCollectSparseImmutableTable *new_ComGoogleCommonCollectSparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSparseImmutableTable *create_ComGoogleCommonCollectSparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSparseImmutableTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable")
