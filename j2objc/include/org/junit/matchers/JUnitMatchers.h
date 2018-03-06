//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/matchers/JUnitMatchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitMatchersJUnitMatchers")
#ifdef RESTRICT_OrgJunitMatchersJUnitMatchers
#define INCLUDE_ALL_OrgJunitMatchersJUnitMatchers 0
#else
#define INCLUDE_ALL_OrgJunitMatchersJUnitMatchers 1
#endif
#undef RESTRICT_OrgJunitMatchersJUnitMatchers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitMatchersJUnitMatchers_) && (INCLUDE_ALL_OrgJunitMatchersJUnitMatchers || defined(INCLUDE_OrgJunitMatchersJUnitMatchers))
#define OrgJunitMatchersJUnitMatchers_

@class IOSObjectArray;
@class OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher;
@class OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher;
@protocol OrgHamcrestMatcher;

/*!
 @brief Convenience import class: these are useful matchers for use with the assertThat method, but they are
  not currently included in the basic CoreMatchers class from hamcrest.
 @since 4.4
 */
@interface OrgJunitMatchersJUnitMatchers : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief This is useful for fluently combining matchers that must both pass.For example: 
 @code

    assertThat(string, both(containsString("a")).and(containsString("b"))); 
  
@endcode
 */
+ (OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *)bothWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher __attribute__((deprecated));

/*!
 @return a matcher matching any string that contains substring
 */
+ (id<OrgHamcrestMatcher>)containsStringWithNSString:(NSString *)substring __attribute__((deprecated));

/*!
 @brief This is useful for fluently combining matchers where either may pass, for example:
 @code

    assertThat(string, either(containsString("a")).or(containsString("b"))); 
  
@endcode
 */
+ (OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *)eitherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher __attribute__((deprecated));

/*!
 @return A matcher matching any collection in which every element matches elementMatcher
 */
+ (id<OrgHamcrestMatcher>)everyItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher __attribute__((deprecated));

/*!
 @return A matcher matching any collection containing an element matching elementMatcher
 */
+ (id<OrgHamcrestMatcher>)hasItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher __attribute__((deprecated));

/*!
 @return A matcher matching any collection containing element
 */
+ (id<OrgHamcrestMatcher>)hasItemWithId:(id)element __attribute__((deprecated));

/*!
 @return A matcher matching any collection containing at least one element that matches
          each matcher in elementMatcher (this may be one element matching all matchers,
          or different elements matching each matcher)
 */
+ (id<OrgHamcrestMatcher>)hasItemsWithOrgHamcrestMatcherArray:(IOSObjectArray *)elementMatchers __attribute__((deprecated));

/*!
 @return A matcher matching any collection containing every element in elements
 */
+ (id<OrgHamcrestMatcher>)hasItemsWithNSObjectArray:(IOSObjectArray *)elements __attribute__((deprecated));

/*!
 @return A matcher that delegates to exceptionMatcher and in addition
          appends the stacktrace of the actual Exception in case of a mismatch.
 */
+ (id<OrgHamcrestMatcher>)isExceptionWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)exceptionMatcher;

/*!
 @return A matcher that delegates to throwableMatcher and in addition
          appends the stacktrace of the actual Throwable in case of a mismatch.
 */
+ (id<OrgHamcrestMatcher>)isThrowableWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)throwableMatcher;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitMatchersJUnitMatchers)

FOUNDATION_EXPORT void OrgJunitMatchersJUnitMatchers_init(OrgJunitMatchersJUnitMatchers *self);

FOUNDATION_EXPORT OrgJunitMatchersJUnitMatchers *new_OrgJunitMatchersJUnitMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitMatchersJUnitMatchers *create_OrgJunitMatchersJUnitMatchers_init(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemWithId_(id element);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> elementMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemsWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemsWithOrgHamcrestMatcherArray_(IOSObjectArray *elementMatchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_everyItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> elementMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_containsStringWithNSString_(NSString *substring);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *OrgJunitMatchersJUnitMatchers_bothWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *OrgJunitMatchersJUnitMatchers_eitherWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_isThrowableWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> throwableMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_isExceptionWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> exceptionMatcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitMatchersJUnitMatchers)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitMatchersJUnitMatchers")
