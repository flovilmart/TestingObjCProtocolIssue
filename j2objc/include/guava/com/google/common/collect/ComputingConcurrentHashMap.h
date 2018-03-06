//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ComputingConcurrentHashMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap")
#ifdef RESTRICT_ComGoogleCommonCollectComputingConcurrentHashMap
#define INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectComputingConcurrentHashMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectComputingConcurrentHashMap_) && (INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap || defined(INCLUDE_ComGoogleCommonCollectComputingConcurrentHashMap))
#define ComGoogleCommonCollectComputingConcurrentHashMap_

#define RESTRICT_ComGoogleCommonCollectMapMakerInternalMap 1
#define INCLUDE_ComGoogleCommonCollectMapMakerInternalMap 1
#include "com/google/common/collect/MapMakerInternalMap.h"

@class ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment;
@class ComGoogleCommonCollectMapMaker;
@class ComGoogleCommonCollectMapMakerInternalMap_Segment;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectComputingConcurrentHashMap : ComGoogleCommonCollectMapMakerInternalMap {
 @public
  id<ComGoogleCommonBaseFunction> computingFunction_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)builder
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (ComGoogleCommonCollectMapMakerInternalMap_Segment *)createSegmentWithInt:(jint)initialCapacity
                                                                    withInt:(jint)maxSegmentSize;

- (id)getOrComputeWithId:(id)key;

- (ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *)segmentForWithInt:(jint)hash_;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComputingConcurrentHashMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectComputingConcurrentHashMap, computingFunction_, id<ComGoogleCommonBaseFunction>)

FOUNDATION_EXPORT void ComGoogleCommonCollectComputingConcurrentHashMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectComputingConcurrentHashMap *self, ComGoogleCommonCollectMapMaker *builder, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap *new_ComGoogleCommonCollectComputingConcurrentHashMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *builder, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap *create_ComGoogleCommonCollectComputingConcurrentHashMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *builder, id<ComGoogleCommonBaseFunction> computingFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComputingConcurrentHashMap)

#endif

#if !defined (ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_) && (INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap || defined(INCLUDE_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment))
#define ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_

#define RESTRICT_ComGoogleCommonCollectMapMakerInternalMap 1
#define INCLUDE_ComGoogleCommonCollectMapMakerInternalMap_Segment 1
#include "com/google/common/collect/MapMakerInternalMap.h"

@class ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference;
@class ComGoogleCommonCollectMapMakerInternalMap;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry;

@interface ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment : ComGoogleCommonCollectMapMakerInternalMap_Segment

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMakerInternalMap:(ComGoogleCommonCollectMapMakerInternalMap *)map
                                                          withInt:(jint)initialCapacity
                                                          withInt:(jint)maxSegmentSize;

- (id)computeWithId:(id)key
            withInt:(jint)hash_
withComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id<ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry>)e
withComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference:(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference *)computingValueReference;

- (id)getOrComputeWithId:(id)key
                 withInt:(jint)hash_
withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment)

FOUNDATION_EXPORT void ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_initWithComGoogleCommonCollectMapMakerInternalMap_withInt_withInt_(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *self, ComGoogleCommonCollectMapMakerInternalMap *map, jint initialCapacity, jint maxSegmentSize);

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *new_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_initWithComGoogleCommonCollectMapMakerInternalMap_withInt_withInt_(ComGoogleCommonCollectMapMakerInternalMap *map, jint initialCapacity, jint maxSegmentSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *create_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_initWithComGoogleCommonCollectMapMakerInternalMap_withInt_withInt_(ComGoogleCommonCollectMapMakerInternalMap *map, jint initialCapacity, jint maxSegmentSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment)

#endif

#if !defined (ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy_) && (INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap || defined(INCLUDE_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy))
#define ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy_

#define RESTRICT_ComGoogleCommonCollectMapMakerInternalMap 1
#define INCLUDE_ComGoogleCommonCollectMapMakerInternalMap_AbstractSerializationProxy 1
#include "com/google/common/collect/MapMakerInternalMap.h"

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonCollectMapMakerInternalMap_Strength;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy : ComGoogleCommonCollectMapMakerInternalMap_AbstractSerializationProxy {
 @public
  id<ComGoogleCommonBaseFunction> computingFunction_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength *)keyStrength
                    withComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength *)valueStrength
                                        withComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)keyEquivalence
                                        withComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)valueEquivalence
                                                                  withLong:(jlong)expireAfterWriteNanos
                                                                  withLong:(jlong)expireAfterAccessNanos
                                                                   withInt:(jint)maximumSize
                                                                   withInt:(jint)concurrencyLevel
                        withComGoogleCommonCollectMapMaker_RemovalListener:(id<ComGoogleCommonCollectMapMaker_RemovalListener>)removalListener
                                       withJavaUtilConcurrentConcurrentMap:(id<JavaUtilConcurrentConcurrentMap>)delegate
                                           withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength *)arg0
                    withComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength *)arg1
                                        withComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)arg2
                                        withComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)arg3
                                                                  withLong:(jlong)arg4
                                                                  withLong:(jlong)arg5
                                                                   withInt:(jint)arg6
                                                                   withInt:(jint)arg7
                        withComGoogleCommonCollectMapMaker_RemovalListener:(id<ComGoogleCommonCollectMapMaker_RemovalListener>)arg8
                                       withJavaUtilConcurrentConcurrentMap:(id<JavaUtilConcurrentConcurrentMap>)arg9 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy, computingFunction_, id<ComGoogleCommonBaseFunction>)

FOUNDATION_EXPORT void ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy_initWithComGoogleCommonCollectMapMakerInternalMap_Strength_withComGoogleCommonCollectMapMakerInternalMap_Strength_withComGoogleCommonBaseEquivalence_withComGoogleCommonBaseEquivalence_withLong_withLong_withInt_withInt_withComGoogleCommonCollectMapMaker_RemovalListener_withJavaUtilConcurrentConcurrentMap_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy *self, ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength, ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength, ComGoogleCommonBaseEquivalence *keyEquivalence, ComGoogleCommonBaseEquivalence *valueEquivalence, jlong expireAfterWriteNanos, jlong expireAfterAccessNanos, jint maximumSize, jint concurrencyLevel, id<ComGoogleCommonCollectMapMaker_RemovalListener> removalListener, id<JavaUtilConcurrentConcurrentMap> delegate, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy *new_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy_initWithComGoogleCommonCollectMapMakerInternalMap_Strength_withComGoogleCommonCollectMapMakerInternalMap_Strength_withComGoogleCommonBaseEquivalence_withComGoogleCommonBaseEquivalence_withLong_withLong_withInt_withInt_withComGoogleCommonCollectMapMaker_RemovalListener_withJavaUtilConcurrentConcurrentMap_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength, ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength, ComGoogleCommonBaseEquivalence *keyEquivalence, ComGoogleCommonBaseEquivalence *valueEquivalence, jlong expireAfterWriteNanos, jlong expireAfterAccessNanos, jint maximumSize, jint concurrencyLevel, id<ComGoogleCommonCollectMapMaker_RemovalListener> removalListener, id<JavaUtilConcurrentConcurrentMap> delegate, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy *create_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy_initWithComGoogleCommonCollectMapMakerInternalMap_Strength_withComGoogleCommonCollectMapMakerInternalMap_Strength_withComGoogleCommonBaseEquivalence_withComGoogleCommonBaseEquivalence_withLong_withLong_withInt_withInt_withComGoogleCommonCollectMapMaker_RemovalListener_withJavaUtilConcurrentConcurrentMap_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength, ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength, ComGoogleCommonBaseEquivalence *keyEquivalence, ComGoogleCommonBaseEquivalence *valueEquivalence, jlong expireAfterWriteNanos, jlong expireAfterAccessNanos, jint maximumSize, jint concurrencyLevel, id<ComGoogleCommonCollectMapMaker_RemovalListener> removalListener, id<JavaUtilConcurrentConcurrentMap> delegate, id<ComGoogleCommonBaseFunction> computingFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSerializationProxy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectComputingConcurrentHashMap")
