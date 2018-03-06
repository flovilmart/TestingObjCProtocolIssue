//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMNodeIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMNodeIterator
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMNodeIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefDTMNodeIterator_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator || defined(INCLUDE_OrgApacheXmlDtmRefDTMNodeIterator))
#define OrgApacheXmlDtmRefDTMNodeIterator_

#define RESTRICT_OrgW3cDomTraversalNodeIterator 1
#define INCLUDE_OrgW3cDomTraversalNodeIterator 1
#include "org/w3c/dom/traversal/NodeIterator.h"

@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeFilter;

/*!
 @brief <code>DTMNodeIterator</code> gives us an implementation of the 
  DTMNodeIterator which returns DOM nodes.
 Please note that this is not necessarily equivlaent to a DOM
  NodeIterator operating over the same document. In particular: 
 <ul>
  
 <li>If there are several Text nodes in logical succession (ie,
  across CDATASection and EntityReference boundaries), we will return
  only the first; the caller is responsible for stepping through
  them.
  (%REVIEW% Provide a convenience routine here to assist, pending
  proposed DOM Level 3 getAdjacentText() operation?) </li>
  
 <li>Since the whole XPath/XSLT architecture assumes that the source
  document is not altered while we're working with it, we do not
  promise to implement the DOM NodeIterator's "maintain current
  position" response to document mutation. </li>
  
 <li>Since our design for XPath NodeIterators builds a stateful
  filter directly into the traversal object, getNodeFilter() is not
  supported.</li>
  
 </ul>
  
 <p>State: In progress!!</p>
 */
@interface OrgApacheXmlDtmRefDTMNodeIterator : NSObject < OrgW3cDomTraversalNodeIterator >

#pragma mark Public

/*!
 @brief Public constructor: Wrap a DTMNodeIterator around an existing
  and preconfigured DTMIterator
 */
- (instancetype)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)dtmIterator;

/*!
 @brief Detaches the NodeIterator from the set which it iterated over,
  releasing any computational resources and placing the iterator in
  the INVALID state.
 */
- (void)detach;

/*!
 @brief Access the wrapped DTMIterator.I'm not sure whether anyone will
  need this or not, but let's write it and think about it.
 */
- (id<OrgApacheXmlDtmDTMIterator>)getDTMIterator;

/*!
 @brief The value of this flag determines whether the children
  of entity reference nodes are visible to the iterator.
 @return false, always (the DTM model flattens entity references)
 */
- (jboolean)getExpandEntityReferences;

/*!
 @brief Return a handle to the filter used to screen nodes.
 This is ill-defined in Xalan's usage of Nodeiterator, where we have
  built stateful XPath-based filtering directly into the traversal
  object. We could return something which supports the NodeFilter interface
  and allows querying whether a given node would be permitted if it appeared
  as our next node, but in the current implementation that would be very
  complex -- and just isn't all that useful.
 @throw DOMException-- NOT_SUPPORTED_ERROR because I can't think
  of anything more useful to do in this case
 */
- (id<OrgW3cDomTraversalNodeFilter>)getFilter;

/*!
 @return The root node of the NodeIterator, as specified
  when it was created.
 */
- (id<OrgW3cDomNode>)getRoot;

/*!
 @brief Return a mask describing which node types are presented via the
  iterator.
 */
- (jint)getWhatToShow;

/*!
 @return the next node in the set and advance the position of the
  iterator in the set.
 @throw DOMException- INVALID_STATE_ERR Raised if this method is
  called after the detach method was invoked.
 */
- (id<OrgW3cDomNode>)nextNode;

/*!
 @return the next previous in the set and advance the position of the
  iterator in the set.
 @throw DOMException- INVALID_STATE_ERR Raised if this method is
  called after the detach method was invoked.
 */
- (id<OrgW3cDomNode>)previousNode;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMNodeIterator)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNodeIterator_initWithOrgApacheXmlDtmDTMIterator_(OrgApacheXmlDtmRefDTMNodeIterator *self, id<OrgApacheXmlDtmDTMIterator> dtmIterator);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeIterator *new_OrgApacheXmlDtmRefDTMNodeIterator_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> dtmIterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeIterator *create_OrgApacheXmlDtmRefDTMNodeIterator_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> dtmIterator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNodeIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator")
