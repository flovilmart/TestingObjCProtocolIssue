//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/Arg.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathArg")
#ifdef RESTRICT_OrgApacheXpathArg
#define INCLUDE_ALL_OrgApacheXpathArg 0
#else
#define INCLUDE_ALL_OrgApacheXpathArg 1
#endif
#undef RESTRICT_OrgApacheXpathArg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathArg_) && (INCLUDE_ALL_OrgApacheXpathArg || defined(INCLUDE_OrgApacheXpathArg))
#define OrgApacheXpathArg_

@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;

/*!
 @brief This class holds an instance of an argument on
  the stack.The value of the argument can be either an
  XObject or a String containing an expression.
 */
@interface OrgApacheXpathArg : NSObject

#pragma mark Public

/*!
 @brief Construct a dummy parameter argument, with no QName and no
  value (either expression string or value XObject).isVisible
  defaults to true.
 */
- (instancetype)init;

/*!
 @brief Construct a parameter argument that contains an expression.
 @param qname Name of the argument, expressed as a QName object.
 @param expression String to be stored as this argument's value expression.
 @param isFromWithParam True if this is a parameter variable.
 */
- (instancetype)initWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname
                                  withNSString:(NSString *)expression
                                   withBoolean:(jboolean)isFromWithParam;

/*!
 @brief Construct a parameter argument which has an XObject value.
 isVisible defaults to true.
 @param qname Name of the argument, expressed as a QName object.
 @param val Value of the argument, expressed as an XObject
 */
- (instancetype)initWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname
              withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val;

/*!
 @brief Construct a parameter argument.
 @param qname Name of the argument, expressed as a QName object.
 @param val Value of the argument, expressed as an XObject
 @param isFromWithParam True if this is a parameter variable.
 */
- (instancetype)initWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname
              withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val
                                   withBoolean:(jboolean)isFromWithParam;

/*!
 @brief Have the object release it's resources.
 Call only when the variable or argument is going out of scope.
 */
- (void)detach;

/*!
 @brief Equality function specialized for the variable name.If the argument 
  is not a qname, it will deligate to the super class.
 @param obj the reference object with which to compare.
 @return <code>true</code> if this object is the same as the obj
           argument; <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Get the value expression for this argument.
 @return String containing the expression previously stored into this
  argument
 - seealso: #setExpression
 */
- (NSString *)getExpression;

/*!
 @brief Get the qualified name for this argument.
 @return QName object containing the qualified name
 */
- (OrgApacheXmlUtilsQName *)getQName;

/*!
 @brief Get the value for this argument.
 @return the argument's stored XObject value.
 - seealso: #setVal(XObject)
 */
- (OrgApacheXpathObjectsXObject *)getVal;

/*!
 @brief Tell if this variable is a parameter passed with a with-param or as 
  a top-level parameter.
 */
- (jboolean)isFromWithParam;

/*!
 @brief Tell if this variable is currently visible.
 */
- (jboolean)isVisible;

/*!
 @brief Set the value expression for this argument.
 @param expr String containing the expression to be stored as this  argument's value.
 - seealso: #getExpression
 */
- (void)setExpressionWithNSString:(NSString *)expr;

/*!
 @brief Update visibility status of this variable.
 */
- (void)setIsVisibleWithBoolean:(jboolean)b;

/*!
 @brief Set the qualified name for this argument.
 @param name QName object representing the new Qualified Name.
 */
- (void)setQNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

/*!
 @brief Set the value of this argument.
 @param val an XObject representing the arguments's value.
 - seealso: #getVal()
 */
- (void)setValWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathArg)

FOUNDATION_EXPORT void OrgApacheXpathArg_init(OrgApacheXpathArg *self);

FOUNDATION_EXPORT OrgApacheXpathArg *new_OrgApacheXpathArg_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathArg *create_OrgApacheXpathArg_init(void);

FOUNDATION_EXPORT void OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withNSString_withBoolean_(OrgApacheXpathArg *self, OrgApacheXmlUtilsQName *qname, NSString *expression, jboolean isFromWithParam);

FOUNDATION_EXPORT OrgApacheXpathArg *new_OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withNSString_withBoolean_(OrgApacheXmlUtilsQName *qname, NSString *expression, jboolean isFromWithParam) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathArg *create_OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withNSString_withBoolean_(OrgApacheXmlUtilsQName *qname, NSString *expression, jboolean isFromWithParam);

FOUNDATION_EXPORT void OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withOrgApacheXpathObjectsXObject_(OrgApacheXpathArg *self, OrgApacheXmlUtilsQName *qname, OrgApacheXpathObjectsXObject *val);

FOUNDATION_EXPORT OrgApacheXpathArg *new_OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withOrgApacheXpathObjectsXObject_(OrgApacheXmlUtilsQName *qname, OrgApacheXpathObjectsXObject *val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathArg *create_OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withOrgApacheXpathObjectsXObject_(OrgApacheXmlUtilsQName *qname, OrgApacheXpathObjectsXObject *val);

FOUNDATION_EXPORT void OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withOrgApacheXpathObjectsXObject_withBoolean_(OrgApacheXpathArg *self, OrgApacheXmlUtilsQName *qname, OrgApacheXpathObjectsXObject *val, jboolean isFromWithParam);

FOUNDATION_EXPORT OrgApacheXpathArg *new_OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withOrgApacheXpathObjectsXObject_withBoolean_(OrgApacheXmlUtilsQName *qname, OrgApacheXpathObjectsXObject *val, jboolean isFromWithParam) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathArg *create_OrgApacheXpathArg_initWithOrgApacheXmlUtilsQName_withOrgApacheXpathObjectsXObject_withBoolean_(OrgApacheXmlUtilsQName *qname, OrgApacheXpathObjectsXObject *val, jboolean isFromWithParam);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathArg)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathArg")
