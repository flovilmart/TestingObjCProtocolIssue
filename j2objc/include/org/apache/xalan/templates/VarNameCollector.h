//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/VarNameCollector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesVarNameCollector")
#ifdef RESTRICT_OrgApacheXalanTemplatesVarNameCollector
#define INCLUDE_ALL_OrgApacheXalanTemplatesVarNameCollector 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesVarNameCollector 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesVarNameCollector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesVarNameCollector_) && (INCLUDE_ALL_OrgApacheXalanTemplatesVarNameCollector || defined(INCLUDE_OrgApacheXalanTemplatesVarNameCollector))
#define OrgApacheXalanTemplatesVarNameCollector_

#define RESTRICT_OrgApacheXpathXPathVisitor 1
#define INCLUDE_OrgApacheXpathXPathVisitor 1
#include "org/apache/xpath/XPathVisitor.h"

@class JavaUtilVector;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathOperationsVariable;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief This class visits variable refs in an XPath and collects their QNames.
 */
@interface OrgApacheXalanTemplatesVarNameCollector : OrgApacheXpathXPathVisitor {
 @public
  JavaUtilVector *m_refs_;
}

#pragma mark Public

- (instancetype)init;

/*!
 @brief Get the number of variable references that were collected.
 @return the size of the list.
 */
- (jint)getVarCount;

/*!
 @brief Reset the list for a fresh visitation and collection.
 */
- (void)reset;

/*!
 @brief Visit a variable reference.
 @param owner The owner of the expression, to which the expression can                be reset if rewriting takes place.
 @param var The variable reference object.
 @return true if the sub expressions should be traversed.
 */
- (jboolean)visitVariableRefWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                         withOrgApacheXpathOperationsVariable:(OrgApacheXpathOperationsVariable *)var;

#pragma mark Package-Private

/*!
 @brief Tell if the given qualified name occurs in 
  the list of qualified names collected.
 @param refName Must be a valid qualified name.
 @return true if the list contains the qualified name.
 */
- (jboolean)doesOccurWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)refName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesVarNameCollector)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesVarNameCollector, m_refs_, JavaUtilVector *)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesVarNameCollector_init(OrgApacheXalanTemplatesVarNameCollector *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesVarNameCollector *new_OrgApacheXalanTemplatesVarNameCollector_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesVarNameCollector *create_OrgApacheXalanTemplatesVarNameCollector_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesVarNameCollector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesVarNameCollector")
