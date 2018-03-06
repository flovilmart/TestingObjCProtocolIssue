//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/verification/VerificationMode.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationMode")
#ifdef RESTRICT_OrgMockitoVerificationVerificationMode
#define INCLUDE_ALL_OrgMockitoVerificationVerificationMode 0
#else
#define INCLUDE_ALL_OrgMockitoVerificationVerificationMode 1
#endif
#undef RESTRICT_OrgMockitoVerificationVerificationMode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoVerificationVerificationMode_) && (INCLUDE_ALL_OrgMockitoVerificationVerificationMode || defined(INCLUDE_OrgMockitoVerificationVerificationMode))
#define OrgMockitoVerificationVerificationMode_

@protocol OrgMockitoInternalVerificationApiVerificationData;

/*!
 @brief Allows verifying that certain behavior happened at least once / exact number
  of times / never.E.g:
   
 <pre class="code"><code class="java">
  verify(mock, times(5)).someMethod(&quot;was called five times&quot;);
  
  verify(mock, never()).someMethod(&quot;was never called&quot;);
  
  verify(mock, atLeastOnce()).someMethod(&quot;was called at least once&quot;);
  
  verify(mock, atLeast(2)).someMethod(&quot;was called at least twice&quot;);
  
  verify(mock, atMost(3)).someMethod(&quot;was called at most 3 times&quot;);
   
 </code>
@endcode
   
 <b>times(1) is the default</b> and can be omitted 
 <p>
  See examples in javadoc for <code>VerificationMode)</code>
 */
@protocol OrgMockitoVerificationVerificationMode < JavaObject >

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationVerificationMode)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationVerificationMode)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationMode")
