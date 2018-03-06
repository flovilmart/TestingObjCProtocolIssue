//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/model/TestClass.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelTestClass")
#ifdef RESTRICT_OrgJunitRunnersModelTestClass
#define INCLUDE_ALL_OrgJunitRunnersModelTestClass 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelTestClass 1
#endif
#undef RESTRICT_OrgJunitRunnersModelTestClass

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnersModelTestClass_) && (INCLUDE_ALL_OrgJunitRunnersModelTestClass || defined(INCLUDE_OrgJunitRunnersModelTestClass))
#define OrgJunitRunnersModelTestClass_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@protocol JavaUtilList;

/*!
 @brief Wraps a class to be run, providing method validation and annotation searching
 @since 4.5
 */
@interface OrgJunitRunnersModelTestClass : NSObject

#pragma mark Public

/*!
 @brief Creates a <code>TestClass</code> wrapping <code>klass</code>.Each time this
  constructor executes, the class is scanned for annotations, which can be
  an expensive process (we hope in future JDK's it will not be.)
 Therefore,
  try to share instances of <code>TestClass</code> where possible.
 */
- (instancetype)initWithIOSClass:(IOSClass *)klass;

/*!
 @brief Returns, efficiently, all the non-overridden fields in this class and its
  superclasses that are annotated with <code>annotationClass</code>.
 */
- (id<JavaUtilList>)getAnnotatedFieldsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedFieldValuesWithId:(id)test
                                     withIOSClass:(IOSClass *)annotationClass
                                     withIOSClass:(IOSClass *)valueClass;

/*!
 @brief Returns, efficiently, all the non-overridden methods in this class and
  its superclasses that are annotated with <code>annotationClass</code>.
 */
- (id<JavaUtilList>)getAnnotatedMethodsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedMethodValuesWithId:(id)test
                                      withIOSClass:(IOSClass *)annotationClass
                                      withIOSClass:(IOSClass *)valueClass;

/*!
 @brief Returns the annotations on this class
 */
- (IOSObjectArray *)getAnnotations;

/*!
 @brief Returns the underlying Java class.
 */
- (IOSClass *)getJavaClass;

/*!
 @brief Returns the class's name.
 */
- (NSString *)getName;

/*!
 @brief Returns the only public constructor in the class, or throws an <code>AssertionError</code>
  if there are more or less than one.
 */
- (JavaLangReflectConstructor *)getOnlyConstructor;

- (jboolean)isANonStaticInnerClass;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelTestClass)

FOUNDATION_EXPORT void OrgJunitRunnersModelTestClass_initWithIOSClass_(OrgJunitRunnersModelTestClass *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitRunnersModelTestClass *new_OrgJunitRunnersModelTestClass_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelTestClass *create_OrgJunitRunnersModelTestClass_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelTestClass)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelTestClass")
