//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/FuncFormatNumb.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb")
#ifdef RESTRICT_OrgApacheXalanTemplatesFuncFormatNumb
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesFuncFormatNumb

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesFuncFormatNumb_) && (INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb || defined(INCLUDE_OrgApacheXalanTemplatesFuncFormatNumb))
#define OrgApacheXalanTemplatesFuncFormatNumb_

#define RESTRICT_OrgApacheXpathFunctionsFunction3Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction3Args 1
#include "org/apache/xpath/functions/Function3Args.h"

@class IOSObjectArray;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the FormatNumber() function.
 */
@interface OrgApacheXalanTemplatesFuncFormatNumb : OrgApacheXpathFunctionsFunction3Args

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Overide the superclass method to allow one or two arguments.
 @param argNum Number of arguments passed in
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Warn the user of a problem.
 @param xctxt The XPath runtime state.
 @param msg Warning message key
 @param args Arguments to be used in warning message
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw javax.xml.transform.TransformerException
 */
- (void)warnWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                              withNSString:(NSString *)msg
                         withNSObjectArray:(IOSObjectArray *)args;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesFuncFormatNumb)

inline jlong OrgApacheXalanTemplatesFuncFormatNumb_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesFuncFormatNumb_serialVersionUID -8869935264870858636LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesFuncFormatNumb, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesFuncFormatNumb_init(OrgApacheXalanTemplatesFuncFormatNumb *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncFormatNumb *new_OrgApacheXalanTemplatesFuncFormatNumb_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncFormatNumb *create_OrgApacheXalanTemplatesFuncFormatNumb_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesFuncFormatNumb)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb")