//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorExsltFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFunction")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorExsltFunction
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFunction 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFunction 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorExsltFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorExsltFunction_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFunction || defined(INCLUDE_OrgApacheXalanProcessorProcessorExsltFunction))
#define OrgApacheXalanProcessorProcessorExsltFunction_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "org/apache/xalan/processor/ProcessorTemplateElem.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemTemplateElement;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This class processes parse events for an exslt func:function element.
 */
@interface OrgApacheXalanProcessorProcessorExsltFunction : OrgApacheXalanProcessorProcessorTemplateElem

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief End an ElemExsltFunction, and verify its validity.
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

/*!
 @brief Start an ElemExsltFunction.Verify that it is top level and that it has a name attribute with a
  namespace.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

/*!
 @brief Non-recursive traversal of FunctionElement tree based on TreeWalker to verify that
  there are no literal result elements except within a func:result element and that
  the func:result element does not contain any following siblings except xsl:fallback.
 */
- (void)validateWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem
                  withOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler;

#pragma mark Protected

/*!
 @brief Must include; super doesn't suffice!
 */
- (void)appendAndPushWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                   withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

#pragma mark Package-Private

/*!
 @brief Verify that a literal result belongs to a result element, a variable, 
  or a parameter.
 */
- (jboolean)ancestorIsOkWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)child;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorExsltFunction)

inline jlong OrgApacheXalanProcessorProcessorExsltFunction_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorExsltFunction_serialVersionUID 2411427965578315332LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorExsltFunction, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorExsltFunction_init(OrgApacheXalanProcessorProcessorExsltFunction *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorExsltFunction *new_OrgApacheXalanProcessorProcessorExsltFunction_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorExsltFunction *create_OrgApacheXalanProcessorProcessorExsltFunction_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorExsltFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFunction")
