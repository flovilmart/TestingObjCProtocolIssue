//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/MalformedURLException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetMalformedURLException")
#ifdef RESTRICT_JavaNetMalformedURLException
#define INCLUDE_ALL_JavaNetMalformedURLException 0
#else
#define INCLUDE_ALL_JavaNetMalformedURLException 1
#endif
#undef RESTRICT_JavaNetMalformedURLException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetMalformedURLException_) && (INCLUDE_ALL_JavaNetMalformedURLException || defined(INCLUDE_JavaNetMalformedURLException))
#define JavaNetMalformedURLException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that a malformed URL has occurred.Either no
  legal protocol could be found in a specification string or the
  string could not be parsed.
 @author Arthur van Hoff
 @since JDK1.0
 */
@interface JavaNetMalformedURLException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>MalformedURLException</code> with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>MalformedURLException</code> with the
  specified detail message.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetMalformedURLException)

FOUNDATION_EXPORT void JavaNetMalformedURLException_init(JavaNetMalformedURLException *self);

FOUNDATION_EXPORT JavaNetMalformedURLException *new_JavaNetMalformedURLException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMalformedURLException *create_JavaNetMalformedURLException_init(void);

FOUNDATION_EXPORT void JavaNetMalformedURLException_initWithNSString_(JavaNetMalformedURLException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetMalformedURLException *new_JavaNetMalformedURLException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMalformedURLException *create_JavaNetMalformedURLException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetMalformedURLException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetMalformedURLException")
