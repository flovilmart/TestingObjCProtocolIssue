//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/net/NSErrorException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcNetNSErrorException")
#ifdef RESTRICT_ComGoogleJ2objcNetNSErrorException
#define INCLUDE_ALL_ComGoogleJ2objcNetNSErrorException 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcNetNSErrorException 1
#endif
#undef RESTRICT_ComGoogleJ2objcNetNSErrorException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ComGoogleJ2objcNetNSErrorException_) && (INCLUDE_ALL_ComGoogleJ2objcNetNSErrorException || defined(INCLUDE_ComGoogleJ2objcNetNSErrorException))
#define ComGoogleJ2objcNetNSErrorException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief A wrapper class for an NSError, which is documented here:
  https://developer.apple.com/library/mac/documentation/Cocoa/Reference/Foundation/Classes/NSError_Class/
 */
@interface ComGoogleJ2objcNetNSErrorException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithId:(id)nsError;

/*!
 @brief Returns the error domain for this NSError.
 */
- (NSString *)getDomain;

/*!
 @brief Returns the native NSError code.
 */
- (jlong)getErrorCode;

/*!
 @brief Returns the name of the NSError code, or null if not known.
 */
- (NSString *)getErrorName;

/*!
 @brief Returns the failing URL string, or null if not defined
  by this NSError.
 */
- (NSString *)getFailingURLString;

/*!
 @brief Returns the native NSError instance.
 */
- (id)getNSError;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcNetNSErrorException)

FOUNDATION_EXPORT void ComGoogleJ2objcNetNSErrorException_initWithId_(ComGoogleJ2objcNetNSErrorException *self, id nsError);

FOUNDATION_EXPORT ComGoogleJ2objcNetNSErrorException *new_ComGoogleJ2objcNetNSErrorException_initWithId_(id nsError) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleJ2objcNetNSErrorException *create_ComGoogleJ2objcNetNSErrorException_initWithId_(id nsError);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcNetNSErrorException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcNetNSErrorException")
