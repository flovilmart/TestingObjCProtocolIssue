//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/NameSpace.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsNameSpace")
#ifdef RESTRICT_OrgApacheXmlUtilsNameSpace
#define INCLUDE_ALL_OrgApacheXmlUtilsNameSpace 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsNameSpace 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsNameSpace

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsNameSpace_) && (INCLUDE_ALL_OrgApacheXmlUtilsNameSpace || defined(INCLUDE_OrgApacheXmlUtilsNameSpace))
#define OrgApacheXmlUtilsNameSpace_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief A representation of a namespace.One of these will
  be pushed on the namespace stack for each
  element.
 */
@interface OrgApacheXmlUtilsNameSpace : NSObject < JavaIoSerializable > {
 @public
  /*!
   @brief Next NameSpace element on the stack.
   */
  OrgApacheXmlUtilsNameSpace *m_next_;
  /*!
   @brief Prefix of this NameSpace element.
   */
  NSString *m_prefix_;
  /*!
   @brief Namespace URI of this NameSpace element.
   */
  NSString *m_uri_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a namespace for placement on the
  result tree namespace stack.
 @param prefix Prefix of this element
 @param uri URI of  this element
 */
- (instancetype)initWithNSString:(NSString *)prefix
                    withNSString:(NSString *)uri;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsNameSpace)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsNameSpace, m_next_, OrgApacheXmlUtilsNameSpace *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsNameSpace, m_prefix_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsNameSpace, m_uri_, NSString *)

inline jlong OrgApacheXmlUtilsNameSpace_get_serialVersionUID(void);
#define OrgApacheXmlUtilsNameSpace_serialVersionUID 1471232939184881839LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsNameSpace, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsNameSpace_initWithNSString_withNSString_(OrgApacheXmlUtilsNameSpace *self, NSString *prefix, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlUtilsNameSpace *new_OrgApacheXmlUtilsNameSpace_initWithNSString_withNSString_(NSString *prefix, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsNameSpace *create_OrgApacheXmlUtilsNameSpace_initWithNSString_withNSString_(NSString *prefix, NSString *uri);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsNameSpace)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsNameSpace")
