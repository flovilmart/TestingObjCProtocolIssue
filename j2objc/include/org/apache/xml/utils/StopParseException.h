//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/StopParseException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsStopParseException")
#ifdef RESTRICT_OrgApacheXmlUtilsStopParseException
#define INCLUDE_ALL_OrgApacheXmlUtilsStopParseException 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsStopParseException 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsStopParseException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsStopParseException_) && (INCLUDE_ALL_OrgApacheXmlUtilsStopParseException || defined(INCLUDE_OrgApacheXmlUtilsStopParseException))
#define OrgApacheXmlUtilsStopParseException_

#define RESTRICT_OrgXmlSaxSAXException 1
#define INCLUDE_OrgXmlSaxSAXException 1
#include "org/xml/sax/SAXException.h"

@class JavaLangException;

/*!
 @brief This is a special exception that is used to stop parsing when 
  search for an element.For instance, when searching for xml:stylesheet 
  PIs, it is used to stop the parse once the document element is found.
 - seealso: StylesheetPIHandler
 */
@interface OrgApacheXmlUtilsStopParseException : OrgXmlSaxSAXException

+ (jlong)serialVersionUID;

#pragma mark Package-Private

/*!
 @brief Constructor StopParseException.
 */
- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangException:(JavaLangException *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangException:(JavaLangException *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsStopParseException)

inline jlong OrgApacheXmlUtilsStopParseException_get_serialVersionUID(void);
#define OrgApacheXmlUtilsStopParseException_serialVersionUID 210102479218258961LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsStopParseException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsStopParseException_init(OrgApacheXmlUtilsStopParseException *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsStopParseException *new_OrgApacheXmlUtilsStopParseException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsStopParseException *create_OrgApacheXmlUtilsStopParseException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsStopParseException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsStopParseException")
