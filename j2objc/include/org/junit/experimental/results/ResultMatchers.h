//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/results/ResultMatchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalResultsResultMatchers")
#ifdef RESTRICT_OrgJunitExperimentalResultsResultMatchers
#define INCLUDE_ALL_OrgJunitExperimentalResultsResultMatchers 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalResultsResultMatchers 1
#endif
#undef RESTRICT_OrgJunitExperimentalResultsResultMatchers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalResultsResultMatchers_) && (INCLUDE_ALL_OrgJunitExperimentalResultsResultMatchers || defined(INCLUDE_OrgJunitExperimentalResultsResultMatchers))
#define OrgJunitExperimentalResultsResultMatchers_

@protocol OrgHamcrestMatcher;

/*!
 @brief Matchers on a PrintableResult, to enable JUnit self-tests.
 For example: 
 @code

  assertThat(testResult(HasExpectedException.class), isSuccessful()); 
  
@endcode
 */
@interface OrgJunitExperimentalResultsResultMatchers : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Matches if there are <code>count</code> failures
 */
+ (id<OrgHamcrestMatcher>)failureCountIsWithInt:(jint)count;

/*!
 @brief Matches if the result has one or more failures, and at least one of them
  contains <code>string</code>
 */
+ (id<OrgHamcrestMatcher>)hasFailureContainingWithNSString:(NSString *)string;

/*!
 @brief Matches if the result has exactly one failure, and it contains <code>string</code>
 */
+ (id<OrgHamcrestMatcher>)hasSingleFailureContainingWithNSString:(NSString *)string;

/*!
 @brief Matches if the tests are all successful
 */
+ (id<OrgHamcrestMatcher>)isSuccessful;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalResultsResultMatchers)

FOUNDATION_EXPORT void OrgJunitExperimentalResultsResultMatchers_init(OrgJunitExperimentalResultsResultMatchers *self);

FOUNDATION_EXPORT OrgJunitExperimentalResultsResultMatchers *new_OrgJunitExperimentalResultsResultMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalResultsResultMatchers *create_OrgJunitExperimentalResultsResultMatchers_init(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitExperimentalResultsResultMatchers_isSuccessful(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitExperimentalResultsResultMatchers_failureCountIsWithInt_(jint count);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitExperimentalResultsResultMatchers_hasSingleFailureContainingWithNSString_(NSString *string);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitExperimentalResultsResultMatchers_hasFailureContainingWithNSString_(NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalResultsResultMatchers)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalResultsResultMatchers")
