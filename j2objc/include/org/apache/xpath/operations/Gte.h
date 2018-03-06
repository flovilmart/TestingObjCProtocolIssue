//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Gte.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsGte")
#ifdef RESTRICT_OrgApacheXpathOperationsGte
#define INCLUDE_ALL_OrgApacheXpathOperationsGte 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsGte 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsGte

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsGte_) && (INCLUDE_ALL_OrgApacheXpathOperationsGte || defined(INCLUDE_OrgApacheXpathOperationsGte))
#define OrgApacheXpathOperationsGte_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The '>=' operation expression executer.
 */
@interface OrgApacheXpathOperationsGte : OrgApacheXpathOperationsOperation

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsGte)

inline jlong OrgApacheXpathOperationsGte_get_serialVersionUID(void);
#define OrgApacheXpathOperationsGte_serialVersionUID 9142945909906680220LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsGte, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsGte_init(OrgApacheXpathOperationsGte *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsGte *new_OrgApacheXpathOperationsGte_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsGte *create_OrgApacheXpathOperationsGte_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsGte)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsGte")
