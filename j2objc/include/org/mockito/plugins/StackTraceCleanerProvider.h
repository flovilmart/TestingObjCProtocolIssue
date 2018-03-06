//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/plugins/StackTraceCleanerProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoPluginsStackTraceCleanerProvider")
#ifdef RESTRICT_OrgMockitoPluginsStackTraceCleanerProvider
#define INCLUDE_ALL_OrgMockitoPluginsStackTraceCleanerProvider 0
#else
#define INCLUDE_ALL_OrgMockitoPluginsStackTraceCleanerProvider 1
#endif
#undef RESTRICT_OrgMockitoPluginsStackTraceCleanerProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoPluginsStackTraceCleanerProvider_) && (INCLUDE_ALL_OrgMockitoPluginsStackTraceCleanerProvider || defined(INCLUDE_OrgMockitoPluginsStackTraceCleanerProvider))
#define OrgMockitoPluginsStackTraceCleanerProvider_

@protocol OrgMockitoExceptionsStacktraceStackTraceCleaner;

/*!
 @brief An extension point to register custom <code>StackTraceCleaner</code>.
 You can replace Mockito's default StackTraceCleaner.
  You can also 'enhance' Mockito's default behavior
  because the default cleaner is passed as parameter to the method. 
 <p>
  For more information how to register custom StackTraceCleaner
  please refer to the documentation of <code>MockMaker</code>.
  We will update the documentation shortly. 
 <p>
  See the default implementation: <code>org.mockito.internal.exceptions.stacktrace.DefaultStackTraceCleanerProvider</code>
 */
@protocol OrgMockitoPluginsStackTraceCleanerProvider < JavaObject >

/*!
 @brief Allows configuring custom StackTraceCleaner.
 @param defaultCleaner - Mockito's default StackTraceCleaner
 @return StackTraceCleaner to use
 */
- (id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)getStackTraceCleanerWithOrgMockitoExceptionsStacktraceStackTraceCleaner:(id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)defaultCleaner;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoPluginsStackTraceCleanerProvider)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoPluginsStackTraceCleanerProvider)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoPluginsStackTraceCleanerProvider")