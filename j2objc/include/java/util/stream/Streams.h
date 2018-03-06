//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/stream/Streams.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStreamStreams")
#ifdef RESTRICT_JavaUtilStreamStreams
#define INCLUDE_ALL_JavaUtilStreamStreams 0
#else
#define INCLUDE_ALL_JavaUtilStreamStreams 1
#endif
#undef RESTRICT_JavaUtilStreamStreams
#ifdef INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfDouble
#define INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfLong
#define INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfInt
#define INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive
#define INCLUDE_JavaUtilStreamStreams_ConcatSpliterator 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfRef
#define INCLUDE_JavaUtilStreamStreams_ConcatSpliterator 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_DoubleStreamBuilderImpl
#define INCLUDE_JavaUtilStreamStreams_AbstractStreamBuilderImpl 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_LongStreamBuilderImpl
#define INCLUDE_JavaUtilStreamStreams_AbstractStreamBuilderImpl 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_IntStreamBuilderImpl
#define INCLUDE_JavaUtilStreamStreams_AbstractStreamBuilderImpl 1
#endif
#ifdef INCLUDE_JavaUtilStreamStreams_StreamBuilderImpl
#define INCLUDE_JavaUtilStreamStreams_AbstractStreamBuilderImpl 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilStreamStreams_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams))
#define JavaUtilStreamStreams_

@protocol JavaLangRunnable;
@protocol JavaUtilStreamBaseStream;

/*!
 @brief Utility methods for operating on and creating streams.
 <p>Unless otherwise stated, streams are created as sequential streams.  A
  sequential stream can be transformed into a parallel stream by calling the 
 <code>parallel()</code> method on the created stream.
 @since 1.8
 */
@interface JavaUtilStreamStreams : NSObject

+ (id)NONE;

#pragma mark Package-Private

/*!
 @brief Given two streams, return a Runnable that
  executes both of their <code>BaseStream.close</code> methods in sequence,
  even if the first throws an exception, and if both throw exceptions, add
  any exceptions thrown by the second as suppressed exceptions of the first.
 */
+ (id<JavaLangRunnable>)composedCloseWithJavaUtilStreamBaseStream:(id<JavaUtilStreamBaseStream>)a
                                     withJavaUtilStreamBaseStream:(id<JavaUtilStreamBaseStream>)b;

/*!
 @brief Given two Runnables, return a Runnable that executes both in sequence,
  even if the first throws an exception, and if both throw exceptions, add
  any exceptions thrown by the second as suppressed exceptions of the first.
 */
+ (id<JavaLangRunnable>)composeWithExceptionsWithJavaLangRunnable:(id<JavaLangRunnable>)a
                                             withJavaLangRunnable:(id<JavaLangRunnable>)b;

@end

J2OBJC_STATIC_INIT(JavaUtilStreamStreams)

/*!
 @brief An object instance representing no value, that cannot be an actual
  data element of a stream.Used when processing streams that can contain 
 <code>null</code> elements to distinguish between a <code>null</code> value and no
  value.
 */
inline id JavaUtilStreamStreams_get_NONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id JavaUtilStreamStreams_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilStreamStreams, NONE, id)

FOUNDATION_EXPORT id<JavaLangRunnable> JavaUtilStreamStreams_composeWithExceptionsWithJavaLangRunnable_withJavaLangRunnable_(id<JavaLangRunnable> a, id<JavaLangRunnable> b);

FOUNDATION_EXPORT id<JavaLangRunnable> JavaUtilStreamStreams_composedCloseWithJavaUtilStreamBaseStream_withJavaUtilStreamBaseStream_(id<JavaUtilStreamBaseStream> a, id<JavaUtilStreamBaseStream> b);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams)

#endif

#if !defined (JavaUtilStreamStreams_RangeIntSpliterator_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_RangeIntSpliterator))
#define JavaUtilStreamStreams_RangeIntSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfInt 1
#include "java/util/Spliterator.h"

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionIntConsumer;

/*!
 @brief An <code>int</code> range spliterator.
 */
@interface JavaUtilStreamStreams_RangeIntSpliterator : NSObject < JavaUtilSpliterator_OfInt >

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionIntConsumer>)consumer;

- (id<JavaUtilComparator>)getComparator;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionIntConsumer>)consumer;

- (id<JavaUtilSpliterator_OfInt>)trySplit;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)from
                    withInt:(jint)upTo
                withBoolean:(jboolean)closed;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_RangeIntSpliterator)

FOUNDATION_EXPORT void JavaUtilStreamStreams_RangeIntSpliterator_initWithInt_withInt_withBoolean_(JavaUtilStreamStreams_RangeIntSpliterator *self, jint from, jint upTo, jboolean closed);

FOUNDATION_EXPORT JavaUtilStreamStreams_RangeIntSpliterator *new_JavaUtilStreamStreams_RangeIntSpliterator_initWithInt_withInt_withBoolean_(jint from, jint upTo, jboolean closed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_RangeIntSpliterator *create_JavaUtilStreamStreams_RangeIntSpliterator_initWithInt_withInt_withBoolean_(jint from, jint upTo, jboolean closed);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_RangeIntSpliterator)

#endif

#if !defined (JavaUtilStreamStreams_RangeLongSpliterator_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_RangeLongSpliterator))
#define JavaUtilStreamStreams_RangeLongSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfLong 1
#include "java/util/Spliterator.h"

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionLongConsumer;

/*!
 @brief A <code>long</code> range spliterator.
 This implementation cannot be used for ranges whose size is greater
  than Long.MAX_VALUE
 */
@interface JavaUtilStreamStreams_RangeLongSpliterator : NSObject < JavaUtilSpliterator_OfLong >

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionLongConsumer>)consumer;

- (id<JavaUtilComparator>)getComparator;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionLongConsumer>)consumer;

- (id<JavaUtilSpliterator_OfLong>)trySplit;

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)from
                    withLong:(jlong)upTo
                 withBoolean:(jboolean)closed;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_RangeLongSpliterator)

FOUNDATION_EXPORT void JavaUtilStreamStreams_RangeLongSpliterator_initWithLong_withLong_withBoolean_(JavaUtilStreamStreams_RangeLongSpliterator *self, jlong from, jlong upTo, jboolean closed);

FOUNDATION_EXPORT JavaUtilStreamStreams_RangeLongSpliterator *new_JavaUtilStreamStreams_RangeLongSpliterator_initWithLong_withLong_withBoolean_(jlong from, jlong upTo, jboolean closed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_RangeLongSpliterator *create_JavaUtilStreamStreams_RangeLongSpliterator_initWithLong_withLong_withBoolean_(jlong from, jlong upTo, jboolean closed);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_RangeLongSpliterator)

#endif

#if !defined (JavaUtilStreamStreams_AbstractStreamBuilderImpl_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_AbstractStreamBuilderImpl))
#define JavaUtilStreamStreams_AbstractStreamBuilderImpl_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilStreamStreams_AbstractStreamBuilderImpl : NSObject < JavaUtilSpliterator > {
 @public
  jint count_;
}

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (id<JavaUtilSpliterator>)trySplit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_AbstractStreamBuilderImpl)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_AbstractStreamBuilderImpl)

#endif

#if !defined (JavaUtilStreamStreams_StreamBuilderImpl_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_StreamBuilderImpl))
#define JavaUtilStreamStreams_StreamBuilderImpl_

#define RESTRICT_JavaUtilStreamStream 1
#define INCLUDE_JavaUtilStreamStream_Builder 1
#include "java/util/stream/Stream.h"

@class JavaUtilStreamSpinedBuffer;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilStreamStream;

@interface JavaUtilStreamStreams_StreamBuilderImpl : JavaUtilStreamStreams_AbstractStreamBuilderImpl < JavaUtilStreamStream_Builder > {
 @public
  id first_;
  JavaUtilStreamSpinedBuffer *buffer_;
}

#pragma mark Public

- (void)acceptWithId:(id)t;

- (id<JavaUtilStreamStream_Builder>)addWithId:(id)t;

- (id<JavaUtilStreamStream>)build;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

#pragma mark Package-Private

/*!
 @brief Constructor for building a stream of 0 or more elements.
 */
- (instancetype)init;

/*!
 @brief Constructor for a singleton stream.
 @param t the single element
 */
- (instancetype)initWithId:(id)t;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_StreamBuilderImpl)

J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_StreamBuilderImpl, first_, id)
J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_StreamBuilderImpl, buffer_, JavaUtilStreamSpinedBuffer *)

FOUNDATION_EXPORT void JavaUtilStreamStreams_StreamBuilderImpl_init(JavaUtilStreamStreams_StreamBuilderImpl *self);

FOUNDATION_EXPORT JavaUtilStreamStreams_StreamBuilderImpl *new_JavaUtilStreamStreams_StreamBuilderImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_StreamBuilderImpl *create_JavaUtilStreamStreams_StreamBuilderImpl_init(void);

FOUNDATION_EXPORT void JavaUtilStreamStreams_StreamBuilderImpl_initWithId_(JavaUtilStreamStreams_StreamBuilderImpl *self, id t);

FOUNDATION_EXPORT JavaUtilStreamStreams_StreamBuilderImpl *new_JavaUtilStreamStreams_StreamBuilderImpl_initWithId_(id t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_StreamBuilderImpl *create_JavaUtilStreamStreams_StreamBuilderImpl_initWithId_(id t);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_StreamBuilderImpl)

#endif

#if !defined (JavaUtilStreamStreams_IntStreamBuilderImpl_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_IntStreamBuilderImpl))
#define JavaUtilStreamStreams_IntStreamBuilderImpl_

#define RESTRICT_JavaUtilStreamIntStream 1
#define INCLUDE_JavaUtilStreamIntStream_Builder 1
#include "java/util/stream/IntStream.h"

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfInt 1
#include "java/util/Spliterator.h"

@class JavaUtilStreamSpinedBuffer_OfInt;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionIntConsumer;
@protocol JavaUtilStreamIntStream;

@interface JavaUtilStreamStreams_IntStreamBuilderImpl : JavaUtilStreamStreams_AbstractStreamBuilderImpl < JavaUtilStreamIntStream_Builder, JavaUtilSpliterator_OfInt > {
 @public
  jint first_;
  JavaUtilStreamSpinedBuffer_OfInt *buffer_;
}

#pragma mark Public

- (void)acceptWithInt:(jint)t;

- (id<JavaUtilStreamIntStream>)build;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionIntConsumer>)action;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionIntConsumer>)action;

#pragma mark Package-Private

/*!
 @brief Constructor for building a stream of 0 or more elements.
 */
- (instancetype)init;

/*!
 @brief Constructor for a singleton stream.
 @param t the single element
 */
- (instancetype)initWithInt:(jint)t;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_IntStreamBuilderImpl)

J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_IntStreamBuilderImpl, buffer_, JavaUtilStreamSpinedBuffer_OfInt *)

FOUNDATION_EXPORT void JavaUtilStreamStreams_IntStreamBuilderImpl_init(JavaUtilStreamStreams_IntStreamBuilderImpl *self);

FOUNDATION_EXPORT JavaUtilStreamStreams_IntStreamBuilderImpl *new_JavaUtilStreamStreams_IntStreamBuilderImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_IntStreamBuilderImpl *create_JavaUtilStreamStreams_IntStreamBuilderImpl_init(void);

FOUNDATION_EXPORT void JavaUtilStreamStreams_IntStreamBuilderImpl_initWithInt_(JavaUtilStreamStreams_IntStreamBuilderImpl *self, jint t);

FOUNDATION_EXPORT JavaUtilStreamStreams_IntStreamBuilderImpl *new_JavaUtilStreamStreams_IntStreamBuilderImpl_initWithInt_(jint t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_IntStreamBuilderImpl *create_JavaUtilStreamStreams_IntStreamBuilderImpl_initWithInt_(jint t);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_IntStreamBuilderImpl)

#endif

#if !defined (JavaUtilStreamStreams_LongStreamBuilderImpl_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_LongStreamBuilderImpl))
#define JavaUtilStreamStreams_LongStreamBuilderImpl_

#define RESTRICT_JavaUtilStreamLongStream 1
#define INCLUDE_JavaUtilStreamLongStream_Builder 1
#include "java/util/stream/LongStream.h"

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfLong 1
#include "java/util/Spliterator.h"

@class JavaUtilStreamSpinedBuffer_OfLong;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionLongConsumer;
@protocol JavaUtilStreamLongStream;

@interface JavaUtilStreamStreams_LongStreamBuilderImpl : JavaUtilStreamStreams_AbstractStreamBuilderImpl < JavaUtilStreamLongStream_Builder, JavaUtilSpliterator_OfLong > {
 @public
  jlong first_;
  JavaUtilStreamSpinedBuffer_OfLong *buffer_;
}

#pragma mark Public

- (void)acceptWithLong:(jlong)t;

- (id<JavaUtilStreamLongStream>)build;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionLongConsumer>)action;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionLongConsumer>)action;

#pragma mark Package-Private

/*!
 @brief Constructor for building a stream of 0 or more elements.
 */
- (instancetype)init;

/*!
 @brief Constructor for a singleton stream.
 @param t the single element
 */
- (instancetype)initWithLong:(jlong)t;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_LongStreamBuilderImpl)

J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_LongStreamBuilderImpl, buffer_, JavaUtilStreamSpinedBuffer_OfLong *)

FOUNDATION_EXPORT void JavaUtilStreamStreams_LongStreamBuilderImpl_init(JavaUtilStreamStreams_LongStreamBuilderImpl *self);

FOUNDATION_EXPORT JavaUtilStreamStreams_LongStreamBuilderImpl *new_JavaUtilStreamStreams_LongStreamBuilderImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_LongStreamBuilderImpl *create_JavaUtilStreamStreams_LongStreamBuilderImpl_init(void);

FOUNDATION_EXPORT void JavaUtilStreamStreams_LongStreamBuilderImpl_initWithLong_(JavaUtilStreamStreams_LongStreamBuilderImpl *self, jlong t);

FOUNDATION_EXPORT JavaUtilStreamStreams_LongStreamBuilderImpl *new_JavaUtilStreamStreams_LongStreamBuilderImpl_initWithLong_(jlong t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_LongStreamBuilderImpl *create_JavaUtilStreamStreams_LongStreamBuilderImpl_initWithLong_(jlong t);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_LongStreamBuilderImpl)

#endif

#if !defined (JavaUtilStreamStreams_DoubleStreamBuilderImpl_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_DoubleStreamBuilderImpl))
#define JavaUtilStreamStreams_DoubleStreamBuilderImpl_

#define RESTRICT_JavaUtilStreamDoubleStream 1
#define INCLUDE_JavaUtilStreamDoubleStream_Builder 1
#include "java/util/stream/DoubleStream.h"

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfDouble 1
#include "java/util/Spliterator.h"

@class JavaUtilStreamSpinedBuffer_OfDouble;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionDoubleConsumer;
@protocol JavaUtilStreamDoubleStream;

@interface JavaUtilStreamStreams_DoubleStreamBuilderImpl : JavaUtilStreamStreams_AbstractStreamBuilderImpl < JavaUtilStreamDoubleStream_Builder, JavaUtilSpliterator_OfDouble > {
 @public
  jdouble first_;
  JavaUtilStreamSpinedBuffer_OfDouble *buffer_;
}

#pragma mark Public

- (void)acceptWithDouble:(jdouble)t;

- (id<JavaUtilStreamDoubleStream>)build;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

#pragma mark Package-Private

/*!
 @brief Constructor for building a stream of 0 or more elements.
 */
- (instancetype)init;

/*!
 @brief Constructor for a singleton stream.
 @param t the single element
 */
- (instancetype)initWithDouble:(jdouble)t;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_DoubleStreamBuilderImpl)

J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_DoubleStreamBuilderImpl, buffer_, JavaUtilStreamSpinedBuffer_OfDouble *)

FOUNDATION_EXPORT void JavaUtilStreamStreams_DoubleStreamBuilderImpl_init(JavaUtilStreamStreams_DoubleStreamBuilderImpl *self);

FOUNDATION_EXPORT JavaUtilStreamStreams_DoubleStreamBuilderImpl *new_JavaUtilStreamStreams_DoubleStreamBuilderImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_DoubleStreamBuilderImpl *create_JavaUtilStreamStreams_DoubleStreamBuilderImpl_init(void);

FOUNDATION_EXPORT void JavaUtilStreamStreams_DoubleStreamBuilderImpl_initWithDouble_(JavaUtilStreamStreams_DoubleStreamBuilderImpl *self, jdouble t);

FOUNDATION_EXPORT JavaUtilStreamStreams_DoubleStreamBuilderImpl *new_JavaUtilStreamStreams_DoubleStreamBuilderImpl_initWithDouble_(jdouble t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_DoubleStreamBuilderImpl *create_JavaUtilStreamStreams_DoubleStreamBuilderImpl_initWithDouble_(jdouble t);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_DoubleStreamBuilderImpl)

#endif

#if !defined (JavaUtilStreamStreams_ConcatSpliterator_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_ConcatSpliterator))
#define JavaUtilStreamStreams_ConcatSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

@interface JavaUtilStreamStreams_ConcatSpliterator : NSObject < JavaUtilSpliterator > {
 @public
  id<JavaUtilSpliterator> aSpliterator_;
  id<JavaUtilSpliterator> bSpliterator_;
  jboolean beforeSplit_;
  jboolean unsized_;
}

#pragma mark Public

- (instancetype)initWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)aSpliterator
                    withJavaUtilSpliterator:(id<JavaUtilSpliterator>)bSpliterator;

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)consumer;

- (id<JavaUtilComparator>)getComparator;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)consumer;

- (id<JavaUtilSpliterator>)trySplit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_ConcatSpliterator)

J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_ConcatSpliterator, aSpliterator_, id<JavaUtilSpliterator>)
J2OBJC_FIELD_SETTER(JavaUtilStreamStreams_ConcatSpliterator, bSpliterator_, id<JavaUtilSpliterator>)

FOUNDATION_EXPORT void JavaUtilStreamStreams_ConcatSpliterator_initWithJavaUtilSpliterator_withJavaUtilSpliterator_(JavaUtilStreamStreams_ConcatSpliterator *self, id<JavaUtilSpliterator> aSpliterator, id<JavaUtilSpliterator> bSpliterator);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_ConcatSpliterator)

#endif

#if !defined (JavaUtilStreamStreams_ConcatSpliterator_OfRef_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfRef))
#define JavaUtilStreamStreams_ConcatSpliterator_OfRef_

@protocol JavaUtilSpliterator;

@interface JavaUtilStreamStreams_ConcatSpliterator_OfRef : JavaUtilStreamStreams_ConcatSpliterator

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)aSpliterator
                    withJavaUtilSpliterator:(id<JavaUtilSpliterator>)bSpliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_ConcatSpliterator_OfRef)

FOUNDATION_EXPORT void JavaUtilStreamStreams_ConcatSpliterator_OfRef_initWithJavaUtilSpliterator_withJavaUtilSpliterator_(JavaUtilStreamStreams_ConcatSpliterator_OfRef *self, id<JavaUtilSpliterator> aSpliterator, id<JavaUtilSpliterator> bSpliterator);

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfRef *new_JavaUtilStreamStreams_ConcatSpliterator_OfRef_initWithJavaUtilSpliterator_withJavaUtilSpliterator_(id<JavaUtilSpliterator> aSpliterator, id<JavaUtilSpliterator> bSpliterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfRef *create_JavaUtilStreamStreams_ConcatSpliterator_OfRef_initWithJavaUtilSpliterator_withJavaUtilSpliterator_(id<JavaUtilSpliterator> aSpliterator, id<JavaUtilSpliterator> bSpliterator);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_ConcatSpliterator_OfRef)

#endif

#if !defined (JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive))
#define JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#include "java/util/Spliterator.h"

@interface JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive : JavaUtilStreamStreams_ConcatSpliterator < JavaUtilSpliterator_OfPrimitive >

#pragma mark Public

- (void)forEachRemainingWithId:(id)action;

- (jboolean)tryAdvanceWithId:(id)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive)

#endif

#if !defined (JavaUtilStreamStreams_ConcatSpliterator_OfInt_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfInt))
#define JavaUtilStreamStreams_ConcatSpliterator_OfInt_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfInt 1
#include "java/util/Spliterator.h"

@interface JavaUtilStreamStreams_ConcatSpliterator_OfInt : JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive < JavaUtilSpliterator_OfInt >

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfInt:(id<JavaUtilSpliterator_OfInt>)aSpliterator
                    withJavaUtilSpliterator_OfInt:(id<JavaUtilSpliterator_OfInt>)bSpliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_ConcatSpliterator_OfInt)

FOUNDATION_EXPORT void JavaUtilStreamStreams_ConcatSpliterator_OfInt_initWithJavaUtilSpliterator_OfInt_withJavaUtilSpliterator_OfInt_(JavaUtilStreamStreams_ConcatSpliterator_OfInt *self, id<JavaUtilSpliterator_OfInt> aSpliterator, id<JavaUtilSpliterator_OfInt> bSpliterator);

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfInt *new_JavaUtilStreamStreams_ConcatSpliterator_OfInt_initWithJavaUtilSpliterator_OfInt_withJavaUtilSpliterator_OfInt_(id<JavaUtilSpliterator_OfInt> aSpliterator, id<JavaUtilSpliterator_OfInt> bSpliterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfInt *create_JavaUtilStreamStreams_ConcatSpliterator_OfInt_initWithJavaUtilSpliterator_OfInt_withJavaUtilSpliterator_OfInt_(id<JavaUtilSpliterator_OfInt> aSpliterator, id<JavaUtilSpliterator_OfInt> bSpliterator);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_ConcatSpliterator_OfInt)

#endif

#if !defined (JavaUtilStreamStreams_ConcatSpliterator_OfLong_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfLong))
#define JavaUtilStreamStreams_ConcatSpliterator_OfLong_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfLong 1
#include "java/util/Spliterator.h"

@interface JavaUtilStreamStreams_ConcatSpliterator_OfLong : JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive < JavaUtilSpliterator_OfLong >

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfLong:(id<JavaUtilSpliterator_OfLong>)aSpliterator
                    withJavaUtilSpliterator_OfLong:(id<JavaUtilSpliterator_OfLong>)bSpliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_ConcatSpliterator_OfLong)

FOUNDATION_EXPORT void JavaUtilStreamStreams_ConcatSpliterator_OfLong_initWithJavaUtilSpliterator_OfLong_withJavaUtilSpliterator_OfLong_(JavaUtilStreamStreams_ConcatSpliterator_OfLong *self, id<JavaUtilSpliterator_OfLong> aSpliterator, id<JavaUtilSpliterator_OfLong> bSpliterator);

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfLong *new_JavaUtilStreamStreams_ConcatSpliterator_OfLong_initWithJavaUtilSpliterator_OfLong_withJavaUtilSpliterator_OfLong_(id<JavaUtilSpliterator_OfLong> aSpliterator, id<JavaUtilSpliterator_OfLong> bSpliterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfLong *create_JavaUtilStreamStreams_ConcatSpliterator_OfLong_initWithJavaUtilSpliterator_OfLong_withJavaUtilSpliterator_OfLong_(id<JavaUtilSpliterator_OfLong> aSpliterator, id<JavaUtilSpliterator_OfLong> bSpliterator);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_ConcatSpliterator_OfLong)

#endif

#if !defined (JavaUtilStreamStreams_ConcatSpliterator_OfDouble_) && (INCLUDE_ALL_JavaUtilStreamStreams || defined(INCLUDE_JavaUtilStreamStreams_ConcatSpliterator_OfDouble))
#define JavaUtilStreamStreams_ConcatSpliterator_OfDouble_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfDouble 1
#include "java/util/Spliterator.h"

@interface JavaUtilStreamStreams_ConcatSpliterator_OfDouble : JavaUtilStreamStreams_ConcatSpliterator_OfPrimitive < JavaUtilSpliterator_OfDouble >

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfDouble:(id<JavaUtilSpliterator_OfDouble>)aSpliterator
                    withJavaUtilSpliterator_OfDouble:(id<JavaUtilSpliterator_OfDouble>)bSpliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreams_ConcatSpliterator_OfDouble)

FOUNDATION_EXPORT void JavaUtilStreamStreams_ConcatSpliterator_OfDouble_initWithJavaUtilSpliterator_OfDouble_withJavaUtilSpliterator_OfDouble_(JavaUtilStreamStreams_ConcatSpliterator_OfDouble *self, id<JavaUtilSpliterator_OfDouble> aSpliterator, id<JavaUtilSpliterator_OfDouble> bSpliterator);

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfDouble *new_JavaUtilStreamStreams_ConcatSpliterator_OfDouble_initWithJavaUtilSpliterator_OfDouble_withJavaUtilSpliterator_OfDouble_(id<JavaUtilSpliterator_OfDouble> aSpliterator, id<JavaUtilSpliterator_OfDouble> bSpliterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStreamStreams_ConcatSpliterator_OfDouble *create_JavaUtilStreamStreams_ConcatSpliterator_OfDouble_initWithJavaUtilSpliterator_OfDouble_withJavaUtilSpliterator_OfDouble_(id<JavaUtilSpliterator_OfDouble> aSpliterator, id<JavaUtilSpliterator_OfDouble> bSpliterator);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreams_ConcatSpliterator_OfDouble)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilStreamStreams")