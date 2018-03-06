//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/SecurityException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangSecurityException")
#ifdef RESTRICT_JavaLangSecurityException
#define INCLUDE_ALL_JavaLangSecurityException 0
#else
#define INCLUDE_ALL_JavaLangSecurityException 1
#endif
#undef RESTRICT_JavaLangSecurityException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangSecurityException_) && (INCLUDE_ALL_JavaLangSecurityException || defined(INCLUDE_JavaLangSecurityException))
#define JavaLangSecurityException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown by the security manager to indicate a security violation.
 @author unascribed
 - seealso: java.lang.SecurityManager
 @since JDK1.0
 */
@interface JavaLangSecurityException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>SecurityException</code> with no detail  message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>SecurityException</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Creates a <code>SecurityException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>SecurityException</code> with the specified cause
  and a detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
  (which typically contains the class and detail message of 
 <tt>cause</tt>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangSecurityException)

FOUNDATION_EXPORT void JavaLangSecurityException_init(JavaLangSecurityException *self);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSecurityException *create_JavaLangSecurityException_init(void);

FOUNDATION_EXPORT void JavaLangSecurityException_initWithNSString_(JavaLangSecurityException *self, NSString *s);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSecurityException *create_JavaLangSecurityException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangSecurityException_initWithNSString_withJavaLangThrowable_(JavaLangSecurityException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSecurityException *create_JavaLangSecurityException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaLangSecurityException_initWithJavaLangThrowable_(JavaLangSecurityException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSecurityException *create_JavaLangSecurityException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSecurityException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangSecurityException")
