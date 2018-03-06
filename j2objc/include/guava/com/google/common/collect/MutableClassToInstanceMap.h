//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/MutableClassToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMutableClassToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonCollectMutableClassToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonCollectMutableClassToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMutableClassToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMutableClassToInstanceMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMutableClassToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonCollectMutableClassToInstanceMap || defined(INCLUDE_ComGoogleCommonCollectMutableClassToInstanceMap))
#define ComGoogleCommonCollectMutableClassToInstanceMap_

#define RESTRICT_ComGoogleCommonCollectMapConstraints 1
#define INCLUDE_ComGoogleCommonCollectMapConstraints_ConstrainedMap 1
#include "com/google/common/collect/MapConstraints.h"

#define RESTRICT_ComGoogleCommonCollectClassToInstanceMap 1
#define INCLUDE_ComGoogleCommonCollectClassToInstanceMap 1
#include "com/google/common/collect/ClassToInstanceMap.h"

@class IOSClass;
@protocol ComGoogleCommonCollectMapConstraint;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMutableClassToInstanceMap : ComGoogleCommonCollectMapConstraints_ConstrainedMap < ComGoogleCommonCollectClassToInstanceMap >

#pragma mark Public

+ (ComGoogleCommonCollectMutableClassToInstanceMap *)create;

+ (ComGoogleCommonCollectMutableClassToInstanceMap *)createWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)arg0
withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)arg1 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMutableClassToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonCollectMutableClassToInstanceMap *ComGoogleCommonCollectMutableClassToInstanceMap_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMutableClassToInstanceMap *ComGoogleCommonCollectMutableClassToInstanceMap_createWithJavaUtilMap_(id<JavaUtilMap> backingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMutableClassToInstanceMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMutableClassToInstanceMap")
