//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncSubstringAfter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstringAfter")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncSubstringAfter
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstringAfter 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstringAfter 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncSubstringAfter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncSubstringAfter_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstringAfter || defined(INCLUDE_OrgApacheXpathFunctionsFuncSubstringAfter))
#define OrgApacheXpathFunctionsFuncSubstringAfter_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "org/apache/xpath/functions/Function2Args.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the SubstringAfter() function.
 */
@interface OrgApacheXpathFunctionsFuncSubstringAfter : OrgApacheXpathFunctionsFunction2Args

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

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncSubstringAfter)

inline jlong OrgApacheXpathFunctionsFuncSubstringAfter_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncSubstringAfter_serialVersionUID -8119731889862512194LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncSubstringAfter, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncSubstringAfter_init(OrgApacheXpathFunctionsFuncSubstringAfter *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSubstringAfter *new_OrgApacheXpathFunctionsFuncSubstringAfter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSubstringAfter *create_OrgApacheXpathFunctionsFuncSubstringAfter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncSubstringAfter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstringAfter")
