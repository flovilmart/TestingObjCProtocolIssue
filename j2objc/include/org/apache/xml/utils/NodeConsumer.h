//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/NodeConsumer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsNodeConsumer")
#ifdef RESTRICT_OrgApacheXmlUtilsNodeConsumer
#define INCLUDE_ALL_OrgApacheXmlUtilsNodeConsumer 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsNodeConsumer 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsNodeConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsNodeConsumer_) && (INCLUDE_ALL_OrgApacheXmlUtilsNodeConsumer || defined(INCLUDE_OrgApacheXmlUtilsNodeConsumer))
#define OrgApacheXmlUtilsNodeConsumer_

@protocol OrgW3cDomNode;

/*!
 @brief The tree walker will test for this interface, and call
  setOriginatingNode before calling the SAX event.For creating
  DOM backpointers for things that are normally created via
  SAX events.
 */
@protocol OrgApacheXmlUtilsNodeConsumer < JavaObject >

/*!
 @brief Set the node that is originating the SAX event.
 @param n Reference to node that originated the current event.
 */
- (void)setOriginatingNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsNodeConsumer)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsNodeConsumer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsNodeConsumer")
