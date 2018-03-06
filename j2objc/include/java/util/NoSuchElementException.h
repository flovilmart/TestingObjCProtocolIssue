//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/NoSuchElementException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilNoSuchElementException")
#ifdef RESTRICT_JavaUtilNoSuchElementException
#define INCLUDE_ALL_JavaUtilNoSuchElementException 0
#else
#define INCLUDE_ALL_JavaUtilNoSuchElementException 1
#endif
#undef RESTRICT_JavaUtilNoSuchElementException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilNoSuchElementException_) && (INCLUDE_ALL_JavaUtilNoSuchElementException || defined(INCLUDE_JavaUtilNoSuchElementException))
#define JavaUtilNoSuchElementException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown by the <code>nextElement</code> method of an 
 <code>Enumeration</code> to indicate that there are no more
  elements in the enumeration.
 @author unascribed
 - seealso: java.util.Enumeration
 - seealso: java.util.Enumeration
 @since JDK1.0
 */
@interface JavaUtilNoSuchElementException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>NoSuchElementException</code> with <tt>null</tt>
  as its error message string.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>NoSuchElementException</code>, saving a reference
  to the error message string <tt>s</tt> for later retrieval by the 
 <tt>getMessage</tt> method.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilNoSuchElementException)

FOUNDATION_EXPORT void JavaUtilNoSuchElementException_init(JavaUtilNoSuchElementException *self);

FOUNDATION_EXPORT JavaUtilNoSuchElementException *new_JavaUtilNoSuchElementException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilNoSuchElementException *create_JavaUtilNoSuchElementException_init(void);

FOUNDATION_EXPORT void JavaUtilNoSuchElementException_initWithNSString_(JavaUtilNoSuchElementException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilNoSuchElementException *new_JavaUtilNoSuchElementException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilNoSuchElementException *create_JavaUtilNoSuchElementException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilNoSuchElementException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilNoSuchElementException")