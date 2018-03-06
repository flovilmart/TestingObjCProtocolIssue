//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/Attributes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxAttributes")
#ifdef RESTRICT_OrgXmlSaxAttributes
#define INCLUDE_ALL_OrgXmlSaxAttributes 0
#else
#define INCLUDE_ALL_OrgXmlSaxAttributes 1
#endif
#undef RESTRICT_OrgXmlSaxAttributes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxAttributes_) && (INCLUDE_ALL_OrgXmlSaxAttributes || defined(INCLUDE_OrgXmlSaxAttributes))
#define OrgXmlSaxAttributes_

/*!
 @brief Interface for a list of XML attributes.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>This interface allows access to a list of attributes in
  three different ways:</p>
  
 <ol>
  <li>by attribute index;</li>
  <li>by Namespace-qualified name; or</li>
  <li>by qualified (prefixed) name.</li>
  </ol>
  
 <p>The list will not contain attributes that were declared
  #IMPLIED but not specified in the start tag.  It will also not
  contain attributes used as Namespace declarations (xmlns*) unless
  the <code>http://xml.org/sax/features/namespace-prefixes</code>
  feature is set to <var>true</var> (it is <var>false</var> by
  default).
  Because SAX2 conforms to the original "Namespaces in XML"
  recommendation, it normally does not
  give namespace declaration attributes a namespace URI. 
 </p>
  
 <p>Some SAX2 parsers may support using an optional feature flag
  (<code>http://xml.org/sax/features/xmlns-uris</code>) to request
  that those attributes be given URIs, conforming to a later
  backwards-incompatible revision of that recommendation.  (The
  attribute's "local name" will be the prefix, or "xmlns" when
  defining a default element namespace.)  For portability, handler
  code should always resolve that conflict, rather than requiring
  parsers that can change the setting of that feature flag.  </p>
  
 <p>If the namespace-prefixes feature (see above) is 
 <var>false</var>, access by qualified name may not be available; if
  the <code>http://xml.org/sax/features/namespaces</code> feature is 
 <var>false</var>, access by Namespace-qualified names may not be
  available.</p>
  
 <p>This interface replaces the now-deprecated SAX1 <code>AttributeList</code>
  interface, which does not
  contain Namespace support.  In addition to Namespace support, it
  adds the <var>getIndex</var> methods (below).</p>
  
 <p>The order of attributes in the list is unspecified, and will
  vary from implementation to implementation.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.helpers.AttributesImpl
 - seealso: org.xml.sax.ext.DeclHandler
 */
@protocol OrgXmlSaxAttributes < JavaObject >

/*!
 @brief Return the number of attributes in the list.
 <p>Once you know the number of attributes, you can iterate
  through the list.</p>
 @return The number of attributes in the list.
 - seealso: #getURI(int)
 - seealso: #getLocalName(int)
 - seealso: #getQName(int)
 - seealso: #getType(int)
 - seealso: #getValue(int)
 */
- (jint)getLength;

/*!
 @brief Look up an attribute's Namespace URI by index.
 @param index The attribute index (zero-based).
 @return The Namespace URI, or the empty string if none
          is available, or null if the index is out of
          range.
 - seealso: #getLength
 */
- (NSString *)getURIWithInt:(jint)index;

/*!
 @brief Look up an attribute's local name by index.
 @param index The attribute index (zero-based).
 @return The local name, or the empty string if Namespace
          processing is not being performed, or null
          if the index is out of range.
 - seealso: #getLength
 */
- (NSString *)getLocalNameWithInt:(jint)index;

/*!
 @brief Look up an attribute's XML qualified (prefixed) name by index.
 @param index The attribute index (zero-based).
 @return The XML qualified name, or the empty string
          if none is available, or null if the index
          is out of range.
 - seealso: #getLength
 */
- (NSString *)getQNameWithInt:(jint)index;

/*!
 @brief Look up an attribute's type by index.
 <p>The attribute type is one of the strings "CDATA", "ID",
  "IDREF", "IDREFS", "NMTOKEN", "NMTOKENS", "ENTITY", "ENTITIES",
  or "NOTATION" (always in upper case).</p>
  
 <p>If the parser has not read a declaration for the attribute,
  or if the parser does not report attribute types, then it must
  return the value "CDATA" as stated in the XML 1.0 Recommendation
  (clause 3.3.3, "Attribute-Value Normalization").</p>
  
 <p>For an enumerated attribute that is not a notation, the
  parser will report the type as "NMTOKEN".</p>
 @param index The attribute index (zero-based).
 @return The attribute's type as a string, or null if the
          index is out of range.
 - seealso: #getLength
 */
- (NSString *)getTypeWithInt:(jint)index;

/*!
 @brief Look up an attribute's value by index.
 <p>If the attribute value is a list of tokens (IDREFS,
  ENTITIES, or NMTOKENS), the tokens will be concatenated
  into a single string with each token separated by a
  single space.</p>
 @param index The attribute index (zero-based).
 @return The attribute's value as a string, or null if the
          index is out of range.
 - seealso: #getLength
 */
- (NSString *)getValueWithInt:(jint)index;

/*!
 @brief Look up the index of an attribute by Namespace name.
 @param uri The Namespace URI, or the empty string if         the name has no Namespace URI.
 @param localName The attribute's local name.
 @return The index of the attribute, or -1 if it does not
          appear in the list.
 */
- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localName;

/*!
 @brief Look up the index of an attribute by XML qualified (prefixed) name.
 @param qName The qualified (prefixed) name.
 @return The index of the attribute, or -1 if it does not
          appear in the list.
 */
- (jint)getIndexWithNSString:(NSString *)qName;

/*!
 @brief Look up an attribute's type by Namespace name.
 <p>See <code>getType(int)</code> for a description
  of the possible types.</p>
 @param uri The Namespace URI, or the empty String if the         name has no Namespace URI.
 @param localName The local name of the attribute.
 @return The attribute type as a string, or null if the
          attribute is not in the list or if Namespace
          processing is not being performed.
 */
- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

/*!
 @brief Look up an attribute's type by XML qualified (prefixed) name.
 <p>See <code>getType(int)</code> for a description
  of the possible types.</p>
 @param qName The XML qualified name.
 @return The attribute type as a string, or null if the
          attribute is not in the list or if qualified names
          are not available.
 */
- (NSString *)getTypeWithNSString:(NSString *)qName;

/*!
 @brief Look up an attribute's value by Namespace name.
 <p>See <code>getValue(int)</code> for a description
  of the possible values.</p>
 @param uri The Namespace URI, or the empty String if the         name has no Namespace URI.
 @param localName The local name of the attribute.
 @return The attribute value as a string, or null if the
          attribute is not in the list.
 */
- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

/*!
 @brief Look up an attribute's value by XML qualified (prefixed) name.
 <p>See <code>getValue(int)</code> for a description
  of the possible values.</p>
 @param qName The XML qualified name.
 @return The attribute value as a string, or null if the
          attribute is not in the list or if qualified names
          are not available.
 */
- (NSString *)getValueWithNSString:(NSString *)qName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxAttributes)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxAttributes)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxAttributes")
