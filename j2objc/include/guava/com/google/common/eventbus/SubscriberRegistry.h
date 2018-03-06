//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/eventbus/SubscriberRegistry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry")
#ifdef RESTRICT_ComGoogleCommonEventbusSubscriberRegistry
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusSubscriberRegistry

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusSubscriberRegistry_) && (INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry || defined(INCLUDE_ComGoogleCommonEventbusSubscriberRegistry))
#define ComGoogleCommonEventbusSubscriberRegistry_

@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonEventbusEventBus;
@class IOSClass;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@interface ComGoogleCommonEventbusSubscriberRegistry : NSObject

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonEventbusEventBus:(ComGoogleCommonEventbusEventBus *)bus;

+ (ComGoogleCommonCollectImmutableSet *)flattenHierarchyWithIOSClass:(IOSClass *)concreteClass;

- (id<JavaUtilIterator>)getSubscribersWithId:(id)event;

- (id<JavaUtilSet>)getSubscribersForTestingWithIOSClass:(IOSClass *)eventType;

- (void)register__WithId:(id)listener;

- (void)unregisterWithId:(id)listener;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonEventbusSubscriberRegistry)

FOUNDATION_EXPORT void ComGoogleCommonEventbusSubscriberRegistry_initWithComGoogleCommonEventbusEventBus_(ComGoogleCommonEventbusSubscriberRegistry *self, ComGoogleCommonEventbusEventBus *bus);

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberRegistry *new_ComGoogleCommonEventbusSubscriberRegistry_initWithComGoogleCommonEventbusEventBus_(ComGoogleCommonEventbusEventBus *bus) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberRegistry *create_ComGoogleCommonEventbusSubscriberRegistry_initWithComGoogleCommonEventbusEventBus_(ComGoogleCommonEventbusEventBus *bus);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonEventbusSubscriberRegistry_flattenHierarchyWithIOSClass_(IOSClass *concreteClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberRegistry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberRegistry")
