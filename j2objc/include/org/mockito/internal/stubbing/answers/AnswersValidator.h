//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswersValidator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswersValidator")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersAnswersValidator
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswersValidator 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswersValidator 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersAnswersValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingAnswersAnswersValidator_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswersValidator || defined(INCLUDE_OrgMockitoInternalStubbingAnswersAnswersValidator))
#define OrgMockitoInternalStubbingAnswersAnswersValidator_

@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalStubbingAnswersAnswersValidator : NSObject

#pragma mark Public

- (instancetype)init;

- (void)validateWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer
          withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersAnswersValidator)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersAnswersValidator_init(OrgMockitoInternalStubbingAnswersAnswersValidator *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersAnswersValidator *new_OrgMockitoInternalStubbingAnswersAnswersValidator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersAnswersValidator *create_OrgMockitoInternalStubbingAnswersAnswersValidator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersAnswersValidator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersAnswersValidator")
