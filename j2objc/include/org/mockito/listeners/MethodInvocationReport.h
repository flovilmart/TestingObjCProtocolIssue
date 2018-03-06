//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/listeners/MethodInvocationReport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport")
#ifdef RESTRICT_OrgMockitoListenersMethodInvocationReport
#define INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport 0
#else
#define INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport 1
#endif
#undef RESTRICT_OrgMockitoListenersMethodInvocationReport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoListenersMethodInvocationReport_) && (INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport || defined(INCLUDE_OrgMockitoListenersMethodInvocationReport))
#define OrgMockitoListenersMethodInvocationReport_

@class JavaLangThrowable;
@protocol OrgMockitoInvocationDescribedInvocation;

/*!
 @brief Represent a method call on a mock.
 <p>
      Contains the information on the mock, the location of the stub
      the return value if it returned something (maybe null), or an
      exception if one was thrown when the method was invoked. 
 </p>
 */
@protocol OrgMockitoListenersMethodInvocationReport < JavaObject >

/*!
 @brief The return type is deprecated, please assign the return value from this method
  to the <code>DescribedInvocation</code> type.Sorry for inconvenience but we had to move 
 <code>PrintableInvocation</code> to better place to keep the API consistency.
 @return Information on the method call, never <code>null</code>
 */
- (id<OrgMockitoInvocationDescribedInvocation>)getInvocation;

/*!
 @return The resulting value of the method invocation, may be <code>null</code>
 */
- (id)getReturnedValue;

/*!
 @return The throwable raised by the method invocation, maybe <code>null</code>
 */
- (JavaLangThrowable *)getThrowable;

/*!
 @return <code>true</code> if an exception was raised, <code>false</code> otherwise
 */
- (jboolean)threwException;

/*!
 @return Location of the stub invocation
 */
- (NSString *)getLocationOfStubbing;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoListenersMethodInvocationReport)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoListenersMethodInvocationReport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport")
