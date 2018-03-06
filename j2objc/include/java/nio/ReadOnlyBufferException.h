//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/ReadOnlyBufferException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioReadOnlyBufferException")
#ifdef RESTRICT_JavaNioReadOnlyBufferException
#define INCLUDE_ALL_JavaNioReadOnlyBufferException 0
#else
#define INCLUDE_ALL_JavaNioReadOnlyBufferException 1
#endif
#undef RESTRICT_JavaNioReadOnlyBufferException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioReadOnlyBufferException_) && (INCLUDE_ALL_JavaNioReadOnlyBufferException || defined(INCLUDE_JavaNioReadOnlyBufferException))
#define JavaNioReadOnlyBufferException_

#define RESTRICT_JavaLangUnsupportedOperationException 1
#define INCLUDE_JavaLangUnsupportedOperationException 1
#include "java/lang/UnsupportedOperationException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when a content-mutation method such as 
 <tt>put</tt> or <tt>compact</tt> is invoked upon a read-only buffer.
 @since 1.4
 */
@interface JavaNioReadOnlyBufferException : JavaLangUnsupportedOperationException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioReadOnlyBufferException)

FOUNDATION_EXPORT void JavaNioReadOnlyBufferException_init(JavaNioReadOnlyBufferException *self);

FOUNDATION_EXPORT JavaNioReadOnlyBufferException *new_JavaNioReadOnlyBufferException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioReadOnlyBufferException *create_JavaNioReadOnlyBufferException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioReadOnlyBufferException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioReadOnlyBufferException")