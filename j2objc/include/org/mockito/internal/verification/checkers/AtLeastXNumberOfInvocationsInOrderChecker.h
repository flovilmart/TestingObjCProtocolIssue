//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastXNumberOfInvocationsInOrderChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker))
#define OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker : NSObject

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalVerificationApiInOrderContext_(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker *self, id<OrgMockitoInternalVerificationApiInOrderContext> orderingContext);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalVerificationApiInOrderContext_(id<OrgMockitoInternalVerificationApiInOrderContext> orderingContext) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker *create_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalVerificationApiInOrderContext_(id<OrgMockitoInternalVerificationApiInOrderContext> orderingContext);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsInOrderChecker")
