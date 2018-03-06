//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/IsEqual.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreIsEqual")
#ifdef RESTRICT_OrgHamcrestCoreIsEqual
#define INCLUDE_ALL_OrgHamcrestCoreIsEqual 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreIsEqual 1
#endif
#undef RESTRICT_OrgHamcrestCoreIsEqual

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreIsEqual_) && (INCLUDE_ALL_OrgHamcrestCoreIsEqual || defined(INCLUDE_OrgHamcrestCoreIsEqual))
#define OrgHamcrestCoreIsEqual_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Is the value equal to another value, as tested by the 
 <code>java.lang.Object</code> invokedMethod?
 */
@interface OrgHamcrestCoreIsEqual : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithId:(id)equalArg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

/*!
 @brief Creates a matcher that matches when the examined object is logically equal to the specified 
 <code>operand</code>, as determined by calling the <code>java.lang.Object</code> method on
  the <b>examined</b> object.
 <p>If the specified operand is <code>null</code> then the created matcher will only match if
  the examined object's <code>equals</code> method returns <code>true</code> when passed a 
 <code>null</code> (which would be a violation of the <code>equals</code> contract), unless the
  examined object itself is <code>null</code>, in which case the matcher will return a positive
  match.</p>
   
 <p>The created matcher provides a special behaviour when examining <code>Array</code>s, whereby
  it will match if both the operand and the examined object are arrays of the same length and
  contain items that are equal to each other (according to the above rules) <b>in the same
  indexes</b>.</p>  
 <p>
  For example: 
 @code

  assertThat("foo", equalTo("foo"));
  assertThat(new String[] {"foo", "bar"}, equalTo(new String[] {"foo", "bar"})); 
  
@endcode
 */
+ (id<OrgHamcrestMatcher>)equalToWithId:(id)operand;

- (jboolean)matchesWithId:(id)actualValue;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsEqual)

FOUNDATION_EXPORT void OrgHamcrestCoreIsEqual_initWithId_(OrgHamcrestCoreIsEqual *self, id equalArg);

FOUNDATION_EXPORT OrgHamcrestCoreIsEqual *new_OrgHamcrestCoreIsEqual_initWithId_(id equalArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIsEqual *create_OrgHamcrestCoreIsEqual_initWithId_(id equalArg);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsEqual_equalToWithId_(id operand);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsEqual)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreIsEqual")
