//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/listeners/MockingStartedListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalListenersMockingStartedListener")
#ifdef RESTRICT_OrgMockitoInternalListenersMockingStartedListener
#define INCLUDE_ALL_OrgMockitoInternalListenersMockingStartedListener 0
#else
#define INCLUDE_ALL_OrgMockitoInternalListenersMockingStartedListener 1
#endif
#undef RESTRICT_OrgMockitoInternalListenersMockingStartedListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalListenersMockingStartedListener_) && (INCLUDE_ALL_OrgMockitoInternalListenersMockingStartedListener || defined(INCLUDE_OrgMockitoInternalListenersMockingStartedListener))
#define OrgMockitoInternalListenersMockingStartedListener_

#define RESTRICT_OrgMockitoInternalListenersMockingProgressListener 1
#define INCLUDE_OrgMockitoInternalListenersMockingProgressListener 1
#include "org/mockito/internal/listeners/MockingProgressListener.h"

@class IOSClass;

@protocol OrgMockitoInternalListenersMockingStartedListener < OrgMockitoInternalListenersMockingProgressListener, JavaObject >

- (void)mockingStartedWithId:(id)mock
                withIOSClass:(IOSClass *)classToMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalListenersMockingStartedListener)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalListenersMockingStartedListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalListenersMockingStartedListener")
