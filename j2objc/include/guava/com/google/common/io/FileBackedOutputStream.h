//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/FileBackedOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream")
#ifdef RESTRICT_ComGoogleCommonIoFileBackedOutputStream
#define INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream 1
#endif
#undef RESTRICT_ComGoogleCommonIoFileBackedOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoFileBackedOutputStream_) && (INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream || defined(INCLUDE_ComGoogleCommonIoFileBackedOutputStream))
#define ComGoogleCommonIoFileBackedOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class ComGoogleCommonIoByteSource;
@class IOSByteArray;
@class JavaIoFile;

@interface ComGoogleCommonIoFileBackedOutputStream : JavaIoOutputStream

#pragma mark Public

- (instancetype)initWithInt:(jint)fileThreshold;

- (instancetype)initWithInt:(jint)fileThreshold
                withBoolean:(jboolean)resetOnFinalize;

- (ComGoogleCommonIoByteSource *)asByteSource;

- (void)close;

- (void)flush;

- (void)reset;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

#pragma mark Package-Private

- (JavaIoFile *)getFile;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoFileBackedOutputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoFileBackedOutputStream_initWithInt_(ComGoogleCommonIoFileBackedOutputStream *self, jint fileThreshold);

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *new_ComGoogleCommonIoFileBackedOutputStream_initWithInt_(jint fileThreshold) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *create_ComGoogleCommonIoFileBackedOutputStream_initWithInt_(jint fileThreshold);

FOUNDATION_EXPORT void ComGoogleCommonIoFileBackedOutputStream_initWithInt_withBoolean_(ComGoogleCommonIoFileBackedOutputStream *self, jint fileThreshold, jboolean resetOnFinalize);

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *new_ComGoogleCommonIoFileBackedOutputStream_initWithInt_withBoolean_(jint fileThreshold, jboolean resetOnFinalize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoFileBackedOutputStream *create_ComGoogleCommonIoFileBackedOutputStream_initWithInt_withBoolean_(jint fileThreshold, jboolean resetOnFinalize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFileBackedOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoFileBackedOutputStream")
