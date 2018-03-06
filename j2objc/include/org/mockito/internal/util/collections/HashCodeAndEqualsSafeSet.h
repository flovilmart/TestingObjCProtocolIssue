//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/collections/HashCodeAndEqualsSafeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet")
#ifdef RESTRICT_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet
#define INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_) && (INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet || defined(INCLUDE_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet))
#define OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

/*!
 @brief hashCode and equals safe hash based set.
 <p>
      Useful for holding mocks that have un-stubbable hashCode or equals method,
      meaning that in this scenario the real code is always called and will most probably
      cause an <code>NullPointerException</code>.
  </p>
  <p>
      This collection wraps the mock in an augmented type <code>HashCodeAndEqualsMockWrapper</code>
      that have his own implementation. 
 </p>
 - seealso: HashCodeAndEqualsMockWrapper
 */
@interface OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet : NSObject < JavaUtilSet >

#pragma mark Public

- (instancetype)init;

- (jboolean)addWithId:(id)mock;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (void)clear;

- (id)java_clone;

- (jboolean)containsWithId:(id)mock;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

+ (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *)ofWithJavaLangIterable:(id<JavaLangIterable>)objects;

+ (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *)ofWithNSObjectArray:(IOSObjectArray *)mocks;

- (jboolean)removeWithId:(id)mock;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)typedArray;

- (NSString *)description;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet)

FOUNDATION_EXPORT void OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_init(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *new_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *create_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_init(void);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_ofWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_ofWithJavaLangIterable_(id<JavaLangIterable> objects);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet")
