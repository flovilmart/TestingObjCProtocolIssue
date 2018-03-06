//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/NamespaceMappings.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerNamespaceMappings")
#ifdef RESTRICT_OrgApacheXmlSerializerNamespaceMappings
#define INCLUDE_ALL_OrgApacheXmlSerializerNamespaceMappings 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerNamespaceMappings 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerNamespaceMappings

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerNamespaceMappings_) && (INCLUDE_ALL_OrgApacheXmlSerializerNamespaceMappings || defined(INCLUDE_OrgApacheXmlSerializerNamespaceMappings))
#define OrgApacheXmlSerializerNamespaceMappings_

@class IOSObjectArray;
@class OrgApacheXmlSerializerNamespaceMappings_MappingRecord;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This class keeps track of the currently defined namespaces.Conceptually the
  prefix/uri/depth triplets are pushed on a stack pushed on a stack.
 The depth
  indicates the nesting depth of the element for which the mapping was made.  
 <p>For example: 
 @code

   <chapter xmlns:p1="def">
      <paragraph xmlns:p2="ghi">
            <sentance xmlns:p3="jkl">
            </sentance>
        </paragraph>
        <paragraph xlmns:p4="mno">
        </paragraph>
   </chapter>
   
@endcode
  
  When the <chapter> element is encounted the prefix "p1" associated with uri
  "def" is pushed on the stack with depth 1.
  When the first <paragraph> is encountered "p2" and "ghi" are pushed with
  depth 2.
  When the <sentance> is encountered "p3" and "jkl" are pushed with depth 3.
  When </sentance> occurs the popNamespaces(3) will pop "p3"/"jkl" off the
  stack.  Of course popNamespaces(2) would pop anything with depth 2 or
  greater. 
  So prefix/uri pairs are pushed and poped off the stack as elements are
  processed.  At any given moment of processing the currently visible prefixes
  are on the stack and a prefix can be found given a uri, or a uri can be found
  given a prefix.
  This class is intended for internal use only.  However, it is made public because
  other packages require it.
 */
@interface OrgApacheXmlSerializerNamespaceMappings : NSObject

#pragma mark Public

/*!
 @brief Default constructor
 - seealso: java.lang.Object
 */
- (instancetype)init;

/*!
 @brief This method makes a clone of this object.
 */
- (id)java_clone;

/*!
 @brief Generate a new namespace prefix ( ns0, ns1 ...) not used before
 @return String a new namespace prefix ( ns0, ns1, ns2 ...)
 */
- (NSString *)generateNextPrefix;

/*!
 @brief Given a namespace uri, get all prefixes bound to the Namespace URI in the current scope.
 @param uri the namespace URI to be search for
 @return An array of Strings which are
  all prefixes bound to the namespace URI in the current scope.
  An array of zero elements is returned if no prefixes map to the given
  namespace URI.
 */
- (IOSObjectArray *)lookupAllPrefixesWithNSString:(NSString *)uri;

/*!
 @brief Use a namespace prefix to lookup a namespace URI.
 @param prefix String the prefix of the namespace
 @return the URI corresponding to the prefix, returns ""
  if there is no visible mapping.
 */
- (NSString *)lookupNamespaceWithNSString:(NSString *)prefix;

/*!
 @brief Given a namespace uri, and the namespaces mappings for the 
  current element, return the current prefix for that uri.
 @param uri the namespace URI to be search for
 @return an existing prefix that maps to the given URI, null if no prefix
  maps to the given namespace URI.
 */
- (NSString *)lookupPrefixWithNSString:(NSString *)uri;

/*!
 @brief Declare a mapping of a prefix to namespace URI at the given element depth.
 @param prefix a String with the prefix for a qualified name
 @param uri a String with the uri to which the prefix is to map
 @param elemDepth the depth of current declaration
 */
- (jboolean)pushNamespaceWithNSString:(NSString *)prefix
                         withNSString:(NSString *)uri
                              withInt:(jint)elemDepth;

#pragma mark Package-Private

- (OrgApacheXmlSerializerNamespaceMappings_MappingRecord *)getMappingFromPrefixWithNSString:(NSString *)prefix;

- (OrgApacheXmlSerializerNamespaceMappings_MappingRecord *)getMappingFromURIWithNSString:(NSString *)uri;

/*!
 @brief Undeclare the namespace that is currently pointed to by a given prefix
 */
- (jboolean)popNamespaceWithNSString:(NSString *)prefix;

/*!
 @brief Pop, or undeclare all namespace definitions that are currently
  declared at the given element depth, or deepter.
 @param elemDepth the element depth for which mappings declared at this  depth or deeper will no longer be valid
 @param saxHandler The ContentHandler to notify of any endPrefixMapping()  calls.  This parameter can be null.
 */
- (void)popNamespacesWithInt:(jint)elemDepth
 withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)saxHandler;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerNamespaceMappings)

FOUNDATION_EXPORT void OrgApacheXmlSerializerNamespaceMappings_init(OrgApacheXmlSerializerNamespaceMappings *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerNamespaceMappings *new_OrgApacheXmlSerializerNamespaceMappings_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerNamespaceMappings *create_OrgApacheXmlSerializerNamespaceMappings_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerNamespaceMappings)

#endif

#if !defined (OrgApacheXmlSerializerNamespaceMappings_MappingRecord_) && (INCLUDE_ALL_OrgApacheXmlSerializerNamespaceMappings || defined(INCLUDE_OrgApacheXmlSerializerNamespaceMappings_MappingRecord))
#define OrgApacheXmlSerializerNamespaceMappings_MappingRecord_

@class OrgApacheXmlSerializerNamespaceMappings;

/*!
 @brief Just a little class that ties the 3 fields together
  into one object, and this simplifies the pushing
  and popping of namespaces to one push or one pop on
  one stack rather than on 3 separate stacks.
 */
@interface OrgApacheXmlSerializerNamespaceMappings_MappingRecord : NSObject {
 @public
  NSString *m_prefix_;
  NSString *m_uri_;
  jint m_declarationDepth_;
}

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXmlSerializerNamespaceMappings:(OrgApacheXmlSerializerNamespaceMappings *)outer$
                                                   withNSString:(NSString *)prefix
                                                   withNSString:(NSString *)uri
                                                        withInt:(jint)depth;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerNamespaceMappings_MappingRecord)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerNamespaceMappings_MappingRecord, m_prefix_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerNamespaceMappings_MappingRecord, m_uri_, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerNamespaceMappings_MappingRecord_initWithOrgApacheXmlSerializerNamespaceMappings_withNSString_withNSString_withInt_(OrgApacheXmlSerializerNamespaceMappings_MappingRecord *self, OrgApacheXmlSerializerNamespaceMappings *outer$, NSString *prefix, NSString *uri, jint depth);

FOUNDATION_EXPORT OrgApacheXmlSerializerNamespaceMappings_MappingRecord *new_OrgApacheXmlSerializerNamespaceMappings_MappingRecord_initWithOrgApacheXmlSerializerNamespaceMappings_withNSString_withNSString_withInt_(OrgApacheXmlSerializerNamespaceMappings *outer$, NSString *prefix, NSString *uri, jint depth) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerNamespaceMappings_MappingRecord *create_OrgApacheXmlSerializerNamespaceMappings_MappingRecord_initWithOrgApacheXmlSerializerNamespaceMappings_withNSString_withNSString_withInt_(OrgApacheXmlSerializerNamespaceMappings *outer$, NSString *prefix, NSString *uri, jint depth);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerNamespaceMappings_MappingRecord)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerNamespaceMappings")
