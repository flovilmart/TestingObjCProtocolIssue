//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/CallsRealMethods.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersCallsRealMethods")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersCallsRealMethods
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersCallsRealMethods 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersCallsRealMethods 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersCallsRealMethods

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingAnswersCallsRealMethods_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersCallsRealMethods || defined(INCLUDE_OrgMockitoInternalStubbingAnswersCallsRealMethods))
#define OrgMockitoInternalStubbingAnswersCallsRealMethods_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Optional Answer that adds partial mocking support
 <p>
  <code>Answer</code> can be used to define the return values of unstubbed invocations.
 <p>
  This implementation can be helpful when working with legacy code.
  When this implementation is used, unstubbed methods will delegate to the real implementation.
  This is a way to create a partial mock object that calls real methods by default. 
 <p>
  As usual you are going to read <b>the partial mock warning</b>:
  Object oriented programming is more less tackling complexity by dividing the complexity into separate, specific, SRPy objects.
  How does partial mock fit into this paradigm? Well, it just doesn't... 
  Partial mock usually means that the complexity has been moved to a different method on the same object.
  In most cases, this is not the way you want to design your application. 
 <p>
  However, there are rare cases when partial mocks come handy: 
  dealing with code you cannot change easily (3rd party interfaces, interim refactoring of legacy code etc.)
  However, I wouldn't use partial mocks for new, test-driven & well-designed code. 
 <p>
 */
@interface OrgMockitoInternalStubbingAnswersCallsRealMethods : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersCallsRealMethods)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersCallsRealMethods_init(OrgMockitoInternalStubbingAnswersCallsRealMethods *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersCallsRealMethods *new_OrgMockitoInternalStubbingAnswersCallsRealMethods_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersCallsRealMethods *create_OrgMockitoInternalStubbingAnswersCallsRealMethods_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersCallsRealMethods)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersCallsRealMethods")
