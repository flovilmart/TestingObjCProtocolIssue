//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketPermission")
#ifdef RESTRICT_JavaNetSocketPermission
#define INCLUDE_ALL_JavaNetSocketPermission 0
#else
#define INCLUDE_ALL_JavaNetSocketPermission 1
#endif
#undef RESTRICT_JavaNetSocketPermission

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetSocketPermission_) && (INCLUDE_ALL_JavaNetSocketPermission || defined(INCLUDE_JavaNetSocketPermission))
#define JavaNetSocketPermission_

#define RESTRICT_JavaSecurityPermission 1
#define INCLUDE_JavaSecurityPermission 1
#include "java/security/Permission.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaNetSocketPermission : JavaSecurityPermission < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)host
                    withNSString:(NSString *)action;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)p;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketPermission)

FOUNDATION_EXPORT void JavaNetSocketPermission_initWithNSString_withNSString_(JavaNetSocketPermission *self, NSString *host, NSString *action);

FOUNDATION_EXPORT JavaNetSocketPermission *new_JavaNetSocketPermission_initWithNSString_withNSString_(NSString *host, NSString *action) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketPermission *create_JavaNetSocketPermission_initWithNSString_withNSString_(NSString *host, NSString *action);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketPermission)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketPermission")