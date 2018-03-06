//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/AbsPathChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAbsPathChecker")
#ifdef RESTRICT_OrgApacheXalanTemplatesAbsPathChecker
#define INCLUDE_ALL_OrgApacheXalanTemplatesAbsPathChecker 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesAbsPathChecker 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesAbsPathChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesAbsPathChecker_) && (INCLUDE_ALL_OrgApacheXalanTemplatesAbsPathChecker || defined(INCLUDE_OrgApacheXalanTemplatesAbsPathChecker))
#define OrgApacheXalanTemplatesAbsPathChecker_

#define RESTRICT_OrgApacheXpathXPathVisitor 1
#define INCLUDE_OrgApacheXpathXPathVisitor 1
#include "org/apache/xpath/XPathVisitor.h"

@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathFunctionsFunction;
@class OrgApacheXpathOperationsVariable;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief This class runs over a path expression that is assumed to be absolute, and 
  checks for variables and the like that may make it context dependent.
 */
@interface OrgApacheXalanTemplatesAbsPathChecker : OrgApacheXpathXPathVisitor

#pragma mark Public

- (instancetype)init;

/*!
 @brief Process the LocPathIterator to see if it contains variables 
  or functions that may make it context dependent.
 @param path LocPathIterator that is assumed to be absolute, but needs checking.
 @return true if the path is confirmed to be absolute, false if it 
  may contain context dependencies.
 */
- (jboolean)checkAbsoluteWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)path;

/*!
 @brief Visit a function.
 @param owner The owner of the expression, to which the expression can                be reset if rewriting takes place.
 @param func The function reference object.
 @return true if the sub expressions should be traversed.
 */
- (jboolean)visitFunctionWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathFunctionsFunction:(OrgApacheXpathFunctionsFunction *)func;

/*!
 @brief Visit a variable reference.
 @param owner The owner of the expression, to which the expression can                be reset if rewriting takes place.
 @param var The variable reference object.
 @return true if the sub expressions should be traversed.
 */
- (jboolean)visitVariableRefWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                         withOrgApacheXpathOperationsVariable:(OrgApacheXpathOperationsVariable *)var;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesAbsPathChecker)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesAbsPathChecker_init(OrgApacheXalanTemplatesAbsPathChecker *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesAbsPathChecker *new_OrgApacheXalanTemplatesAbsPathChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesAbsPathChecker *create_OrgApacheXalanTemplatesAbsPathChecker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesAbsPathChecker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAbsPathChecker")
