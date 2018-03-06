//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/hash/AbstractStreamingHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashAbstractStreamingHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractStreamingHashFunction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractStreamingHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHashFunction || defined(INCLUDE_ComGoogleCommonHashAbstractStreamingHashFunction))
#define ComGoogleCommonHashAbstractStreamingHashFunction_

#define RESTRICT_ComGoogleCommonHashHashFunction 1
#define INCLUDE_ComGoogleCommonHashHashFunction 1
#include "com/google/common/hash/HashFunction.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonHashAbstractStreamingHashFunction : NSObject < ComGoogleCommonHashHashFunction >

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input
                                                withInt:(jint)off
                                                withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashObjectWithId:(id)instance
                    withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)input
                                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractStreamingHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHashFunction_init(ComGoogleCommonHashAbstractStreamingHashFunction *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractStreamingHashFunction)

#endif

#if !defined (ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHashFunction || defined(INCLUDE_ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher))
#define ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher_

#define RESTRICT_ComGoogleCommonHashAbstractHasher 1
#define INCLUDE_ComGoogleCommonHashAbstractHasher 1
#include "com/google/common/hash/AbstractHasher.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioByteBuffer;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher : ComGoogleCommonHashAbstractHasher

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hash__;

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putObjectWithId:(id)instance
                   withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

- (id<ComGoogleCommonHashHasher>)putUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

#pragma mark Protected

- (instancetype)initWithInt:(jint)chunkSize;

- (instancetype)initWithInt:(jint)chunkSize
                    withInt:(jint)bufferSize;

- (void)processWithJavaNioByteBuffer:(JavaNioByteBuffer *)bb;

- (void)processRemainingWithJavaNioByteBuffer:(JavaNioByteBuffer *)bb;

#pragma mark Package-Private

- (ComGoogleCommonHashHashCode *)makeHash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher_initWithInt_(ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher *self, jint chunkSize);

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher_initWithInt_withInt_(ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher *self, jint chunkSize, jint bufferSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractStreamingHashFunction_AbstractStreamingHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHashFunction")
