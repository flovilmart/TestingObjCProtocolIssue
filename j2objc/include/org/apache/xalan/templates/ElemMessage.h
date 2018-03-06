//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemMessage.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemMessage")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemMessage
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemMessage 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemMessage 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemMessage_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemMessage || defined(INCLUDE_OrgApacheXalanTemplatesElemMessage))
#define OrgApacheXalanTemplatesElemMessage_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement xsl:message.
 @code

   <!ELEMENT xsl:message %template;>
   <!ATTLIST xsl:message
    %space-att;
    terminate (yes|no) "no" 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#message">message in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemMessage : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Send a message to diagnostics.
 The xsl:message instruction sends a message in a way that
  is dependent on the XSLT transformer. The content of the xsl:message
  instruction is a template. The xsl:message is instantiated by
  instantiating the content to create an XML fragment. This XML
  fragment is the content of the message.
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name.
 @return name of the element
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "terminate" attribute.
 If the terminate attribute has the value yes, then the
  XSLT transformer should terminate processing after sending
  the message. The default value is no.
 @return value of "terminate" attribute.
 */
- (jboolean)getTerminate;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Set the "terminate" attribute.
 If the terminate attribute has the value yes, then the
  XSLT transformer should terminate processing after sending
  the message. The default value is no.
 @param v Value to set for "terminate" attribute.
 */
- (void)setTerminateWithBoolean:(jboolean)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemMessage)

inline jlong OrgApacheXalanTemplatesElemMessage_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemMessage_serialVersionUID 1530472462155060023LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemMessage, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemMessage_init(OrgApacheXalanTemplatesElemMessage *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemMessage *new_OrgApacheXalanTemplatesElemMessage_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemMessage *create_OrgApacheXalanTemplatesElemMessage_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemMessage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemMessage")
