//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ExceptionInInitializerError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangExceptionInInitializerError")
#ifdef RESTRICT_JavaLangExceptionInInitializerError
#define INCLUDE_ALL_JavaLangExceptionInInitializerError 0
#else
#define INCLUDE_ALL_JavaLangExceptionInInitializerError 1
#endif
#undef RESTRICT_JavaLangExceptionInInitializerError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangExceptionInInitializerError_) && (INCLUDE_ALL_JavaLangExceptionInInitializerError || defined(INCLUDE_JavaLangExceptionInInitializerError))
#define JavaLangExceptionInInitializerError_

#define RESTRICT_JavaLangLinkageError 1
#define INCLUDE_JavaLangLinkageError 1
#include "java/lang/LinkageError.h"

@class JavaLangThrowable;

/*!
 @brief Signals that an unexpected exception has occurred in a static initializer.
 An <code>ExceptionInInitializerError</code> is thrown to indicate that an
  exception occurred during evaluation of a static initializer or the
  initializer for a static variable. 
 <p>As of release 1.4, this exception has been retrofitted to conform to
  the general purpose exception-chaining mechanism.  The "saved throwable
  object" that may be provided at construction time and accessed via
  the <code>getException()</code> method is now known as the <i>cause</i>,
  and may be accessed via the <code>Throwable.getCause()</code> method, as well
  as the aforementioned "legacy method."
 @author Frank Yellin
 @since JDK1.1
 */
@interface JavaLangExceptionInInitializerError : JavaLangLinkageError

#pragma mark Public

/*!
 @brief Constructs an <code>ExceptionInInitializerError</code> with 
 <code>null</code> as its detail message string and with no saved
  throwable object.
 A detail message is a String that describes this particular exception.
 */
- (instancetype)init;

/*!
 @brief Constructs an ExceptionInInitializerError with the specified detail
  message string.A detail message is a String that describes this
  particular exception.
 The detail message string is saved for later
  retrieval by the <code>Throwable.getMessage()</code> method. There is no
  saved throwable object.
 @param s the detail message
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Constructs a new <code>ExceptionInInitializerError</code> class by
  saving a reference to the <code>Throwable</code> object thrown for
  later retrieval by the <code>getException()</code> method.The detail
  message string is set to <code>null</code>.
 @param thrown The exception thrown
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)thrown;

/*!
 @brief Returns the cause of this error (the exception that occurred
  during a static initialization that caused this error to be created).
 @return the cause of this error or <code>null</code> if the
           cause is nonexistent or unknown.
 @since 1.4
 */
- (JavaLangThrowable *)getCause;

/*!
 @brief Returns the exception that occurred during a static initialization that
  caused this error to be created.
 <p>This method predates the general-purpose exception chaining facility.
  The <code>Throwable.getCause()</code> method is now the preferred means of
  obtaining this information.
 @return the saved throwable object of this
          <code>ExceptionInInitializerError</code>, or <code>null</code>
          if this <code>ExceptionInInitializerError</code> has no saved
          throwable object.
 */
- (JavaLangThrowable *)getException;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangExceptionInInitializerError)

FOUNDATION_EXPORT void JavaLangExceptionInInitializerError_init(JavaLangExceptionInInitializerError *self);

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *new_JavaLangExceptionInInitializerError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *create_JavaLangExceptionInInitializerError_init(void);

FOUNDATION_EXPORT void JavaLangExceptionInInitializerError_initWithJavaLangThrowable_(JavaLangExceptionInInitializerError *self, JavaLangThrowable *thrown);

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *new_JavaLangExceptionInInitializerError_initWithJavaLangThrowable_(JavaLangThrowable *thrown) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *create_JavaLangExceptionInInitializerError_initWithJavaLangThrowable_(JavaLangThrowable *thrown);

FOUNDATION_EXPORT void JavaLangExceptionInInitializerError_initWithNSString_(JavaLangExceptionInInitializerError *self, NSString *s);

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *new_JavaLangExceptionInInitializerError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *create_JavaLangExceptionInInitializerError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangExceptionInInitializerError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangExceptionInInitializerError")
