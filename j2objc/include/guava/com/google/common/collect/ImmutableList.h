//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableList")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableList
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableList
#ifdef INCLUDE_ComGoogleCommonCollectImmutableList_SubList
#define INCLUDE_ComGoogleCommonCollectImmutableList 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableList_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableList || defined(INCLUDE_ComGoogleCommonCollectImmutableList))
#define ComGoogleCommonCollectImmutableList_

#define RESTRICT_ComGoogleCommonCollectImmutableCollection 1
#define INCLUDE_ComGoogleCommonCollectImmutableCollection 1
#include "com/google/common/collect/ImmutableCollection.h"

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "java/util/List.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

@class ComGoogleCommonCollectImmutableList_Builder;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionUnaryOperator;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectImmutableList : ComGoogleCommonCollectImmutableCollection < JavaUtilList, JavaUtilRandomAccess >

#pragma mark Public

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)newElements;

- (ComGoogleCommonCollectImmutableList *)asList;

+ (ComGoogleCommonCollectImmutableList_Builder *)builder;

- (jboolean)containsWithId:(id)object;

+ (ComGoogleCommonCollectImmutableList *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableList *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableList *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableList *)copyOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)lastIndexOfWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIterator;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIteratorWithInt:(jint)index;

+ (ComGoogleCommonCollectImmutableList *)of;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)element;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6
                                           withId:(id)e7;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6
                                           withId:(id)e7
                                           withId:(id)e8;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6
                                           withId:(id)e7
                                           withId:(id)e8
                                           withId:(id)e9;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6
                                           withId:(id)e7
                                           withId:(id)e8
                                           withId:(id)e9
                                           withId:(id)e10;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6
                                           withId:(id)e7
                                           withId:(id)e8
                                           withId:(id)e9
                                           withId:(id)e10
                                           withId:(id)e11;

+ (ComGoogleCommonCollectImmutableList *)ofWithId:(id)e1
                                           withId:(id)e2
                                           withId:(id)e3
                                           withId:(id)e4
                                           withId:(id)e5
                                           withId:(id)e6
                                           withId:(id)e7
                                           withId:(id)e8
                                           withId:(id)e9
                                           withId:(id)e10
                                           withId:(id)e11
                                           withId:(id)e12
                                withNSObjectArray:(IOSObjectArray *)others;

- (id)removeWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableList *)reverse;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

#pragma mark Package-Private

- (instancetype)init;

+ (ComGoogleCommonCollectImmutableList *)asImmutableListWithNSObjectArray:(IOSObjectArray *)elements;

+ (ComGoogleCommonCollectImmutableList *)asImmutableListWithNSObjectArray:(IOSObjectArray *)elements
                                                                  withInt:(jint)length;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableList)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5, id e6);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5, id e6, id e7);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5, id e6, id e7, id e8);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5, id e6, id e7, id e8, id e9);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5, id e6, id e7, id e8, id e9, id e10);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5, id e6, id e7, id e8, id e9, id e10, id e11);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, id e7, id e8, id e9, id e10, id e11, id e12, IOSObjectArray *others);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_copyOfWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_copyOfWithJavaUtilIterator_(id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_copyOfWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_asImmutableListWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectImmutableList_asImmutableListWithNSObjectArray_withInt_(IOSObjectArray *elements, jint length);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableList_init(ComGoogleCommonCollectImmutableList *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_Builder *ComGoogleCommonCollectImmutableList_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableList)

#endif

#if !defined (ComGoogleCommonCollectImmutableList_SubList_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableList || defined(INCLUDE_ComGoogleCommonCollectImmutableList_SubList))
#define ComGoogleCommonCollectImmutableList_SubList_

@class ComGoogleCommonCollectImmutableList;

@interface ComGoogleCommonCollectImmutableList_SubList : ComGoogleCommonCollectImmutableList {
 @public
  jint offset_;
  jint length_;
}

#pragma mark Public

- (id)getWithInt:(jint)index;

- (jint)size;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)outer$
                                                    withInt:(jint)offset
                                                    withInt:(jint)length;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableList_SubList)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableList_SubList_initWithComGoogleCommonCollectImmutableList_withInt_withInt_(ComGoogleCommonCollectImmutableList_SubList *self, ComGoogleCommonCollectImmutableList *outer$, jint offset, jint length);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_SubList *new_ComGoogleCommonCollectImmutableList_SubList_initWithComGoogleCommonCollectImmutableList_withInt_withInt_(ComGoogleCommonCollectImmutableList *outer$, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_SubList *create_ComGoogleCommonCollectImmutableList_SubList_initWithComGoogleCommonCollectImmutableList_withInt_withInt_(ComGoogleCommonCollectImmutableList *outer$, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableList_SubList)

#endif

#if !defined (ComGoogleCommonCollectImmutableList_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableList || defined(INCLUDE_ComGoogleCommonCollectImmutableList_SerializedForm))
#define ComGoogleCommonCollectImmutableList_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;

@interface ComGoogleCommonCollectImmutableList_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  IOSObjectArray *elements_;
}

#pragma mark Package-Private

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)elements;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableList_SerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableList_SerializedForm, elements_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableList_SerializedForm_initWithNSObjectArray_(ComGoogleCommonCollectImmutableList_SerializedForm *self, IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_SerializedForm *new_ComGoogleCommonCollectImmutableList_SerializedForm_initWithNSObjectArray_(IOSObjectArray *elements) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_SerializedForm *create_ComGoogleCommonCollectImmutableList_SerializedForm_initWithNSObjectArray_(IOSObjectArray *elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableList_SerializedForm)

#endif

#if !defined (ComGoogleCommonCollectImmutableList_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableList || defined(INCLUDE_ComGoogleCommonCollectImmutableList_Builder))
#define ComGoogleCommonCollectImmutableList_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableCollection 1
#define INCLUDE_ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder 1
#include "com/google/common/collect/ImmutableCollection.h"

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableList_Builder : ComGoogleCommonCollectImmutableCollection_ArrayBasedBuilder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableList_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableList_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableList_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableList_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableList *)build;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableList_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableList_Builder_init(ComGoogleCommonCollectImmutableList_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_Builder *new_ComGoogleCommonCollectImmutableList_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_Builder *create_ComGoogleCommonCollectImmutableList_Builder_init(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableList_Builder_initWithInt_(ComGoogleCommonCollectImmutableList_Builder *self, jint capacity);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_Builder *new_ComGoogleCommonCollectImmutableList_Builder_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList_Builder *create_ComGoogleCommonCollectImmutableList_Builder_initWithInt_(jint capacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableList_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableList")
