//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncExtFunctionAvailable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtFunctionAvailable")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncExtFunctionAvailable
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtFunctionAvailable 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtFunctionAvailable 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncExtFunctionAvailable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncExtFunctionAvailable_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtFunctionAvailable || defined(INCLUDE_OrgApacheXpathFunctionsFuncExtFunctionAvailable))
#define OrgApacheXpathFunctionsFuncExtFunctionAvailable_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathCompilerFunctionTable;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the ExtFunctionAvailable() function.
 */
@interface OrgApacheXpathFunctionsFuncExtFunctionAvailable : OrgApacheXpathFunctionsFunctionOneArg

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief The function table is an instance field.In order to access this instance 
  field during evaluation, this method is called at compilation time to
  insert function table information for later usage.
 It should only be used
  during compiling of XPath expressions.
 @param aTable an instance of the function table
 */
- (void)setFunctionTableWithOrgApacheXpathCompilerFunctionTable:(OrgApacheXpathCompilerFunctionTable *)aTable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncExtFunctionAvailable)

inline jlong OrgApacheXpathFunctionsFuncExtFunctionAvailable_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncExtFunctionAvailable_serialVersionUID 5118814314918592241LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncExtFunctionAvailable, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncExtFunctionAvailable_init(OrgApacheXpathFunctionsFuncExtFunctionAvailable *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncExtFunctionAvailable *new_OrgApacheXpathFunctionsFuncExtFunctionAvailable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncExtFunctionAvailable *create_OrgApacheXpathFunctionsFuncExtFunctionAvailable_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncExtFunctionAvailable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncExtFunctionAvailable")
