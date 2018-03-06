//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/MapMaker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMapMaker")
#ifdef RESTRICT_ComGoogleCommonCollectMapMaker
#define INCLUDE_ALL_ComGoogleCommonCollectMapMaker 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMapMaker 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMapMaker
#ifdef INCLUDE_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap
#define INCLUDE_ComGoogleCommonCollectMapMaker_NullConcurrentMap 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMapMaker_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker))
#define ComGoogleCommonCollectMapMaker_

#define RESTRICT_ComGoogleCommonCollectGenericMapMaker 1
#define INCLUDE_ComGoogleCommonCollectGenericMapMaker 1
#include "com/google/common/collect/GenericMapMaker.h"

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCollectMapMakerInternalMap;
@class ComGoogleCommonCollectMapMakerInternalMap_Strength;
@class ComGoogleCommonCollectMapMaker_RemovalCause;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCollectMapMaker : ComGoogleCommonCollectGenericMapMaker {
 @public
  jboolean useCustomMap_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  jint maximumSize_;
  ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength_;
  ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  ComGoogleCommonCollectMapMaker_RemovalCause *nullRemovalCause_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
  ComGoogleCommonBaseTicker *ticker_;
}

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCollectMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

- (NSString *)description;

- (ComGoogleCommonCollectMapMaker *)weakKeys;

- (ComGoogleCommonCollectMapMaker *)weakValues;

#pragma mark Package-Private

- (ComGoogleCommonCollectMapMaker *)expireAfterAccessWithLong:(jlong)duration
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (ComGoogleCommonCollectMapMaker *)expireAfterWriteWithLong:(jlong)duration
                              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jint)getConcurrencyLevel;

- (jlong)getExpireAfterAccessNanos;

- (jlong)getExpireAfterWriteNanos;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCollectMapMakerInternalMap_Strength *)getKeyStrength;

- (ComGoogleCommonBaseTicker *)getTicker;

- (ComGoogleCommonCollectMapMakerInternalMap_Strength *)getValueStrength;

- (ComGoogleCommonCollectMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (id<JavaUtilConcurrentConcurrentMap>)makeComputingMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (ComGoogleCommonCollectMapMakerInternalMap *)makeCustomMap;

- (ComGoogleCommonCollectMapMaker *)maximumSizeWithInt:(jint)size;

- (ComGoogleCommonCollectGenericMapMaker *)removalListenerWithComGoogleCommonCollectMapMaker_RemovalListener:(id<ComGoogleCommonCollectMapMaker_RemovalListener>)listener;

- (ComGoogleCommonCollectMapMaker *)setKeyStrengthWithComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength *)strength;

- (ComGoogleCommonCollectMapMaker *)setValueStrengthWithComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength *)strength;

- (ComGoogleCommonCollectMapMaker *)softValues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyStrength_, ComGoogleCommonCollectMapMakerInternalMap_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, valueStrength_, ComGoogleCommonCollectMapMakerInternalMap_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, nullRemovalCause_, ComGoogleCommonCollectMapMaker_RemovalCause *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, ticker_, ComGoogleCommonBaseTicker *)

inline jint ComGoogleCommonCollectMapMaker_get_UNSET_INT(void);
#define ComGoogleCommonCollectMapMaker_UNSET_INT -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectMapMaker, UNSET_INT, jint)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_init(ComGoogleCommonCollectMapMaker *self);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *new_ComGoogleCommonCollectMapMaker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *create_ComGoogleCommonCollectMapMaker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_RemovalListener_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_RemovalListener))
#define ComGoogleCommonCollectMapMaker_RemovalListener_

@class ComGoogleCommonCollectMapMaker_RemovalNotification;

@protocol ComGoogleCommonCollectMapMaker_RemovalListener < JavaObject >

- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(ComGoogleCommonCollectMapMaker_RemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalListener)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalListener)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_RemovalNotification_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_RemovalNotification))
#define ComGoogleCommonCollectMapMaker_RemovalNotification_

#define RESTRICT_ComGoogleCommonCollectImmutableEntry 1
#define INCLUDE_ComGoogleCommonCollectImmutableEntry 1
#include "com/google/common/collect/ImmutableEntry.h"

@class ComGoogleCommonCollectMapMaker_RemovalCause;

@interface ComGoogleCommonCollectMapMaker_RemovalNotification : ComGoogleCommonCollectImmutableEntry

#pragma mark Public

- (ComGoogleCommonCollectMapMaker_RemovalCause *)getCause;

- (jboolean)wasEvicted;

#pragma mark Package-Private

- (instancetype)initWithId:(id)key
                    withId:(id)value
withComGoogleCommonCollectMapMaker_RemovalCause:(ComGoogleCommonCollectMapMaker_RemovalCause *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithId:(id)arg0
                    withId:(id)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalNotification)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_RemovalNotification_initWithId_withId_withComGoogleCommonCollectMapMaker_RemovalCause_(ComGoogleCommonCollectMapMaker_RemovalNotification *self, id key, id value, ComGoogleCommonCollectMapMaker_RemovalCause *cause);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalNotification *new_ComGoogleCommonCollectMapMaker_RemovalNotification_initWithId_withId_withComGoogleCommonCollectMapMaker_RemovalCause_(id key, id value, ComGoogleCommonCollectMapMaker_RemovalCause *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalNotification *create_ComGoogleCommonCollectMapMaker_RemovalNotification_initWithId_withId_withComGoogleCommonCollectMapMaker_RemovalCause_(id key, id value, ComGoogleCommonCollectMapMaker_RemovalCause *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalNotification)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_RemovalCause_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_RemovalCause))
#define ComGoogleCommonCollectMapMaker_RemovalCause_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectMapMaker_RemovalCause_Enum) {
  ComGoogleCommonCollectMapMaker_RemovalCause_Enum_EXPLICIT = 0,
  ComGoogleCommonCollectMapMaker_RemovalCause_Enum_REPLACED = 1,
  ComGoogleCommonCollectMapMaker_RemovalCause_Enum_COLLECTED = 2,
  ComGoogleCommonCollectMapMaker_RemovalCause_Enum_EXPIRED = 3,
  ComGoogleCommonCollectMapMaker_RemovalCause_Enum_SIZE = 4,
};

@interface ComGoogleCommonCollectMapMaker_RemovalCause : JavaLangEnum

#pragma mark Public

+ (ComGoogleCommonCollectMapMaker_RemovalCause *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (jboolean)wasEvicted;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCause)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_values_[];

inline ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_get_EXPLICIT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectMapMaker_RemovalCause, EXPLICIT)

inline ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_get_REPLACED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectMapMaker_RemovalCause, REPLACED)

inline ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_get_COLLECTED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectMapMaker_RemovalCause, COLLECTED)

inline ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_get_EXPIRED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectMapMaker_RemovalCause, EXPIRED)

inline ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_get_SIZE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectMapMaker_RemovalCause, SIZE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectMapMaker_RemovalCause_values(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCause *ComGoogleCommonCollectMapMaker_RemovalCause_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCause)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_NullConcurrentMap_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_NullConcurrentMap))
#define ComGoogleCommonCollectMapMaker_NullConcurrentMap_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap 1
#include "java/util/AbstractMap.h"

#define RESTRICT_JavaUtilConcurrentConcurrentMap 1
#define INCLUDE_JavaUtilConcurrentConcurrentMap 1
#include "java/util/concurrent/ConcurrentMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectMapMaker;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMapMaker_NullConcurrentMap : JavaUtilAbstractMap < JavaUtilConcurrentConcurrentMap, JavaIoSerializable >

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (id)removeWithId:(id)key;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker;

- (void)notifyRemovalWithId:(id)key
                     withId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_NullConcurrentMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_NullConcurrentMap_initWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker_NullConcurrentMap *self, ComGoogleCommonCollectMapMaker *mapMaker);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_NullConcurrentMap *new_ComGoogleCommonCollectMapMaker_NullConcurrentMap_initWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker *mapMaker) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_NullConcurrentMap *create_ComGoogleCommonCollectMapMaker_NullConcurrentMap_initWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker *mapMaker);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_NullConcurrentMap)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap))
#define ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_

@class ComGoogleCommonCollectMapMaker;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap : ComGoogleCommonCollectMapMaker_NullConcurrentMap {
 @public
  id<ComGoogleCommonBaseFunction> computingFunction_;
}

#pragma mark Public

- (id)getWithId:(id)k;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap, computingFunction_, id<ComGoogleCommonBaseFunction>)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap *self, ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap *new_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap *create_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_ComputingMapAdapter_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_ComputingMapAdapter))
#define ComGoogleCommonCollectMapMaker_ComputingMapAdapter_

#define RESTRICT_ComGoogleCommonCollectComputingConcurrentHashMap 1
#define INCLUDE_ComGoogleCommonCollectComputingConcurrentHashMap 1
#include "com/google/common/collect/ComputingConcurrentHashMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectMapMaker;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectMapMaker_ComputingMapAdapter : ComGoogleCommonCollectComputingConcurrentHashMap < JavaIoSerializable >

#pragma mark Public

- (id)getWithId:(id)key;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_ComputingMapAdapter)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_ComputingMapAdapter_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker_ComputingMapAdapter *self, ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_ComputingMapAdapter *new_ComGoogleCommonCollectMapMaker_ComputingMapAdapter_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_ComputingMapAdapter *create_ComGoogleCommonCollectMapMaker_ComputingMapAdapter_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *mapMaker, id<ComGoogleCommonBaseFunction> computingFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_ComputingMapAdapter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMapMaker")
