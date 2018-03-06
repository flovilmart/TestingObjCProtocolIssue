//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorStripSpace.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorStripSpace")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorStripSpace
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorStripSpace 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorStripSpace 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorStripSpace

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorStripSpace_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorStripSpace || defined(INCLUDE_OrgApacheXalanProcessorProcessorStripSpace))
#define OrgApacheXalanProcessorProcessorStripSpace_

#define RESTRICT_OrgApacheXalanProcessorProcessorPreserveSpace 1
#define INCLUDE_OrgApacheXalanProcessorProcessorPreserveSpace 1
#include "org/apache/xalan/processor/ProcessorPreserveSpace.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@protocol OrgXmlSaxAttributes;

/*!
 @brief TransformerFactory for xsl:strip-space markup.
 @code

   <!ELEMENT xsl:strip-space EMPTY>
   <!ATTLIST xsl:strip-space elements CDATA #REQUIRED>
   
@endcode
 */
@interface OrgApacheXalanProcessorProcessorStripSpace : OrgApacheXalanProcessorProcessorPreserveSpace

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Receive notification of the start of an strip-space element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param rawName The raw XML 1.0 name (with prefix), or the         empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorStripSpace)

inline jlong OrgApacheXalanProcessorProcessorStripSpace_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorStripSpace_serialVersionUID -5594493198637899591LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorStripSpace, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorStripSpace_init(OrgApacheXalanProcessorProcessorStripSpace *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorStripSpace *new_OrgApacheXalanProcessorProcessorStripSpace_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorStripSpace *create_OrgApacheXalanProcessorProcessorStripSpace_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorStripSpace)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorStripSpace")
