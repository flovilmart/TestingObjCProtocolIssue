//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Collections2.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCollections2")
#ifdef RESTRICT_ComGoogleCommonCollectCollections2
#define INCLUDE_ALL_ComGoogleCommonCollectCollections2 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCollections2 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCollections2

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCollections2_) && (INCLUDE_ALL_ComGoogleCommonCollectCollections2 || defined(INCLUDE_ComGoogleCommonCollectCollections2))
#define ComGoogleCommonCollectCollections2_

@class ComGoogleCommonBaseJoiner;
@class JavaLangStringBuilder;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectCollections2 : NSObject

#pragma mark Public

+ (id<JavaUtilCollection>)filterWithJavaUtilCollection:(id<JavaUtilCollection>)unfiltered
                      withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaUtilCollection>)orderedPermutationsWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (id<JavaUtilCollection>)orderedPermutationsWithJavaLangIterable:(id<JavaLangIterable>)elements
                                           withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (id<JavaUtilCollection>)permutationsWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

+ (id<JavaUtilCollection>)transformWithJavaUtilCollection:(id<JavaUtilCollection>)fromCollection
                          withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

#pragma mark Package-Private

+ (id<JavaUtilCollection>)castWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (jboolean)containsAllImplWithJavaUtilCollection:(id<JavaUtilCollection>)self_
                           withJavaUtilCollection:(id<JavaUtilCollection>)c;

+ (JavaLangStringBuilder *)newStringBuilderForCollectionWithInt:(jint)size OBJC_METHOD_FAMILY_NONE;

+ (jboolean)safeContainsWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                        withId:(id)object;

+ (jboolean)safeRemoveWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                      withId:(id)object;

+ (NSString *)toStringImplWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectCollections2)

inline ComGoogleCommonBaseJoiner *ComGoogleCommonCollectCollections2_get_STANDARD_JOINER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseJoiner *ComGoogleCommonCollectCollections2_STANDARD_JOINER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectCollections2, STANDARD_JOINER, ComGoogleCommonBaseJoiner *)

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectCollections2_filterWithJavaUtilCollection_withComGoogleCommonBasePredicate_(id<JavaUtilCollection> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectCollections2_safeContainsWithJavaUtilCollection_withId_(id<JavaUtilCollection> collection, id object);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectCollections2_safeRemoveWithJavaUtilCollection_withId_(id<JavaUtilCollection> collection, id object);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectCollections2_transformWithJavaUtilCollection_withComGoogleCommonBaseFunction_(id<JavaUtilCollection> fromCollection, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectCollections2_containsAllImplWithJavaUtilCollection_withJavaUtilCollection_(id<JavaUtilCollection> self_, id<JavaUtilCollection> c);

FOUNDATION_EXPORT NSString *ComGoogleCommonCollectCollections2_toStringImplWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT JavaLangStringBuilder *ComGoogleCommonCollectCollections2_newStringBuilderForCollectionWithInt_(jint size);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectCollections2_castWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectCollections2_orderedPermutationsWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectCollections2_orderedPermutationsWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> elements, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectCollections2_permutationsWithJavaUtilCollection_(id<JavaUtilCollection> elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollections2)

#endif

#if !defined (ComGoogleCommonCollectCollections2_FilteredCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectCollections2 || defined(INCLUDE_ComGoogleCommonCollectCollections2_FilteredCollection))
#define ComGoogleCommonCollectCollections2_FilteredCollection_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

@class IOSObjectArray;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectCollections2_FilteredCollection : JavaUtilAbstractCollection {
 @public
  id<JavaUtilCollection> unfiltered_;
  id<ComGoogleCommonBasePredicate> predicate_;
}

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)element;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)element;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)unfiltered
          withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (ComGoogleCommonCollectCollections2_FilteredCollection *)createCombinedWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)newPredicate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollections2_FilteredCollection)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollections2_FilteredCollection, unfiltered_, id<JavaUtilCollection>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollections2_FilteredCollection, predicate_, id<ComGoogleCommonBasePredicate>)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollections2_FilteredCollection_initWithJavaUtilCollection_withComGoogleCommonBasePredicate_(ComGoogleCommonCollectCollections2_FilteredCollection *self, id<JavaUtilCollection> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT ComGoogleCommonCollectCollections2_FilteredCollection *new_ComGoogleCommonCollectCollections2_FilteredCollection_initWithJavaUtilCollection_withComGoogleCommonBasePredicate_(id<JavaUtilCollection> unfiltered, id<ComGoogleCommonBasePredicate> predicate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollections2_FilteredCollection *create_ComGoogleCommonCollectCollections2_FilteredCollection_initWithJavaUtilCollection_withComGoogleCommonBasePredicate_(id<JavaUtilCollection> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollections2_FilteredCollection)

#endif

#if !defined (ComGoogleCommonCollectCollections2_TransformedCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectCollections2 || defined(INCLUDE_ComGoogleCommonCollectCollections2_TransformedCollection))
#define ComGoogleCommonCollectCollections2_TransformedCollection_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

@protocol ComGoogleCommonBaseFunction;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectCollections2_TransformedCollection : JavaUtilAbstractCollection {
 @public
  id<JavaUtilCollection> fromCollection_;
  id<ComGoogleCommonBaseFunction> function_;
}

#pragma mark Public

- (void)clear;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)fromCollection
           withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollections2_TransformedCollection)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollections2_TransformedCollection, fromCollection_, id<JavaUtilCollection>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollections2_TransformedCollection, function_, id<ComGoogleCommonBaseFunction>)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollections2_TransformedCollection_initWithJavaUtilCollection_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectCollections2_TransformedCollection *self, id<JavaUtilCollection> fromCollection, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT ComGoogleCommonCollectCollections2_TransformedCollection *new_ComGoogleCommonCollectCollections2_TransformedCollection_initWithJavaUtilCollection_withComGoogleCommonBaseFunction_(id<JavaUtilCollection> fromCollection, id<ComGoogleCommonBaseFunction> function) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollections2_TransformedCollection *create_ComGoogleCommonCollectCollections2_TransformedCollection_initWithJavaUtilCollection_withComGoogleCommonBaseFunction_(id<JavaUtilCollection> fromCollection, id<ComGoogleCommonBaseFunction> function);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollections2_TransformedCollection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCollections2")