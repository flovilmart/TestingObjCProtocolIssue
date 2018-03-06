//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemText.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemText")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemText
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemText 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemText 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemText

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemText_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemText || defined(INCLUDE_OrgApacheXalanTemplatesElemText))
#define OrgApacheXalanTemplatesElemText_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

/*!
 @brief Implement xsl:template.
 This primarily acts as a marker on the element
  stack to signal that whitespace should be preserved. 
 @code

   <!ELEMENT xsl:text (#PCDATA)>
   <!ATTLIST xsl:text
    disable-output-escaping (yes|no) "no" 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Text">section-Creating-Text in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemText : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add a child to the child list.
 @param newChild Child to add to children list
 @return Child added to children list
 @throw DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Get the "disable-output-escaping" attribute.
 Normally, the xml output method escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output
  that is almost, but not quite well-formed XML; for
  example, the output may include ill-formed sections
  which are intended to be transformed into well-formed
  XML by a subsequent non-XML aware process. For this reason,
  XSLT provides a mechanism for disabling output escaping.
  An xsl:value-of or xsl:text element may have a
  disable-output-escaping attribute; the allowed values
  are yes or no; the default is no; if the value is yes,
  then a text node generated by instantiating the xsl:value-of
  or xsl:text element should be output without any escaping.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 @return Boolean flag indicating whether this element should disable escaping
 */
- (jboolean)getDisableOutputEscaping;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
      Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

/*!
 @brief Set the "disable-output-escaping" attribute.
 Normally, the xml output method escapes & and < (and
  possibly other characters) when outputting text nodes.
  This ensures that the output is well-formed XML. However,
  it is sometimes convenient to be able to produce output
  that is almost, but not quite well-formed XML; for
  example, the output may include ill-formed sections
  which are intended to be transformed into well-formed
  XML by a subsequent non-XML aware process. For this reason,
  XSLT provides a mechanism for disabling output escaping.
  An xsl:value-of or xsl:text element may have a
  disable-output-escaping attribute; the allowed values
  are yes or no; the default is no; if the value is yes,
  then a text node generated by instantiating the xsl:value-of
  or xsl:text element should be output without any escaping.
 - seealso: <a href="http://www.w3.org/TR/xslt#disable-output-escaping">disable-output-escaping in XSLT Specification</a>
 @param v Boolean flag indicating whether this element should disable escaping
 */
- (void)setDisableOutputEscapingWithBoolean:(jboolean)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemText)

inline jlong OrgApacheXalanTemplatesElemText_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemText_serialVersionUID 1383140876182316711LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemText, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemText_init(OrgApacheXalanTemplatesElemText *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemText *new_OrgApacheXalanTemplatesElemText_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemText *create_OrgApacheXalanTemplatesElemText_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemText)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemText")
