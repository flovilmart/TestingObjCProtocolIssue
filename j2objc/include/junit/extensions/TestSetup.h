//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/extensions/TestSetup.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitExtensionsTestSetup")
#ifdef RESTRICT_JunitExtensionsTestSetup
#define INCLUDE_ALL_JunitExtensionsTestSetup 0
#else
#define INCLUDE_ALL_JunitExtensionsTestSetup 1
#endif
#undef RESTRICT_JunitExtensionsTestSetup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitExtensionsTestSetup_) && (INCLUDE_ALL_JunitExtensionsTestSetup || defined(INCLUDE_JunitExtensionsTestSetup))
#define JunitExtensionsTestSetup_

#define RESTRICT_JunitExtensionsTestDecorator 1
#define INCLUDE_JunitExtensionsTestDecorator 1
#include "junit/extensions/TestDecorator.h"

@class JunitFrameworkTestResult;
@protocol JunitFrameworkTest;

/*!
 @brief A Decorator to set up and tear down additional fixture state.Subclass
  TestSetup and insert it into your tests when you want to set up additional
  state once before the tests are run.
 */
@interface JunitExtensionsTestSetup : JunitExtensionsTestDecorator

#pragma mark Public

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

#pragma mark Protected

/*!
 @brief Sets up the fixture.Override to set up additional fixture state.
 */
- (void)setUp;

/*!
 @brief Tears down the fixture.Override to tear down the additional fixture
  state.
 */
- (void)tearDown;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsTestSetup)

FOUNDATION_EXPORT void JunitExtensionsTestSetup_initWithJunitFrameworkTest_(JunitExtensionsTestSetup *self, id<JunitFrameworkTest> test);

FOUNDATION_EXPORT JunitExtensionsTestSetup *new_JunitExtensionsTestSetup_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsTestSetup *create_JunitExtensionsTestSetup_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test);

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsTestSetup)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitExtensionsTestSetup")
