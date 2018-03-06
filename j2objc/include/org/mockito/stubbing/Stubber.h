//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/Stubber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingStubber")
#ifdef RESTRICT_OrgMockitoStubbingStubber
#define INCLUDE_ALL_OrgMockitoStubbingStubber 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingStubber 1
#endif
#undef RESTRICT_OrgMockitoStubbingStubber

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoStubbingStubber_) && (INCLUDE_ALL_OrgMockitoStubbingStubber || defined(INCLUDE_OrgMockitoStubbingStubber))
#define OrgMockitoStubbingStubber_

@class IOSClass;
@class JavaLangThrowable;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Allows to choose a method when stubbing in doThrow()|doAnswer()|doNothing()|doReturn() style
 <p> 
  Example: 
 <pre class="code"><code class="java">
    doThrow(new RuntimeException()).when(mockedList).clear();   
    //following throws RuntimeException:
    mockedList.clear(); 
 </code>
@endcode
  
  Also useful when stubbing consecutive calls:  
 <pre class="code"><code class="java">
    doThrow(new RuntimeException("one")).
 doThrow(new RuntimeException("two"))
    .when(mock).someVoidMethod(); 
 </code>
@endcode
  
  Read more about those methods: 
 <p>
  <code>Mockito.doThrow(Throwable)</code>
  <p>
  <code>Mockito.doAnswer(Answer)</code>
  <p>
  <code>Mockito.doNothing()</code>
  <p>
  <code>Mockito.doReturn(Object)</code>
  <p>
  
  See examples in javadoc for <code>Mockito</code>
 */
@protocol OrgMockitoStubbingStubber < JavaObject >

/*!
 @brief Allows to choose a method when stubbing in doThrow()|doAnswer()|doNothing()|doReturn() style
 <p> 
  Example: 
 <pre class="code"><code class="java">
    doThrow(new RuntimeException())
    .when(mockedList).clear();   
    //following throws RuntimeException:
    mockedList.clear(); 
 </code>
@endcode
  
  Read more about those methods: 
 <p>
  <code>Mockito.doThrow(Throwable)</code>
  <p>
  <code>Mockito.doAnswer(Answer)</code>
  <p>
  <code>Mockito.doNothing()</code>
  <p>
  <code>Mockito.doReturn(Object)</code>
  <p>
  
   See examples in javadoc for <code>Mockito</code>
 @param mock The mock
 @return select method for stubbing
 */
- (id)whenWithId:(id)mock;

/*!
 @brief Use it for stubbing consecutive calls in <code>Mockito.doThrow(Throwable)</code> style:
 <pre class="code"><code class="java">
    doThrow(new RuntimeException("one")).
 doThrow(new RuntimeException("two"))
    .when(mock).someVoidMethod(); 
 </code>
@endcode
  See javadoc for <code>Mockito.doThrow(Throwable)</code>
 @param toBeThrown to be thrown when the stubbed method is called
 @return stubber - to select a method for stubbing
 */
- (id<OrgMockitoStubbingStubber>)doThrowWithJavaLangThrowable:(JavaLangThrowable *)toBeThrown;

/*!
 @brief Use it for stubbing consecutive calls in <code>Mockito.doThrow(Class)</code> style:
 <pre class="code"><code class="java">
    doThrow(RuntimeException.class).
 doThrow(IllegalArgumentException.class)
    .when(mock).someVoidMethod(); 
 </code>
@endcode
  See javadoc for <code>Mockito.doThrow(Class)</code>
 @param toBeThrown exception class to be thrown when the stubbed method is called
 @return stubber - to select a method for stubbing
 */
- (id<OrgMockitoStubbingStubber>)doThrowWithIOSClass:(IOSClass *)toBeThrown;

/*!
 @brief Use it for stubbing consecutive calls in <code>Mockito.doAnswer(Answer)</code> style:
 <pre class="code"><code class="java">
    doAnswer(answerOne).
 doAnswer(answerTwo)
    .when(mock).someVoidMethod(); 
 </code>
@endcode
  See javadoc for <code>Mockito.doAnswer(Answer)</code>
 @param answer to answer when the stubbed method is called
 @return stubber - to select a method for stubbing
 */
- (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief Use it for stubbing consecutive calls in <code>Mockito.doNothing()</code> style:
 <pre class="code"><code class="java">
    doNothing().
 doThrow(new RuntimeException("two"))
    .when(mock).someVoidMethod(); 
 </code>
@endcode
  See javadoc for <code>Mockito.doNothing()</code>
 @return stubber - to select a method for stubbing
 */
- (id<OrgMockitoStubbingStubber>)doNothing;

/*!
 @brief Use it for stubbing consecutive calls in <code>Mockito.doReturn(Object)</code> style.
 <p>
  See javadoc for <code>Mockito.doReturn(Object)</code>
 @param toBeReturned to be returned when the stubbed method is called
 @return stubber - to select a method for stubbing
 */
- (id<OrgMockitoStubbingStubber>)doReturnWithId:(id)toBeReturned;

/*!
 @brief Use it for stubbing consecutive calls in <code>Mockito.doCallRealMethod()</code> style.
 <p>
  See javadoc for <code>Mockito.doCallRealMethod()</code>
 @return stubber - to select a method for stubbing
 */
- (id<OrgMockitoStubbingStubber>)doCallRealMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingStubber)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingStubber)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingStubber")