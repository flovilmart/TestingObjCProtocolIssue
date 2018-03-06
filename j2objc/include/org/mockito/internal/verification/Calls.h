//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/Calls.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCalls")
#ifdef RESTRICT_OrgMockitoInternalVerificationCalls
#define INCLUDE_ALL_OrgMockitoInternalVerificationCalls 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCalls 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCalls

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationCalls_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCalls || defined(INCLUDE_OrgMockitoInternalVerificationCalls))
#define OrgMockitoInternalVerificationCalls_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "org/mockito/verification/VerificationMode.h"

#define RESTRICT_OrgMockitoInternalVerificationApiVerificationInOrderMode 1
#define INCLUDE_OrgMockitoInternalVerificationApiVerificationInOrderMode 1
#include "org/mockito/internal/verification/api/VerificationInOrderMode.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

@interface OrgMockitoInternalVerificationCalls : NSObject < OrgMockitoVerificationVerificationMode, OrgMockitoInternalVerificationApiVerificationInOrderMode > {
 @public
  jint wantedCount_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)wantedNumberOfInvocations;

- (NSString *)description;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCalls)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCalls_initWithInt_(OrgMockitoInternalVerificationCalls *self, jint wantedNumberOfInvocations);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCalls *new_OrgMockitoInternalVerificationCalls_initWithInt_(jint wantedNumberOfInvocations) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCalls *create_OrgMockitoInternalVerificationCalls_initWithInt_(jint wantedNumberOfInvocations);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCalls)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCalls")
