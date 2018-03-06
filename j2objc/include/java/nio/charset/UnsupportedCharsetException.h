//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/UnsupportedCharsetException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetUnsupportedCharsetException")
#ifdef RESTRICT_JavaNioCharsetUnsupportedCharsetException
#define INCLUDE_ALL_JavaNioCharsetUnsupportedCharsetException 0
#else
#define INCLUDE_ALL_JavaNioCharsetUnsupportedCharsetException 1
#endif
#undef RESTRICT_JavaNioCharsetUnsupportedCharsetException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioCharsetUnsupportedCharsetException_) && (INCLUDE_ALL_JavaNioCharsetUnsupportedCharsetException || defined(INCLUDE_JavaNioCharsetUnsupportedCharsetException))
#define JavaNioCharsetUnsupportedCharsetException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when no support is available
  for a requested charset.
 @since 1.4
 */
@interface JavaNioCharsetUnsupportedCharsetException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 </p>
 @param charsetName The name of the unsupported charset
 */
- (instancetype)initWithNSString:(NSString *)charsetName;

/*!
 @brief Retrieves the name of the unsupported charset.
 </p>
 @return The name of the unsupported charset
 */
- (NSString *)getCharsetName;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetUnsupportedCharsetException)

FOUNDATION_EXPORT void JavaNioCharsetUnsupportedCharsetException_initWithNSString_(JavaNioCharsetUnsupportedCharsetException *self, NSString *charsetName);

FOUNDATION_EXPORT JavaNioCharsetUnsupportedCharsetException *new_JavaNioCharsetUnsupportedCharsetException_initWithNSString_(NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioCharsetUnsupportedCharsetException *create_JavaNioCharsetUnsupportedCharsetException_initWithNSString_(NSString *charsetName);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetUnsupportedCharsetException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetUnsupportedCharsetException")