//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemVariablePsuedo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemVariablePsuedo")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemVariablePsuedo
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemVariablePsuedo 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemVariablePsuedo 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemVariablePsuedo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemVariablePsuedo_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemVariablePsuedo || defined(INCLUDE_OrgApacheXalanTemplatesElemVariablePsuedo))
#define OrgApacheXalanTemplatesElemVariablePsuedo_

#define RESTRICT_OrgApacheXalanTemplatesElemVariable 1
#define INCLUDE_OrgApacheXalanTemplatesElemVariable 1
#include "org/apache/xalan/templates/ElemVariable.h"

@class OrgApacheXalanTemplatesXUnresolvedVariableSimple;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathXPath;

@interface OrgApacheXalanTemplatesElemVariablePsuedo : OrgApacheXalanTemplatesElemVariable {
 @public
  OrgApacheXalanTemplatesXUnresolvedVariableSimple *m_lazyVar_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Execute a variable declaration and push it onto the variable stack.
 - seealso: <a href="http://www.w3.org/TR/xslt#variables">variables in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Set the "select" attribute.
 If the variable-binding element has a select attribute,
  then the value of the attribute must be an expression and
  the value of the variable is the object that results from
  evaluating the expression. In this case, the content
  of the variable must be empty.
 @param v Value to set for the "select" attribute.
 */
- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemVariablePsuedo)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemVariablePsuedo, m_lazyVar_, OrgApacheXalanTemplatesXUnresolvedVariableSimple *)

inline jlong OrgApacheXalanTemplatesElemVariablePsuedo_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemVariablePsuedo_serialVersionUID 692295692732588486LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemVariablePsuedo, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemVariablePsuedo_init(OrgApacheXalanTemplatesElemVariablePsuedo *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariablePsuedo *new_OrgApacheXalanTemplatesElemVariablePsuedo_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariablePsuedo *create_OrgApacheXalanTemplatesElemVariablePsuedo_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemVariablePsuedo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemVariablePsuedo")
