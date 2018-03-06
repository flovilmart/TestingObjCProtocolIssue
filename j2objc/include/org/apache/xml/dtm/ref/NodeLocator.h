//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/NodeLocator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefNodeLocator")
#ifdef RESTRICT_OrgApacheXmlDtmRefNodeLocator
#define INCLUDE_ALL_OrgApacheXmlDtmRefNodeLocator 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefNodeLocator 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefNodeLocator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefNodeLocator_) && (INCLUDE_ALL_OrgApacheXmlDtmRefNodeLocator || defined(INCLUDE_OrgApacheXmlDtmRefNodeLocator))
#define OrgApacheXmlDtmRefNodeLocator_

#define RESTRICT_JavaxXmlTransformSourceLocator 1
#define INCLUDE_JavaxXmlTransformSourceLocator 1
#include "javax/xml/transform/SourceLocator.h"

/*!
 @brief <code>NodeLocator</code> maintains information on an XML source
  node.
 @author <a href="mailto:ovidiu@@cup.hp.com">Ovidiu Predescu</a>
 @since May 23, 2001
 */
@interface OrgApacheXmlDtmRefNodeLocator : NSObject < JavaxXmlTransformSourceLocator > {
 @public
  NSString *m_publicId_;
  NSString *m_systemId_;
  jint m_lineNumber_;
  jint m_columnNumber_;
}

#pragma mark Public

/*!
 @brief Creates a new <code>NodeLocator</code> instance.
 @param publicId a  <code> String </code>  value
 @param systemId a  <code> String </code>  value
 @param lineNumber an  <code> int </code>  value
 @param columnNumber an  <code> int </code>  value
 */
- (instancetype)initWithNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId
                         withInt:(jint)lineNumber
                         withInt:(jint)columnNumber;

/*!
 @brief <code>getColumnNumber</code> returns the column number of the
  node.
 @return an <code>int</code> value
 */
- (jint)getColumnNumber;

/*!
 @brief <code>getLineNumber</code> returns the line number of the node.
 @return an <code>int</code> value
 */
- (jint)getLineNumber;

/*!
 @brief <code>getPublicId</code> returns the public ID of the node.
 @return a <code>String</code> value
 */
- (NSString *)getPublicId;

/*!
 @brief <code>getSystemId</code> returns the system ID of the node.
 @return a <code>String</code> value
 */
- (NSString *)getSystemId;

/*!
 @brief <code>toString</code> returns a string representation of this
  NodeLocator instance.
 @return a <code>String</code> value
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefNodeLocator)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefNodeLocator, m_publicId_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefNodeLocator, m_systemId_, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefNodeLocator_initWithNSString_withNSString_withInt_withInt_(OrgApacheXmlDtmRefNodeLocator *self, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber);

FOUNDATION_EXPORT OrgApacheXmlDtmRefNodeLocator *new_OrgApacheXmlDtmRefNodeLocator_initWithNSString_withNSString_withInt_withInt_(NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefNodeLocator *create_OrgApacheXmlDtmRefNodeLocator_initWithNSString_withNSString_withInt_withInt_(NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefNodeLocator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefNodeLocator")
