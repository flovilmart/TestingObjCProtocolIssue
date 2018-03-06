//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/KeyException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyException")
#ifdef RESTRICT_JavaSecurityKeyException
#define INCLUDE_ALL_JavaSecurityKeyException 0
#else
#define INCLUDE_ALL_JavaSecurityKeyException 1
#endif
#undef RESTRICT_JavaSecurityKeyException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyException_) && (INCLUDE_ALL_JavaSecurityKeyException || defined(INCLUDE_JavaSecurityKeyException))
#define JavaSecurityKeyException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This is the basic key exception.
 - seealso: Key
 - seealso: InvalidKeyException
 - seealso: KeyManagementException
 @author Benjamin Renaud
 */
@interface JavaSecurityKeyException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a KeyException with no detail message.A detail
  message is a String that describes this particular exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a KeyException with the specified detail message.
 A detail message is a String that describes this particular
  exception.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>KeyException</code> with the specified
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
 @brief Creates a <code>KeyException</code> with the specified cause
  and a detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
  (which typically contains the class and detail message of 
 <tt>cause</tt>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyException)

FOUNDATION_EXPORT void JavaSecurityKeyException_init(JavaSecurityKeyException *self);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_init(void);

FOUNDATION_EXPORT void JavaSecurityKeyException_initWithNSString_(JavaSecurityKeyException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityKeyException_initWithNSString_withJavaLangThrowable_(JavaSecurityKeyException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecurityKeyException_initWithJavaLangThrowable_(JavaSecurityKeyException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyException")
