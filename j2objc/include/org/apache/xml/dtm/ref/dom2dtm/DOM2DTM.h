//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/dom2dtm/DOM2DTM.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTM")
#ifdef RESTRICT_OrgApacheXmlDtmRefDom2dtmDOM2DTM
#define INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTM 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTM 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDom2dtmDOM2DTM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefDom2dtmDOM2DTM_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTM || defined(INCLUDE_OrgApacheXmlDtmRefDom2dtmDOM2DTM))
#define OrgApacheXmlDtmRefDom2dtmDOM2DTM_

#define RESTRICT_OrgApacheXmlDtmRefDTMDefaultBaseIterators 1
#define INCLUDE_OrgApacheXmlDtmRefDTMDefaultBaseIterators 1
#include "org/apache/xml/dtm/ref/DTMDefaultBaseIterators.h"

@class JavaUtilVector;
@class JavaxXmlTransformDomDOMSource;
@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXmlUtilsTreeWalker;
@class OrgApacheXmlUtilsXMLStringFactory;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXmlDtmDTMWSFilter;
@protocol OrgApacheXmlDtmRefIncrementalSAXSource;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlSaxExtDeclHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief The <code>DOM2DTM</code> class serves up a DOM's contents via the
  DTM API.
 Note that it doesn't necessarily represent a full Document
  tree. You can wrap a DOM2DTM around a specific node and its subtree
  and the right things should happen. (I don't _think_ we currently
  support DocumentFrgment nodes as roots, though that might be worth
  considering.)
  Note too that we do not currently attempt to track document
  mutation. If you alter the DOM after wrapping DOM2DTM around it,
  all bets are off.
 */
@interface OrgApacheXmlDtmRefDom2dtmDOM2DTM : OrgApacheXmlDtmRefDTMDefaultBaseIterators {
 @public
  /*!
   @brief True iff the first element has been processed.This is used to control
       synthesis of the implied xml: namespace declaration node.
   */
  jboolean m_processedFirstElement_;
  /*!
   @brief The node objects.The instance part of the handle indexes
  directly into this vector.
   Each DTM node may actually be
  composed of several DOM nodes (for example, if logically-adjacent
  Text/CDATASection nodes in the DOM have been coalesced into a
  single DTM Text node); this table points only to the first in
  that sequence.
   */
  JavaUtilVector *m_nodes_;
  OrgApacheXmlUtilsTreeWalker *m_walker_;
}

+ (jboolean)JJK_DEBUG;

+ (jboolean)JJK_NEWCODE;

+ (NSString *)NAMESPACE_DECL_NS;

#pragma mark Public

/*!
 @brief Construct a DOM2DTM object from a DOM node.
 @param mgr The DTMManager who owns this DTM.
 @param domSource the DOM source that this DTM will wrap.
 @param dtmIdentity The DTM identity ID for this DTM.
 @param whiteSpaceFilter The white space filter for this DTM, which may                           be null.
 @param xstringfactory XMLString factory for creating character content.
 @param doIndexing true if the caller considers it worth it to use                     indexing schemes.
 */
- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)mgr
                withJavaxXmlTransformDomDOMSource:(JavaxXmlTransformDomDOMSource *)domSource
                                          withInt:(jint)dtmIdentity
                   withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)whiteSpaceFilter
            withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xstringfactory
                                      withBoolean:(jboolean)doIndexing;

/*!
 @brief Directly call the
  characters method on the passed ContentHandler for the
  string-value of the given node (see http://www.w3.org/TR/xpath#data-model
  for the definition of a node's string-value).Multiple calls to the
  ContentHandler's characters methods may well occur for a single call to
  this method.
 @param nodeHandle The node ID.
 @param ch A non-null reference to a ContentHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchCharactersEventsWithInt:(jint)nodeHandle
            withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch
                            withBoolean:(jboolean)normalize;

/*!
 @brief Directly create SAX parser events from a subtree.
 @param nodeHandle The node ID.
 @param ch A non-null reference to a ContentHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchToEventsWithInt:(jint)nodeHandle
    withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief Retrieves an attribute node by by qualified name and namespace URI.
 @param nodeHandle int Handle of the node upon which to look up this attribute..
 @param namespaceURI The namespace URI of the attribute to    retrieve, or null.
 @param name The local name of the attribute to    retrieve.
 @return The attribute node handle with the specified name (
    <code>nodeName</code>) or <code>DTM.NULL</code> if there is no such
    attribute.
 */
- (jint)getAttributeNodeWithInt:(jint)nodeHandle
                   withNSString:(NSString *)namespaceURI
                   withNSString:(NSString *)name;

/*!
 @brief getContentHandler returns "our SAX builder" -- the thing that
  someone else should send SAX events to in order to extend this
  DTM model.
 @return null if this model doesn't respond to SAX events,
  "this" if the DTM object has a built-in SAX ContentHandler,
  the IncrmentalSAXSource if we're bound to one and should receive
  the SAX stream via it for incremental build purposes...
 */
- (id<OrgXmlSaxContentHandler>)getContentHandler;

/*!
 @brief Return this DTM's DeclHandler.
 @return null if this model doesn't respond to SAX Decl events.
 */
- (id<OrgXmlSaxExtDeclHandler>)getDeclHandler;

/*!
 @brief Return the public identifier of the external subset,
  normalized as described in 4.2.2 External Entities [XML].If there is
  no external subset or if it has no public identifier, this property
  has no value.
 @return the public identifier String object, or null if there is none.
 */
- (NSString *)getDocumentTypeDeclarationPublicIdentifier;

/*!
 @brief A document type declaration information item has the following properties:
      1.
 [system identifier] The system identifier of the external subset, if
         it exists. Otherwise this property has no value.
 @return the system identifier String object, or null if there is none.
 */
- (NSString *)getDocumentTypeDeclarationSystemIdentifier;

/*!
 @brief Return this DTM's DTDHandler.
 @return null if this model doesn't respond to SAX dtd events.
 */
- (id<OrgXmlSaxDTDHandler>)getDTDHandler;

/*!
 @brief Returns the <code>Element</code> whose <code>ID</code> is given by 
 <code>elementId</code>.If no such element exists, returns 
 <code>DTM.NULL</code>.
 Behavior is not defined if more than one element
  has this <code>ID</code>. Attributes (including those
  with the name "ID") are not of type ID unless so defined by DTD/Schema
  information available to the DTM implementation.
  Implementations that do not know whether attributes are of type ID or
  not are expected to return <code>DTM.NULL</code>.
  
 <p>%REVIEW% Presumably IDs are still scoped to a single document,
  and this operation searches only within a single document, right?
  Wouldn't want collisions between DTMs in the same process.</p>
 @param elementId The unique  <code> id </code>  value for an element.
 @return The handle of the matching element.
 */
- (jint)getElementByIdWithNSString:(NSString *)elementId;

/*!
 @brief Return this DTM's EntityResolver.
 @return null if this model doesn't respond to SAX entity ref events.
 */
- (id<OrgXmlSaxEntityResolver>)getEntityResolver;

/*!
 @brief Return this DTM's ErrorHandler.
 @return null if this model doesn't respond to SAX error events.
 */
- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

/*!
 @brief Get the handle from a Node.This is a more robust version of
  getHandleFromNode, intended to be usable by the public.
 <p>%OPT% This will be pretty slow.</p>
  
  %REVIEW% This relies on being able to test node-identity via
  object-identity. DTM2DOM proxying is a great example of a case where
  that doesn't work. DOM Level 3 will provide the isSameNode() method
  to fix that, but until then this is going to be flaky.
 @param node A node, which may be null.
 @return The node handle or <code>DTM.NULL</code>.
 */
- (jint)getHandleOfNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Return this DTM's lexical handler.
 %REVIEW% Should this return null if constrution already done/begun?
 @return null if this model doesn't respond to lexical SAX events,
  "this" if the DTM object has a built-in SAX ContentHandler,
  the IncrementalSAXSource if we're bound to one and should receive
  the SAX stream via it for incremental build purposes...
 */
- (id<OrgXmlSaxExtLexicalHandler>)getLexicalHandler;

/*!
 @brief Given a node handle, return its XPath-style localname.
 (As defined in Namespaces, this is the portion of the name after any
  colon character).
 @param nodeHandle the id of the node.
 @return String Local name of this node.
 */
- (NSString *)getLocalNameWithInt:(jint)nodeHandle;

/*!
 @brief Given a node handle, return its DOM-style namespace URI
  (As defined in Namespaces, this is the declared URI which this node's
  prefix -- or default in lieu thereof -- was mapped to.)
 <p>%REVIEW% Null or ""? -sb</p>
 @param nodeHandle the id of the node.
 @return String URI value of this node's namespace, or null if no
  namespace was resolved.
 */
- (NSString *)getNamespaceURIWithInt:(jint)nodeHandle;

/*!
 @brief Return an DOM node for the given node.
 @param nodeHandle The node ID.
 @return A node representation of the DTM node.
 */
- (id<OrgW3cDomNode>)getNodeWithInt:(jint)nodeHandle;

/*!
 @brief Given a node handle, return its DOM-style node name.This will
  include names such as #text or #document.
 @param nodeHandle the id of the node.
 @return String Name of this node, which may be an empty string.
  %REVIEW% Document when empty string is possible...
  %REVIEW-COMMENT% It should never be empty, should it?
 */
- (NSString *)getNodeNameWithInt:(jint)nodeHandle;

/*!
 @brief Given a node handle, return the XPath node name.This should be
  the name as described by the XPath data model, NOT the DOM-style
  name.
 @param nodeHandle the id of the node.
 @return String Name of this node, which may be an empty string.
 */
- (NSString *)getNodeNameXWithInt:(jint)nodeHandle;

/*!
 @brief Given a node handle, return its node value.This is mostly
  as defined by the DOM, but may ignore some conveniences.
 <p>
 @param nodeHandle The node id.
 @return String Value of this node, or null if not
  meaningful for this node type.
 */
- (NSString *)getNodeValueWithInt:(jint)nodeHandle;

/*!
 @brief Get the number of nodes that have been added.
 */
- (jint)getNumberOfNodes;

/*!
 @brief Given a namespace handle, return the prefix that the namespace decl is
  mapping.
 Given a node handle, return the prefix used to map to the namespace. 
 <p> %REVIEW% Are you sure you want "" for no prefix?  </p>
  <p> %REVIEW-COMMENT% I think so... not totally sure. -sb  </p>
 @param nodeHandle the id of the node.
 @return String prefix of this node's name, or "" if no explicit
  namespace prefix was given.
 */
- (NSString *)getPrefixWithInt:(jint)nodeHandle;

/*!
 @brief No source information is available for DOM2DTM, so return 
 <code>null</code> here.
 @param node an  <code> int </code>  value
 @return null
 */
- (id<JavaxXmlTransformSourceLocator>)getSourceLocatorForWithInt:(jint)node;

/*!
 @brief Get the string-value of a node as a String object
  (see http://www.w3.org/TR/xpath#data-model
  for the definition of a node's string-value).
 @param nodeHandle The node ID.
 @return A string object that represents the string-value of the given node.
 */
- (id<OrgApacheXmlUtilsXMLString>)getStringValueWithInt:(jint)nodeHandle;

/*!
 @brief The getUnparsedEntityURI function returns the URI of the unparsed
  entity with the specified name in the same document as the context
  node (see [3.3 Unparsed Entities]).It returns the empty string if
  there is no such entity.
 <p>
  XML processors may choose to use the System Identifier (if one
  is provided) to resolve the entity, rather than the URI in the
  Public Identifier. The details are dependent on the processor, and
  we would have to support some form of plug-in resolver to handle
  this properly. Currently, we simply return the System Identifier if
  present, and hope that it a usable URI or that our caller can
  map it to one.
  TODO: Resolve Public Identifiers... or consider changing function name. 
 <p>
  If we find a relative URI
  reference, XML expects it to be resolved in terms of the base URI
  of the document. The DOM doesn't do that for us, and it isn't
  entirely clear whether that should be done here; currently that's
  pushed up to a higher level of our application. (Note that DOM Level
  1 didn't store the document's base URI.)
  TODO: Consider resolving Relative URIs. 
 <p>
  (The DOM's statement that "An XML processor may choose to
  completely expand entities before the structure model is passed
  to the DOM" refers only to parsed entities, not unparsed, and hence
  doesn't affect this function.)
 @param name A string containing the Entity Name of the unparsed  entity.
 @return String containing the URI of the Unparsed Entity, or an
  empty string if no such entity exists.
 */
- (NSString *)getUnparsedEntityURIWithNSString:(NSString *)name;

/*!
 @brief 5.
 [specified] A flag indicating whether this attribute was actually
         specified in the start-tag of its element, or was defaulted from the
         DTD.
 @param attributeHandle the attribute handle
 @return <code>true</code> if the attribute was specified;
          <code>false</code> if it was defaulted.
 */
- (jboolean)isAttributeSpecifiedWithInt:(jint)attributeHandle;

/*!
 @brief Determine if the string-value of a node is whitespace
 @param nodeHandle The node Handle.
 @return Return true if the given node is whitespace.
 */
- (jboolean)isWhitespaceWithInt:(jint)nodeHandle;

/*!
 @return true iff we're building this model incrementally (eg
  we're partnered with a IncrementalSAXSource) and thus require that the
  transformation and the parse run simultaneously. Guidance to the
  DTMManager.
 */
- (jboolean)needsTwoThreads;

/*!
 @brief Bind an IncrementalSAXSource to this DTM.NOT RELEVANT for DOM2DTM, since
  we're wrapped around an existing DOM.
 @param source The IncrementalSAXSource that we want to recieve events from  on demand.
 */
- (void)setIncrementalSAXSourceWithOrgApacheXmlDtmRefIncrementalSAXSource:(id<OrgApacheXmlDtmRefIncrementalSAXSource>)source;

/*!
 @brief For the moment all the run time properties are ignored by this
  class.
 @param property a  <code> String </code>  value
 @param value an  <code> Object </code>  value
 */
- (void)setPropertyWithNSString:(NSString *)property
                         withId:(id)value;

#pragma mark Protected

/*!
 @brief Construct the node map from the node.
 @param node The node that is to be added to the DTM.
 @param parentIndex The current parent index.
 @param previousSibling The previous sibling index.
 @param forceNodeType If not DTM.NULL, overrides the DOM node type. 	Used to force nodes to Text rather than CDATASection when their
  	coalesced value includes ordinary Text nodes (current DTM behavior).
 @return The index identity of the node that was added.
 */
- (jint)addNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                         withInt:(jint)parentIndex
                         withInt:(jint)previousSibling
                         withInt:(jint)forceNodeType;

/*!
 @brief Retrieve the text content of a DOM subtree, appending it into a
  user-supplied FastStringBuffer object.Note that attributes are
  not considered part of the content of an element.
 <p>
  There are open questions regarding whitespace stripping. 
  Currently we make no special effort in that regard, since the standard
  DOM doesn't yet provide DTD-based information to distinguish
  whitespace-in-element-context from genuine #PCDATA. Note that we
  should probably also consider xml:space if/when we address this.
  DOM Level 3 may solve the problem for us. 
 <p>
  %REVIEW% Note that as a DOM-level operation, it can be argued that this
  routine _shouldn't_ perform any processing beyond what the DOM already
  does, and that whitespace stripping and so on belong at the DTM level.
  If you want a stripped DOM view, wrap DTM2DOM around DOM2DTM.
 @param node Node whose subtree is to be walked, gathering the  contents of all Text or CDATASection nodes.
 */
+ (void)dispatchNodeDataWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
              withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch
                                  withInt:(jint)depth;

/*!
 @brief Get the next node identity value in the list, and call the iterator
  if it hasn't been added yet.
 @param identity The node identity (index).
 @return identity+1, or DTM.NULL.
 */
- (jint)getNextNodeIdentityWithInt:(jint)identity;

/*!
 @brief Retrieve the text content of a DOM subtree, appending it into a
  user-supplied FastStringBuffer object.Note that attributes are
  not considered part of the content of an element.
 <p>
  There are open questions regarding whitespace stripping. 
  Currently we make no special effort in that regard, since the standard
  DOM doesn't yet provide DTD-based information to distinguish
  whitespace-in-element-context from genuine #PCDATA. Note that we
  should probably also consider xml:space if/when we address this.
  DOM Level 3 may solve the problem for us. 
 <p>
  %REVIEW% Actually, since this method operates on the DOM side of the
  fence rather than the DTM side, it SHOULDN'T do
  any special handling. The DOM does what the DOM does; if you want
  DTM-level abstractions, use DTM-level methods.
 @param node Node whose subtree is to be walked, gathering the  contents of all Text or CDATASection nodes.
 @param buf FastStringBuffer into which the contents of the text  nodes are to be concatenated.
 */
+ (void)getNodeDataWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
withOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)buf;

/*!
 @brief Get a Node from an identity index.
 NEEDSDOC @@param nodeIdentity
  NEEDSDOC ($objectName$) @@return
 */
- (id<OrgW3cDomNode>)lookupNodeWithInt:(jint)nodeIdentity;

/*!
 @brief This method iterates to the next node that will be added to the table.
 Each call to this method adds a new node to the table, unless the end
  is reached, in which case it returns null.
 @return The true if a next node is found or false if 
          there are no more nodes.
 */
- (jboolean)nextNode;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg0
                      withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)arg1
                                          withInt:(jint)arg2
                   withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)arg3
            withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)arg4
                                      withBoolean:(jboolean)arg5 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)arg0
                      withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)arg1
                                          withInt:(jint)arg2
                   withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)arg3
            withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)arg4
                                      withBoolean:(jboolean)arg5
                                          withInt:(jint)arg6
                                      withBoolean:(jboolean)arg7
                                      withBoolean:(jboolean)arg8 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDom2dtmDOM2DTM)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTM, m_nodes_, JavaUtilVector *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDom2dtmDOM2DTM, m_walker_, OrgApacheXmlUtilsTreeWalker *)

inline jboolean OrgApacheXmlDtmRefDom2dtmDOM2DTM_get_JJK_DEBUG(void);
#define OrgApacheXmlDtmRefDom2dtmDOM2DTM_JJK_DEBUG false
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDom2dtmDOM2DTM, JJK_DEBUG, jboolean)

inline jboolean OrgApacheXmlDtmRefDom2dtmDOM2DTM_get_JJK_NEWCODE(void);
#define OrgApacheXmlDtmRefDom2dtmDOM2DTM_JJK_NEWCODE true
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDom2dtmDOM2DTM, JJK_NEWCODE, jboolean)

/*!
 @brief Manefest constant
 */
inline NSString *OrgApacheXmlDtmRefDom2dtmDOM2DTM_get_NAMESPACE_DECL_NS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlDtmRefDom2dtmDOM2DTM_NAMESPACE_DECL_NS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlDtmRefDom2dtmDOM2DTM, NAMESPACE_DECL_NS, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDom2dtmDOM2DTM_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformDomDOMSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmRefDom2dtmDOM2DTM *self, OrgApacheXmlDtmDTMManager *mgr, JavaxXmlTransformDomDOMSource *domSource, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDom2dtmDOM2DTM *new_OrgApacheXmlDtmRefDom2dtmDOM2DTM_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformDomDOMSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmDTMManager *mgr, JavaxXmlTransformDomDOMSource *domSource, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDom2dtmDOM2DTM *create_OrgApacheXmlDtmRefDom2dtmDOM2DTM_initWithOrgApacheXmlDtmDTMManager_withJavaxXmlTransformDomDOMSource_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_withBoolean_(OrgApacheXmlDtmDTMManager *mgr, JavaxXmlTransformDomDOMSource *domSource, jint dtmIdentity, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory, jboolean doIndexing);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDom2dtmDOM2DTM_getNodeDataWithOrgW3cDomNode_withOrgApacheXmlUtilsFastStringBuffer_(id<OrgW3cDomNode> node, OrgApacheXmlUtilsFastStringBuffer *buf);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDom2dtmDOM2DTM_dispatchNodeDataWithOrgW3cDomNode_withOrgXmlSaxContentHandler_withInt_(id<OrgW3cDomNode> node, id<OrgXmlSaxContentHandler> ch, jint depth);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDom2dtmDOM2DTM)

#endif

#if !defined (OrgApacheXmlDtmRefDom2dtmDOM2DTM_CharacterNodeHandler_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTM || defined(INCLUDE_OrgApacheXmlDtmRefDom2dtmDOM2DTM_CharacterNodeHandler))
#define OrgApacheXmlDtmRefDom2dtmDOM2DTM_CharacterNodeHandler_

@protocol OrgW3cDomNode;

@protocol OrgApacheXmlDtmRefDom2dtmDOM2DTM_CharacterNodeHandler < JavaObject >

- (void)charactersWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDom2dtmDOM2DTM_CharacterNodeHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDom2dtmDOM2DTM_CharacterNodeHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDom2dtmDOM2DTM")
