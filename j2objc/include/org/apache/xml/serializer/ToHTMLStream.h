//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToHTMLStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream")
#ifdef RESTRICT_OrgApacheXmlSerializerToHTMLStream
#define INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToHTMLStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerToHTMLStream_) && (INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream || defined(INCLUDE_OrgApacheXmlSerializerToHTMLStream))
#define OrgApacheXmlSerializerToHTMLStream_

#define RESTRICT_OrgApacheXmlSerializerToStream 1
#define INCLUDE_OrgApacheXmlSerializerToStream 1
#include "org/apache/xml/serializer/ToStream.h"

@class IOSCharArray;
@class JavaIoWriter;
@class JavaUtilProperties;
@class OrgApacheXmlSerializerElemDesc;
@class OrgApacheXmlSerializerToHTMLStream_Trie;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This serializer takes a series of SAX or
  SAX-like events and writes its output
  to the given stream.
 This class is not a public API, it is public
  because it is used from another package.
 */
@interface OrgApacheXmlSerializerToHTMLStream : OrgApacheXmlSerializerToStream {
 @public
  /*!
   @brief This flag is set while receiving events from the DTD
   */
  jboolean m_inDTD_;
}

+ (OrgApacheXmlSerializerToHTMLStream_Trie *)m_elementFlags;

#pragma mark Public

/*!
 @brief Default constructor.
 */
- (instancetype)init;

/*!
 @brief This method is used to add an attribute to the currently open element.
 The caller has guaranted that this attribute is unique, which means that it
  not been seen before and will not be seen again.
 @param name the qualified name of the attribute
 @param value the value of the attribute which can contain only  ASCII printable characters characters in the range 32 to 127 inclusive.
 @param flags the bit values of this integer give optimization information.
 */
- (void)addUniqueAttributeWithNSString:(NSString *)name
                          withNSString:(NSString *)value
                               withInt:(jint)flags;

/*!
 @brief This method does nothing.
 */
- (void)attributeDeclWithNSString:(NSString *)eName
                     withNSString:(NSString *)aName
                     withNSString:(NSString *)type
                     withNSString:(NSString *)valueDefault
                     withNSString:(NSString *)value;

/*!
 @brief Receive notification of cdata.
 <p>The Parser will call this method to report each chunk of
   character data.  SAX parsers may return all contiguous character
   data in a single chunk, or they may split it into several
   chunks; however, all of the characters in any single event
   must come from the same external entity, so that the Locator
   provides useful information.</p>
   
 <p>The application must not attempt to read from the array
   outside of the specified range.</p>
   
 <p>Note that some parsers will report whitespace using the
   ignorableWhitespace() method rather than this one (validating
   parsers must do so).</p>
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
              wrapping another exception.
 - seealso: #ignorableWhitespace
 - seealso: org.xml.sax.Locator
 @throw org.xml.sax.SAXException
 */
- (void)cdataWithCharArray:(IOSCharArray *)ch
                   withInt:(jint)start
                   withInt:(jint)length;

/*!
 @brief Receive notification of character data.
 <p>The Parser will call this method to report each chunk of
  character data.  SAX parsers may return all contiguous character
  data in a single chunk, or they may split it into several
  chunks; however, all of the characters in any single event
  must come from the same external entity, so that the Locator
  provides useful information.</p>
  
 <p>The application must not attempt to read from the array
  outside of the specified range.</p>
  
 <p>Note that some parsers will report whitespace using the
  ignorableWhitespace() method rather than this one (validating
  parsers must do so).</p>
 @param chars The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: #ignorableWhitespace
 - seealso: org.xml.sax.Locator
 @throw org.xml.sax.SAXException
 */
- (void)charactersWithCharArray:(IOSCharArray *)chars
                        withInt:(jint)start
                        withInt:(jint)length;

- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

/*!
 @brief This method does nothing.
 */
- (void)elementDeclWithNSString:(NSString *)name
                   withNSString:(NSString *)model;

/*!
 @brief Receive notification of the end of a document.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)endDocument;

/*!
 @brief Report the end of DTD declarations.
 @throw org.xml.sax.SAXExceptionThe application may raise an exception.
 - seealso: #startDTD
 */
- (void)endDTD;

/*!
 - seealso: ExtendedContentHandler#endElement(String)
 */
- (void)endElementWithNSString:(NSString *)elemName;

/*!
 @brief Receive notification of the end of an element.
 @param namespaceURI
 @param localName
 @param name The element type name
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
              wrapping another exception.
 */
- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)name;

/*!
 @brief Receive notivication of a entityReference.
 @param name non-null reference to entity name string.
 @throw org.xml.sax.SAXException
 */
- (void)entityReferenceWithNSString:(NSString *)name;

/*!
 @brief This method does nothing.
 */
- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;

/*!
 @brief Get a description of the given element.
 @param name non-null name of element, case insensitive.
 @return non-null reference to ElemDesc, which may be m_dummy if no 
          element description matches the given name.
 */
+ (OrgApacheXmlSerializerElemDesc *)getElemDescWithNSString:(NSString *)name;

/*!
 @brief This method does nothing.
 */
- (void)internalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)value;

/*!
 @brief This method is used when a prefix/uri namespace mapping
  is indicated after the element was started with a
  startElement() and before and endElement().
 startPrefixMapping(prefix,uri) would be used before the
  startElement() call.
 @param uri the URI of the namespace
 @param prefix the prefix associated with the given URI.
 - seealso: ExtendedContentHandler#namespaceAfterStartElement(String, String)
 */
- (void)namespaceAfterStartElementWithNSString:(NSString *)prefix
                                  withNSString:(NSString *)uri;

/*!
 @brief Process the attributes, which means to write out the currently
  collected attributes to the writer.The attributes are not
  cleared by this method
 @param writer the writer to write processed attributes to.
 @param nAttrs the number of attributes in m_attributes   to be processed
 @throw org.xml.sax.SAXException
 */
- (void)processAttributesWithJavaIoWriter:(JavaIoWriter *)writer
                                  withInt:(jint)nAttrs;

/*!
 @brief Receive notification of a processing instruction.
 @param target The processing instruction target.
 @param data The processing instruction data, or null if          none was supplied.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
              wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

- (jboolean)reset;

/*!
 @brief Tells if the formatter should omit the META tag.
 @param bool_ True if the META tag should be omitted.
 */
- (void)setOmitMetaTagWithBoolean:(jboolean)bool_;

/*!
 @brief Specifies an output format for this serializer.It the
  serializer has already been associated with an output format,
  it will switch to the new format.
 This method should not be
  called while the serializer is in the process of serializing
  a document. 
  This method can be called multiple times before starting
  the serialization of a particular result-tree. In principle
  all serialization parameters can be changed, with the exception
  of method="html" (it must be method="html" otherwise we
  shouldn't even have a ToHTMLStream object here!)
 @param format The output format or serialzation parameters  to use.
 */
- (void)setOutputFormatWithJavaUtilProperties:(JavaUtilProperties *)format;

/*!
 @brief Tells if the formatter should use special URL escaping.
 @param bool_ True if URLs should be specially escaped with the %xx form.
 */
- (void)setSpecialEscapeURLsWithBoolean:(jboolean)bool_;

- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of the beginning of an element.
 @param namespaceURI
 @param localName
 @param name The element type name.
 @param atts The attributes attached to the element, if any.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
              wrapping another exception.
 - seealso: #endElement
 - seealso: org.xml.sax.AttributeList
 */
- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)name
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Writes the specified <var>string</var> after substituting <VAR>specials</VAR>,
  and UTF-16 surrogates for character references <CODE>&amp;#xnn</CODE>.
 @param string String to convert to XML format.
 @param encoding CURRENTLY NOT IMPLEMENTED.
 @throw org.xml.sax.SAXException
 */
- (void)writeAttrStringWithJavaIoWriter:(JavaIoWriter *)writer
                           withNSString:(NSString *)string
                           withNSString:(NSString *)encoding;

/*!
 @brief Write the specified <var>string</var> after substituting non ASCII characters,
  with <CODE>%HH</CODE>, where HH is the hex of the byte value.
 @param string String to convert to XML format.
 @param doURLEscaping True if we should try to encode as                        per http://www.ietf.org/rfc/rfc2396.txt.
 @throw org.xml.sax.SAXExceptionif a bad surrogate pair is detected.
 */
- (void)writeAttrURIWithJavaIoWriter:(JavaIoWriter *)writer
                        withNSString:(NSString *)string
                         withBoolean:(jboolean)doURLEscaping;

#pragma mark Protected

/*!
 @brief For the enclosing elements starting tag write out out any attributes
  followed by ">".At this point we also mark if this element is
  a cdata-section-element.
 @throw org.xml.sax.SAXException
 */
- (void)closeStartTag;

/*!
 @brief Process an attribute.
 @param writer The writer to write the processed output to.
 @param name The name of the attribute.
 @param value The value of the attribute.
 @param elemDesc The description of the HTML element             that has this attribute.
 @throw org.xml.sax.SAXException
 */
- (void)processAttributeWithJavaIoWriter:(JavaIoWriter *)writer
                            withNSString:(NSString *)name
                            withNSString:(NSString *)value
      withOrgApacheXmlSerializerElemDesc:(OrgApacheXmlSerializerElemDesc *)elemDesc;

/*!
 @brief Receive notification of the beginning of a document.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)startDocumentInternal;

#pragma mark Package-Private

+ (void)initTagReferenceWithOrgApacheXmlSerializerToHTMLStream_Trie:(OrgApacheXmlSerializerToHTMLStream_Trie *)m_elementFlags OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerToHTMLStream)

/*!
 @brief A digital search trie for fast, case insensitive lookup of ElemDesc objects.
 */
inline OrgApacheXmlSerializerToHTMLStream_Trie *OrgApacheXmlSerializerToHTMLStream_get_m_elementFlags(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *OrgApacheXmlSerializerToHTMLStream_m_elementFlags;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerToHTMLStream, m_elementFlags, OrgApacheXmlSerializerToHTMLStream_Trie *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToHTMLStream_initTagReferenceWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie *m_elementFlags);

FOUNDATION_EXPORT OrgApacheXmlSerializerElemDesc *OrgApacheXmlSerializerToHTMLStream_getElemDescWithNSString_(NSString *name);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToHTMLStream_init(OrgApacheXmlSerializerToHTMLStream *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream *new_OrgApacheXmlSerializerToHTMLStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream *create_OrgApacheXmlSerializerToHTMLStream_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToHTMLStream)

#endif

#if !defined (OrgApacheXmlSerializerToHTMLStream_Trie_) && (INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream || defined(INCLUDE_OrgApacheXmlSerializerToHTMLStream_Trie))
#define OrgApacheXmlSerializerToHTMLStream_Trie_

@class OrgApacheXmlSerializerToHTMLStream_Trie_Node;

@interface OrgApacheXmlSerializerToHTMLStream_Trie : NSObject {
 @public
  /*!
   @brief The root node of the tree.
   */
  OrgApacheXmlSerializerToHTMLStream_Trie_Node *m_Root_;
}

+ (jint)ALPHA_SIZE;

#pragma mark Public

/*!
 @brief Construct the trie that has a case insensitive search.
 */
- (instancetype)init;

/*!
 @brief Construct the trie given the desired case sensitivity with the key.
 @param lowerCaseOnly true if the search keys are to be loser case only,  not case insensitive.
 */
- (instancetype)initWithBoolean:(jboolean)lowerCaseOnly;

/*!
 @brief Construct the trie from another Trie.
 Both the existing Trie and this new one share the same table for
  lookup, and it is assumed that the table is fully populated and
  not changing anymore.
 @param existingTrie the Trie that this one is a copy of.
 */
- (instancetype)initWithOrgApacheXmlSerializerToHTMLStream_Trie:(OrgApacheXmlSerializerToHTMLStream_Trie *)existingTrie;

/*!
 @brief Get an object that matches the key.
 @param key must be a 7-bit ASCII string
 @return The object that matches the key, or null.
 */
- (id)getWithNSString:(NSString *)key;

/*!
 @brief Get an object that matches the key.
 This method is faster than get(), but is not thread-safe.
 @param key must be a 7-bit ASCII string
 @return The object that matches the key, or null.
 */
- (id)get2WithNSString:(NSString *)key;

/*!
 @brief Get the length of the longest key used in the table.
 */
- (jint)getLongestKeyLength;

/*!
 @brief Put an object into the trie for lookup.
 @param key must be a 7-bit ASCII string
 @param value any java object.
 @return The old object that matched key, or null.
 */
- (id)putWithNSString:(NSString *)key
               withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToHTMLStream_Trie)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToHTMLStream_Trie, m_Root_, OrgApacheXmlSerializerToHTMLStream_Trie_Node *)

/*!
 @brief Size of the m_nextChar array.
 */
inline jint OrgApacheXmlSerializerToHTMLStream_Trie_get_ALPHA_SIZE(void);
#define OrgApacheXmlSerializerToHTMLStream_Trie_ALPHA_SIZE 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerToHTMLStream_Trie, ALPHA_SIZE, jint)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToHTMLStream_Trie_init(OrgApacheXmlSerializerToHTMLStream_Trie *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *new_OrgApacheXmlSerializerToHTMLStream_Trie_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *create_OrgApacheXmlSerializerToHTMLStream_Trie_init(void);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToHTMLStream_Trie_initWithBoolean_(OrgApacheXmlSerializerToHTMLStream_Trie *self, jboolean lowerCaseOnly);

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *new_OrgApacheXmlSerializerToHTMLStream_Trie_initWithBoolean_(jboolean lowerCaseOnly) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *create_OrgApacheXmlSerializerToHTMLStream_Trie_initWithBoolean_(jboolean lowerCaseOnly);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToHTMLStream_Trie_initWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie *self, OrgApacheXmlSerializerToHTMLStream_Trie *existingTrie);

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *new_OrgApacheXmlSerializerToHTMLStream_Trie_initWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie *existingTrie) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie *create_OrgApacheXmlSerializerToHTMLStream_Trie_initWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie *existingTrie);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToHTMLStream_Trie)

#endif

#if !defined (OrgApacheXmlSerializerToHTMLStream_Trie_Node_) && (INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream || defined(INCLUDE_OrgApacheXmlSerializerToHTMLStream_Trie_Node))
#define OrgApacheXmlSerializerToHTMLStream_Trie_Node_

@class IOSObjectArray;
@class OrgApacheXmlSerializerToHTMLStream_Trie;

/*!
 @brief The node representation for the trie.
 */
@interface OrgApacheXmlSerializerToHTMLStream_Trie_Node : NSObject {
 @public
  /*!
   @brief The next nodes.
   */
  IOSObjectArray *m_nextChar_;
  /*!
   @brief The value.
   */
  id m_Value_;
}

#pragma mark Package-Private

/*!
 @brief Constructor, creates a Node[ALPHA_SIZE].
 */
- (instancetype)initWithOrgApacheXmlSerializerToHTMLStream_Trie:(OrgApacheXmlSerializerToHTMLStream_Trie *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToHTMLStream_Trie_Node)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToHTMLStream_Trie_Node, m_nextChar_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToHTMLStream_Trie_Node, m_Value_, id)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToHTMLStream_Trie_Node_initWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie_Node *self, OrgApacheXmlSerializerToHTMLStream_Trie *outer$);

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie_Node *new_OrgApacheXmlSerializerToHTMLStream_Trie_Node_initWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToHTMLStream_Trie_Node *create_OrgApacheXmlSerializerToHTMLStream_Trie_Node_initWithOrgApacheXmlSerializerToHTMLStream_Trie_(OrgApacheXmlSerializerToHTMLStream_Trie *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToHTMLStream_Trie_Node)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToHTMLStream")
