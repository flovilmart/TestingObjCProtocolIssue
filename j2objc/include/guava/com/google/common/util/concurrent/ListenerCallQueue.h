//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ListenerCallQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenerCallQueue")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentListenerCallQueue
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenerCallQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenerCallQueue 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentListenerCallQueue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentListenerCallQueue_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenerCallQueue || defined(INCLUDE_ComGoogleCommonUtilConcurrentListenerCallQueue))
#define ComGoogleCommonUtilConcurrentListenerCallQueue_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class ComGoogleCommonUtilConcurrentListenerCallQueue_Callback;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentListenerCallQueue : NSObject < JavaLangRunnable >

#pragma mark Public

- (void)run;

#pragma mark Package-Private

- (instancetype)initWithId:(id)listener
withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)addWithComGoogleCommonUtilConcurrentListenerCallQueue_Callback:(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback *)callback;

- (void)execute;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentListenerCallQueue)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentListenerCallQueue_initWithId_withJavaUtilConcurrentExecutor_(ComGoogleCommonUtilConcurrentListenerCallQueue *self, id listener, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenerCallQueue *new_ComGoogleCommonUtilConcurrentListenerCallQueue_initWithId_withJavaUtilConcurrentExecutor_(id listener, id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenerCallQueue *create_ComGoogleCommonUtilConcurrentListenerCallQueue_initWithId_withJavaUtilConcurrentExecutor_(id listener, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenerCallQueue)

#endif

#if !defined (ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenerCallQueue || defined(INCLUDE_ComGoogleCommonUtilConcurrentListenerCallQueue_Callback))
#define ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_

@protocol JavaLangIterable;

@interface ComGoogleCommonUtilConcurrentListenerCallQueue_Callback : NSObject

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)methodCall;

- (void)callWithId:(id)listener;

- (void)enqueueOnWithJavaLangIterable:(id<JavaLangIterable>)queues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_initWithNSString_(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback *self, NSString *methodCall);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenerCallQueue")
