//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XNodeSetForDOM.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNodeSetForDOM")
#ifdef RESTRICT_OrgApacheXpathObjectsXNodeSetForDOM
#define INCLUDE_ALL_OrgApacheXpathObjectsXNodeSetForDOM 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXNodeSetForDOM 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXNodeSetForDOM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathObjectsXNodeSetForDOM_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSetForDOM || defined(INCLUDE_OrgApacheXpathObjectsXNodeSetForDOM))
#define OrgApacheXpathObjectsXNodeSetForDOM_

#define RESTRICT_OrgApacheXpathObjectsXNodeSet 1
#define INCLUDE_OrgApacheXpathObjectsXNodeSet 1
#include "org/apache/xpath/objects/XNodeSet.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTraversalNodeIterator;

/*!
 @brief This class overrides the XNodeSet#object() method to provide the original 
  Node object, NodeList object, or NodeIterator.
 */
@interface OrgApacheXpathObjectsXNodeSetForDOM : OrgApacheXpathObjectsXNodeSet {
 @public
  id m_origObj_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
        withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmMgr;

- (instancetype)initWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)nodeIter
                        withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (instancetype)initWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodeList
           withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Construct a XNodeSet object.
 @param val Value of the XNodeSet object
 */
- (instancetype)initWithOrgApacheXpathObjectsXNodeSet:(OrgApacheXpathObjectsXNodeSet *)val;

/*!
 @brief Cast result object to a nodelist.Always issues an error.
 @return null
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgW3cDomNodeList>)nodelist;

/*!
 @brief Cast result object to a nodelist.Always issues an error.
 @return null
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgW3cDomTraversalNodeIterator>)nodeset;

/*!
 @brief Return the original DOM object that the user passed in.For use primarily
  by the extension mechanism.
 @return The object that this class wraps
 */
- (id)object;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0
withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)arg0 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXNodeSetForDOM)

J2OBJC_FIELD_SETTER(OrgApacheXpathObjectsXNodeSetForDOM, m_origObj_, id)

inline jlong OrgApacheXpathObjectsXNodeSetForDOM_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXNodeSetForDOM_serialVersionUID -8396190713754624640LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXNodeSetForDOM, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomNode_withOrgApacheXmlDtmDTMManager_(OrgApacheXpathObjectsXNodeSetForDOM *self, id<OrgW3cDomNode> node, OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *new_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomNode_withOrgApacheXmlDtmDTMManager_(id<OrgW3cDomNode> node, OrgApacheXmlDtmDTMManager *dtmMgr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *create_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomNode_withOrgApacheXmlDtmDTMManager_(id<OrgW3cDomNode> node, OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSetForDOM *self, OrgApacheXpathObjectsXNodeSet *val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *new_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *create_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *val);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomNodeList_withOrgApacheXpathXPathContext_(OrgApacheXpathObjectsXNodeSetForDOM *self, id<OrgW3cDomNodeList> nodeList, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *new_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomNodeList_withOrgApacheXpathXPathContext_(id<OrgW3cDomNodeList> nodeList, OrgApacheXpathXPathContext *xctxt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *create_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomNodeList_withOrgApacheXpathXPathContext_(id<OrgW3cDomNodeList> nodeList, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomTraversalNodeIterator_withOrgApacheXpathXPathContext_(OrgApacheXpathObjectsXNodeSetForDOM *self, id<OrgW3cDomTraversalNodeIterator> nodeIter, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *new_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomTraversalNodeIterator_withOrgApacheXpathXPathContext_(id<OrgW3cDomTraversalNodeIterator> nodeIter, OrgApacheXpathXPathContext *xctxt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSetForDOM *create_OrgApacheXpathObjectsXNodeSetForDOM_initWithOrgW3cDomTraversalNodeIterator_withOrgApacheXpathXPathContext_(id<OrgW3cDomTraversalNodeIterator> nodeIter, OrgApacheXpathXPathContext *xctxt);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXNodeSetForDOM)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNodeSetForDOM")
