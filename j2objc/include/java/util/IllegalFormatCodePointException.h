//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/IllegalFormatCodePointException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilIllegalFormatCodePointException")
#ifdef RESTRICT_JavaUtilIllegalFormatCodePointException
#define INCLUDE_ALL_JavaUtilIllegalFormatCodePointException 0
#else
#define INCLUDE_ALL_JavaUtilIllegalFormatCodePointException 1
#endif
#undef RESTRICT_JavaUtilIllegalFormatCodePointException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIllegalFormatCodePointException_) && (INCLUDE_ALL_JavaUtilIllegalFormatCodePointException || defined(INCLUDE_JavaUtilIllegalFormatCodePointException))
#define JavaUtilIllegalFormatCodePointException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include "java/util/IllegalFormatException.h"

/*!
 @brief Unchecked exception thrown when a character with an invalid Unicode code
  point as defined by <code>Character.isValidCodePoint</code> is passed to the 
 <code>Formatter</code>.
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
  method or constructor in this class will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@interface JavaUtilIllegalFormatCodePointException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs an instance of this class with the specified illegal code
  point as defined by <code>Character.isValidCodePoint</code>.
 @param c The illegal Unicode code point
 */
- (instancetype)initWithInt:(jint)c;

/*!
 @brief Returns the illegal code point as defined by <code>Character.isValidCodePoint</code>
 .
 @return The illegal Unicode code point
 */
- (jint)getCodePoint;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatCodePointException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatCodePointException_initWithInt_(JavaUtilIllegalFormatCodePointException *self, jint c);

FOUNDATION_EXPORT JavaUtilIllegalFormatCodePointException *new_JavaUtilIllegalFormatCodePointException_initWithInt_(jint c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllegalFormatCodePointException *create_JavaUtilIllegalFormatCodePointException_initWithInt_(jint c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatCodePointException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilIllegalFormatCodePointException")