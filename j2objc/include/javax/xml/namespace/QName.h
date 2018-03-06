//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/namespace/QName.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlNamespaceQName")
#ifdef RESTRICT_JavaxXmlNamespaceQName
#define INCLUDE_ALL_JavaxXmlNamespaceQName 0
#else
#define INCLUDE_ALL_JavaxXmlNamespaceQName 1
#endif
#undef RESTRICT_JavaxXmlNamespaceQName

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlNamespaceQName_) && (INCLUDE_ALL_JavaxXmlNamespaceQName || defined(INCLUDE_JavaxXmlNamespaceQName))
#define JavaxXmlNamespaceQName_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief <p><code>QName</code> represents a <strong>qualified name</strong>
  as defined in the XML specifications: <a href="http://www.w3.org/TR/xmlschema-2/#QName">
 XML Schema Part2:
  Datatypes specification</a>, <a href="http://www.w3.org/TR/REC-xml-names/#ns-qualnames">
 Namespaces
  in XML</a>, <a href="http://www.w3.org/XML/xml-names-19990114-errata">
 Namespaces
  in XML Errata</a>.
 </p>
  
 <p>The value of a <code>QName</code> contains a <strong>Namespace
  URI</strong>, <strong>local part</strong> and 
 <strong>prefix</strong>.</p>
  
 <p>The prefix is included in <code>QName</code> to retain lexical
  information <strong><em>when present</em></strong> in an <code>input source</code>
 . The prefix is 
 <strong><em>NOT</em></strong> used in <code>QName.equals(Object)</code>
  or to compute the <code>QName.hashCode()</code>
 .  Equality and the hash code are defined using 
 <strong><em>only</em></strong> the Namespace URI and local part.</p>
  
 <p>If not specified, the Namespace URI is set to <code>XMLConstants.NULL_NS_URI</code>
 .
  If not specified, the prefix is set to <code>XMLConstants.DEFAULT_NS_PREFIX</code>
 .</p>
  
 <p><code>QName</code> is immutable.</p>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 754581 $, $Date: 2009-03-14 18:32:39 -0700 (Sat, 14 Mar 2009) $
 - seealso: <a href="http://www.w3.org/TR/xmlschema-2/#QName">XML Schema Part2: Datatypes specification</a>
 - seealso: <a href="http://www.w3.org/TR/REC-xml-names/#ns-qualnames">Namespaces in XML</a>
 - seealso: <a href="http://www.w3.org/XML/xml-names-19990114-errata">Namespaces in XML Errata</a>
 @since 1.5
 */
@interface JavaxXmlNamespaceQName : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief <p><code>QName</code> constructor specifying the local part.
 </p>
  
 <p>If the local part is <code>null</code> an 
 <code>IllegalArgumentException</code> is thrown.
  A local part of "" is allowed to preserve
  compatible behavior with QName 1.0. </p>
  
 <p>When using this constructor, the Namespace URI is set to 
 <code>XMLConstants.NULL_NS_URI</code>
  and the prefix is set to <code>XMLConstants.DEFAULT_NS_PREFIX</code>
 .</p>
  
 <p><em>In an XML context, all Element and Attribute names exist
  in the context of a Namespace.  Making this explicit during the
  construction of a <code>QName</code> helps prevent hard to
  diagnosis XML validity errors.  The constructors <code>namespaceURI, String localPart)</code>
  and 
 <code>namespaceURI, String localPart, String prefix)</code>
  are preferred.</em></p>
  
 <p>The local part is not validated as a 
 <a href="http://www.w3.org/TR/REC-xml-names/#NT-NCName">NCName</a>
  as specified in <a href="http://www.w3.org/TR/REC-xml-names/">Namespaces
  in XML</a>.</p>
 @param localPart local part of the  <code> QName </code>
 - seealso: #QName(String namespaceURI, String localPart)QName(String
  namespaceURI, String localPart)
 - seealso: #QName(String namespaceURI, String localPart, String
 prefix)
 QName(String namespaceURI, String localPart, String
  prefix)
 */
- (instancetype)initWithNSString:(NSString *)localPart;

/*!
 @brief <p><code>QName</code> constructor specifying the Namespace URI
  and local part.
 </p>
  
 <p>If the Namespace URI is <code>null</code>, it is set to 
 <code>XMLConstants.NULL_NS_URI</code>
 .  This value represents no
  explicitly defined Namespace as defined by the <a href="http://www.w3.org/TR/REC-xml-names/#ns-qualnames">
 Namespaces
  in XML</a> specification.  This action preserves compatible
  behavior with QName 1.0.  Explicitly providing the <code>XMLConstants.NULL_NS_URI</code>
  value is the preferred coding
  style.</p>
  
 <p>If the local part is <code>null</code> an 
 <code>IllegalArgumentException</code> is thrown.
  A local part of "" is allowed to preserve
  compatible behavior with QName 1.0. </p>
  
 <p>When using this constructor, the prefix is set to <code>XMLConstants.DEFAULT_NS_PREFIX</code>
 .</p>
  
 <p>The Namespace URI is not validated as a 
 <a href="http://www.ietf.org/rfc/rfc2396.txt">URI reference</a>.
  The local part is not validated as a 
 <a href="http://www.w3.org/TR/REC-xml-names/#NT-NCName">NCName</a>
  as specified in <a href="http://www.w3.org/TR/REC-xml-names/">Namespaces
  in XML</a>.</p>
 @param namespaceURI Namespace URI of the  <code> QName </code>
 @param localPart local part of the  <code> QName </code>
 - seealso: #QName(String namespaceURI, String localPart, String
 prefix)
 QName(String namespaceURI, String localPart, String
  prefix)
 */
- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localPart;

/*!
 @brief <p><code>QName</code> constructor specifying the Namespace URI,
  local part and prefix.
 </p>
  
 <p>If the Namespace URI is <code>null</code>, it is set to 
 <code>XMLConstants.NULL_NS_URI</code>
 .  This value represents no
  explicitly defined Namespace as defined by the <a href="http://www.w3.org/TR/REC-xml-names/#ns-qualnames">
 Namespaces
  in XML</a> specification.  This action preserves compatible
  behavior with QName 1.0.  Explicitly providing the <code>XMLConstants.NULL_NS_URI</code>
  value is the preferred coding
  style.</p>
  
 <p>If the local part is <code>null</code> an 
 <code>IllegalArgumentException</code> is thrown.
  A local part of "" is allowed to preserve
  compatible behavior with QName 1.0. </p>
  
 <p>If the prefix is <code>null</code>, an 
 <code>IllegalArgumentException</code> is thrown.  Use <code>XMLConstants.DEFAULT_NS_PREFIX</code>
  to explicitly indicate that no
  prefix is present or the prefix is not relevant.</p>
  
 <p>The Namespace URI is not validated as a 
 <a href="http://www.ietf.org/rfc/rfc2396.txt">URI reference</a>.
  The local part and prefix are not validated as a 
 <a href="http://www.w3.org/TR/REC-xml-names/#NT-NCName">NCName</a>
  as specified in <a href="http://www.w3.org/TR/REC-xml-names/">Namespaces
  in XML</a>.</p>
 @param namespaceURI Namespace URI of the  <code> QName </code>
 @param localPart local part of the  <code> QName </code>
 @param prefix prefix of the  <code> QName </code>
 */
- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localPart
                    withNSString:(NSString *)prefix;

/*!
 @brief <p>Test this <code>QName</code> for equality with another 
 <code>Object</code>.
 </p>
  
 <p>If the <code>Object</code> to be tested is not a 
 <code>QName</code> or is <code>null</code>, then this method
  returns <code>false</code>.</p>
  
 <p>Two <code>QName</code>s are considered equal if and only if
  both the Namespace URI and local part are equal. This method
  uses <code>String.equals()</code> to check equality of the
  Namespace URI and local part. The prefix is 
 <strong><em>NOT</em></strong> used to determine equality.</p>
  
 <p>This method satisfies the general contract of <code>Object.equals(Object)</code>
 </p>
 @param objectToTest the  <code> Object </code>  to test for
   equality with this  <code> QName </code>
 @return <code>true</code> if the given <code>Object</code> is
  equal to this <code>QName</code> else <code>false</code>
 */
- (jboolean)isEqual:(id)objectToTest;

/*!
 @brief <p>Get the local part of this <code>QName</code>.
 </p>
 @return local part of this <code>QName</code>
 */
- (NSString *)getLocalPart;

/*!
 @brief <p>Get the Namespace URI of this <code>QName</code>.
 </p>
 @return Namespace URI of this <code>QName</code>
 */
- (NSString *)getNamespaceURI;

/*!
 @brief <p>Get the prefix of this <code>QName</code>.
 </p>
  
 <p>The prefix assigned to a <code>QName</code> might 
 <strong><em>NOT</em></strong> be valid in a different
  context. For example, a <code>QName</code> may be assigned a
  prefix in the context of parsing a document but that prefix may
  be invalid in the context of a different document.</p>
 @return prefix of this <code>QName</code>
 */
- (NSString *)getPrefix;

/*!
 @brief <p>Generate the hash code for this <code>QName</code>.
 </p>
  
 <p>The hash code is calculated using both the Namespace URI and
  the local part of the <code>QName</code>.  The prefix is 
 <strong><em>NOT</em></strong> used to calculate the hash
  code.</p>
  
 <p>This method satisfies the general contract of <code>Object.hashCode()</code>
 .</p>
 @return hash code for this <code>QName</code> <code>Object</code>
 */
- (NSUInteger)hash;

/*!
 @brief <p><code>String</code> representation of this 
 <code>QName</code>.
 </p>
  
 <p>The commonly accepted way of representing a <code>QName</code>
  as a <code>String</code> was <a href="http://jclark.com/xml/xmlns.htm">defined</a>
  by James Clark.  Although this is not a <em>standard</em>
  specification, it is in common use,  e.g. <code>javax.xml.transform.Transformer</code>.
  This implementation represents a <code>QName</code> as:
  "{" + Namespace URI + "}" + local part.  If the Namespace URI 
 <code>.equals(XMLConstants.NULL_NS_URI)</code>, only the
  local part is returned.  An appropriate use of this method is
  for debugging or logging for human consumption.</p>
  
 <p>Note the prefix value is <strong><em>NOT</em></strong>
  returned as part of the <code>String</code> representation.</p>
  
 <p>This method satisfies the general contract of <code>Object.toString()</code>
 .</p>
 @return <code>String</code> representation of this <code>QName</code>
 */
- (NSString *)description;

/*!
 @brief <p><code>QName</code> derived from parsing the formatted 
 <code>String</code>.
 </p>
  
 <p>If the <code>String</code> is <code>null</code> or does not conform to 
 <code>QName.toString()</code> formatting, an 
 <code>IllegalArgumentException</code> is thrown.</p>
  
 <p><em>The <code>String</code> <strong>MUST</strong> be in the
  form returned by <code>QName.toString()</code>.</em></p>
  
 <p>The commonly accepted way of representing a <code>QName</code>
  as a <code>String</code> was <a href="http://jclark.com/xml/xmlns.htm">defined</a>
  by James Clark.  Although this is not a <em>standard</em>
  specification, it is in common use,  e.g. <code>javax.xml.transform.Transformer</code>.
  This implementation parses a <code>String</code> formatted
  as: "{" + Namespace URI + "}" + local part.  If the Namespace URI 
 <code>.equals(XMLConstants.NULL_NS_URI)</code>, only the
  local part should be provided.</p>
  
 <p>The prefix value <strong><em>CANNOT</em></strong> be
  represented in the <code>String</code> and will be set to 
 <code>XMLConstants.DEFAULT_NS_PREFIX</code>
 .</p>
  
 <p>This method does not do full validation of the resulting 
 <code>QName</code>.
  <p>The Namespace URI is not validated as a 
 <a href="http://www.ietf.org/rfc/rfc2396.txt">URI reference</a>.
  The local part is not validated as a 
 <a href="http://www.w3.org/TR/REC-xml-names/#NT-NCName">NCName</a>
  as specified in 
 <a href="http://www.w3.org/TR/REC-xml-names/">Namespaces in XML</a>.</p>
 @param qNameAsString <code> String </code>  representation
   of the  <code> QName </code>
 @return <code>QName</code> corresponding to the given <code>String</code>
 - seealso: #toString()QName.toString()
 */
+ (JavaxXmlNamespaceQName *)valueOfWithNSString:(NSString *)qNameAsString;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxXmlNamespaceQName)

FOUNDATION_EXPORT void JavaxXmlNamespaceQName_initWithNSString_withNSString_(JavaxXmlNamespaceQName *self, NSString *namespaceURI, NSString *localPart);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *new_JavaxXmlNamespaceQName_initWithNSString_withNSString_(NSString *namespaceURI, NSString *localPart) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlNamespaceQName *create_JavaxXmlNamespaceQName_initWithNSString_withNSString_(NSString *namespaceURI, NSString *localPart);

FOUNDATION_EXPORT void JavaxXmlNamespaceQName_initWithNSString_withNSString_withNSString_(JavaxXmlNamespaceQName *self, NSString *namespaceURI, NSString *localPart, NSString *prefix);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *new_JavaxXmlNamespaceQName_initWithNSString_withNSString_withNSString_(NSString *namespaceURI, NSString *localPart, NSString *prefix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlNamespaceQName *create_JavaxXmlNamespaceQName_initWithNSString_withNSString_withNSString_(NSString *namespaceURI, NSString *localPart, NSString *prefix);

FOUNDATION_EXPORT void JavaxXmlNamespaceQName_initWithNSString_(JavaxXmlNamespaceQName *self, NSString *localPart);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *new_JavaxXmlNamespaceQName_initWithNSString_(NSString *localPart) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlNamespaceQName *create_JavaxXmlNamespaceQName_initWithNSString_(NSString *localPart);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlNamespaceQName_valueOfWithNSString_(NSString *qNameAsString);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlNamespaceQName)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlNamespaceQName")
