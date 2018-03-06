//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemExsltFuncResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemExsltFuncResult
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemExsltFuncResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemExsltFuncResult_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult || defined(INCLUDE_OrgApacheXalanTemplatesElemExsltFuncResult))
#define OrgApacheXalanTemplatesElemExsltFuncResult_

#define RESTRICT_OrgApacheXalanTemplatesElemVariable 1
#define INCLUDE_OrgApacheXalanTemplatesElemVariable 1
#include "org/apache/xalan/templates/ElemVariable.h"

@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Handles the EXSLT result element within an EXSLT function element.
 */
@interface OrgApacheXalanTemplatesElemExsltFuncResult : OrgApacheXalanTemplatesElemVariable

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Generate the EXSLT function return value, and assign it to the variable
  index slot assigned for it in ElemExsltFunction compose().
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name, defined in the
      Constants class.
 - seealso: org.apache.xalan.templates.Constants
 @return The node name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
      Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemExsltFuncResult)

inline jlong OrgApacheXalanTemplatesElemExsltFuncResult_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemExsltFuncResult_serialVersionUID -3478311949388304563LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemExsltFuncResult, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemExsltFuncResult_init(OrgApacheXalanTemplatesElemExsltFuncResult *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExsltFuncResult *new_OrgApacheXalanTemplatesElemExsltFuncResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExsltFuncResult *create_OrgApacheXalanTemplatesElemExsltFuncResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemExsltFuncResult)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult")
