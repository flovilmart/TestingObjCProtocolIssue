//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/requests/ClassRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRequestsClassRequest")
#ifdef RESTRICT_OrgJunitInternalRequestsClassRequest
#define INCLUDE_ALL_OrgJunitInternalRequestsClassRequest 0
#else
#define INCLUDE_ALL_OrgJunitInternalRequestsClassRequest 1
#endif
#undef RESTRICT_OrgJunitInternalRequestsClassRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRequestsClassRequest_) && (INCLUDE_ALL_OrgJunitInternalRequestsClassRequest || defined(INCLUDE_OrgJunitInternalRequestsClassRequest))
#define OrgJunitInternalRequestsClassRequest_

#define RESTRICT_OrgJunitRunnerRequest 1
#define INCLUDE_OrgJunitRunnerRequest 1
#include "org/junit/runner/Request.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalRequestsClassRequest : OrgJunitRunnerRequest

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)testClass;

- (instancetype)initWithIOSClass:(IOSClass *)testClass
                     withBoolean:(jboolean)canUseSuiteMethod;

- (OrgJunitRunnerRunner *)getRunner;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRequestsClassRequest)

FOUNDATION_EXPORT void OrgJunitInternalRequestsClassRequest_initWithIOSClass_withBoolean_(OrgJunitInternalRequestsClassRequest *self, IOSClass *testClass, jboolean canUseSuiteMethod);

FOUNDATION_EXPORT OrgJunitInternalRequestsClassRequest *new_OrgJunitInternalRequestsClassRequest_initWithIOSClass_withBoolean_(IOSClass *testClass, jboolean canUseSuiteMethod) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRequestsClassRequest *create_OrgJunitInternalRequestsClassRequest_initWithIOSClass_withBoolean_(IOSClass *testClass, jboolean canUseSuiteMethod);

FOUNDATION_EXPORT void OrgJunitInternalRequestsClassRequest_initWithIOSClass_(OrgJunitInternalRequestsClassRequest *self, IOSClass *testClass);

FOUNDATION_EXPORT OrgJunitInternalRequestsClassRequest *new_OrgJunitInternalRequestsClassRequest_initWithIOSClass_(IOSClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRequestsClassRequest *create_OrgJunitInternalRequestsClassRequest_initWithIOSClass_(IOSClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRequestsClassRequest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRequestsClassRequest")
