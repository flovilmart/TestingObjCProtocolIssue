//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/Closer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCloser")
#ifdef RESTRICT_ComGoogleCommonIoCloser
#define INCLUDE_ALL_ComGoogleCommonIoCloser 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCloser 1
#endif
#undef RESTRICT_ComGoogleCommonIoCloser
#ifdef INCLUDE_ComGoogleCommonIoCloser_SuppressingSuppressor
#define INCLUDE_ComGoogleCommonIoCloser_Suppressor 1
#endif
#ifdef INCLUDE_ComGoogleCommonIoCloser_LoggingSuppressor
#define INCLUDE_ComGoogleCommonIoCloser_Suppressor 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCloser_) && (INCLUDE_ALL_ComGoogleCommonIoCloser || defined(INCLUDE_ComGoogleCommonIoCloser))
#define ComGoogleCommonIoCloser_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class IOSClass;
@class JavaLangRuntimeException;
@class JavaLangThrowable;
@protocol ComGoogleCommonIoCloser_Suppressor;

@interface ComGoogleCommonIoCloser : NSObject < JavaIoCloseable > {
 @public
  id<ComGoogleCommonIoCloser_Suppressor> suppressor_;
}

#pragma mark Public

- (void)close;

+ (ComGoogleCommonIoCloser *)create;

- (id<JavaIoCloseable>)register__WithJavaIoCloseable:(id<JavaIoCloseable>)closeable;

- (JavaLangRuntimeException *)rethrowWithJavaLangThrowable:(JavaLangThrowable *)e;

- (JavaLangRuntimeException *)rethrowWithJavaLangThrowable:(JavaLangThrowable *)e
                                              withIOSClass:(IOSClass *)declaredType;

- (JavaLangRuntimeException *)rethrowWithJavaLangThrowable:(JavaLangThrowable *)e
                                              withIOSClass:(IOSClass *)declaredType1
                                              withIOSClass:(IOSClass *)declaredType2;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonIoCloser_Suppressor:(id<ComGoogleCommonIoCloser_Suppressor>)suppressor;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoCloser)

J2OBJC_FIELD_SETTER(ComGoogleCommonIoCloser, suppressor_, id<ComGoogleCommonIoCloser_Suppressor>)

FOUNDATION_EXPORT ComGoogleCommonIoCloser *ComGoogleCommonIoCloser_create(void);

FOUNDATION_EXPORT void ComGoogleCommonIoCloser_initWithComGoogleCommonIoCloser_Suppressor_(ComGoogleCommonIoCloser *self, id<ComGoogleCommonIoCloser_Suppressor> suppressor);

FOUNDATION_EXPORT ComGoogleCommonIoCloser *new_ComGoogleCommonIoCloser_initWithComGoogleCommonIoCloser_Suppressor_(id<ComGoogleCommonIoCloser_Suppressor> suppressor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCloser *create_ComGoogleCommonIoCloser_initWithComGoogleCommonIoCloser_Suppressor_(id<ComGoogleCommonIoCloser_Suppressor> suppressor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCloser)

#endif

#if !defined (ComGoogleCommonIoCloser_Suppressor_) && (INCLUDE_ALL_ComGoogleCommonIoCloser || defined(INCLUDE_ComGoogleCommonIoCloser_Suppressor))
#define ComGoogleCommonIoCloser_Suppressor_

@class JavaLangThrowable;
@protocol JavaIoCloseable;

@protocol ComGoogleCommonIoCloser_Suppressor < JavaObject >

- (void)suppressWithJavaIoCloseable:(id<JavaIoCloseable>)closeable
              withJavaLangThrowable:(JavaLangThrowable *)thrown
              withJavaLangThrowable:(JavaLangThrowable *)suppressed;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCloser_Suppressor)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCloser_Suppressor)

#endif

#if !defined (ComGoogleCommonIoCloser_LoggingSuppressor_) && (INCLUDE_ALL_ComGoogleCommonIoCloser || defined(INCLUDE_ComGoogleCommonIoCloser_LoggingSuppressor))
#define ComGoogleCommonIoCloser_LoggingSuppressor_

@class JavaLangThrowable;
@protocol JavaIoCloseable;

@interface ComGoogleCommonIoCloser_LoggingSuppressor : NSObject < ComGoogleCommonIoCloser_Suppressor >

#pragma mark Public

- (void)suppressWithJavaIoCloseable:(id<JavaIoCloseable>)closeable
              withJavaLangThrowable:(JavaLangThrowable *)thrown
              withJavaLangThrowable:(JavaLangThrowable *)suppressed;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoCloser_LoggingSuppressor)

inline ComGoogleCommonIoCloser_LoggingSuppressor *ComGoogleCommonIoCloser_LoggingSuppressor_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonIoCloser_LoggingSuppressor *ComGoogleCommonIoCloser_LoggingSuppressor_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonIoCloser_LoggingSuppressor, INSTANCE, ComGoogleCommonIoCloser_LoggingSuppressor *)

FOUNDATION_EXPORT void ComGoogleCommonIoCloser_LoggingSuppressor_init(ComGoogleCommonIoCloser_LoggingSuppressor *self);

FOUNDATION_EXPORT ComGoogleCommonIoCloser_LoggingSuppressor *new_ComGoogleCommonIoCloser_LoggingSuppressor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCloser_LoggingSuppressor *create_ComGoogleCommonIoCloser_LoggingSuppressor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCloser_LoggingSuppressor)

#endif

#if !defined (ComGoogleCommonIoCloser_SuppressingSuppressor_) && (INCLUDE_ALL_ComGoogleCommonIoCloser || defined(INCLUDE_ComGoogleCommonIoCloser_SuppressingSuppressor))
#define ComGoogleCommonIoCloser_SuppressingSuppressor_

@class JavaLangReflectMethod;
@class JavaLangThrowable;
@protocol JavaIoCloseable;

@interface ComGoogleCommonIoCloser_SuppressingSuppressor : NSObject < ComGoogleCommonIoCloser_Suppressor >

#pragma mark Public

- (void)suppressWithJavaIoCloseable:(id<JavaIoCloseable>)closeable
              withJavaLangThrowable:(JavaLangThrowable *)thrown
              withJavaLangThrowable:(JavaLangThrowable *)suppressed;

#pragma mark Package-Private

- (instancetype)init;

+ (jboolean)isAvailable;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoCloser_SuppressingSuppressor)

inline ComGoogleCommonIoCloser_SuppressingSuppressor *ComGoogleCommonIoCloser_SuppressingSuppressor_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonIoCloser_SuppressingSuppressor *ComGoogleCommonIoCloser_SuppressingSuppressor_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonIoCloser_SuppressingSuppressor, INSTANCE, ComGoogleCommonIoCloser_SuppressingSuppressor *)

inline JavaLangReflectMethod *ComGoogleCommonIoCloser_SuppressingSuppressor_get_addSuppressed(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaLangReflectMethod *ComGoogleCommonIoCloser_SuppressingSuppressor_addSuppressed;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonIoCloser_SuppressingSuppressor, addSuppressed, JavaLangReflectMethod *)

FOUNDATION_EXPORT void ComGoogleCommonIoCloser_SuppressingSuppressor_init(ComGoogleCommonIoCloser_SuppressingSuppressor *self);

FOUNDATION_EXPORT ComGoogleCommonIoCloser_SuppressingSuppressor *new_ComGoogleCommonIoCloser_SuppressingSuppressor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCloser_SuppressingSuppressor *create_ComGoogleCommonIoCloser_SuppressingSuppressor_init(void);

FOUNDATION_EXPORT jboolean ComGoogleCommonIoCloser_SuppressingSuppressor_isAvailable(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCloser_SuppressingSuppressor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCloser")
