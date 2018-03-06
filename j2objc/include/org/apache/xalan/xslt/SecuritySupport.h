//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/xslt/SecuritySupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport")
#ifdef RESTRICT_OrgApacheXalanXsltSecuritySupport
#define INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXalanXsltSecuritySupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanXsltSecuritySupport_) && (INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport || defined(INCLUDE_OrgApacheXalanXsltSecuritySupport))
#define OrgApacheXalanXsltSecuritySupport_

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each Xalan-Java subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the Xalan-Java
  API.
  Base class with security related methods that work on JDK 1.1.
 */
@interface OrgApacheXalanXsltSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Return an appropriate instance of this class, depending on whether
  we're on a JDK 1.1 or J2SE 1.2 (or later) system.
 */
+ (OrgApacheXalanXsltSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_STATIC_INIT(OrgApacheXalanXsltSecuritySupport)

FOUNDATION_EXPORT void OrgApacheXalanXsltSecuritySupport_init(OrgApacheXalanXsltSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXalanXsltSecuritySupport *new_OrgApacheXalanXsltSecuritySupport_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanXsltSecuritySupport *create_OrgApacheXalanXsltSecuritySupport_init(void);

FOUNDATION_EXPORT OrgApacheXalanXsltSecuritySupport *OrgApacheXalanXsltSecuritySupport_getInstance(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanXsltSecuritySupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport")