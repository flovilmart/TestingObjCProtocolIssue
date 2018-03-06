//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/Counter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerCounter")
#ifdef RESTRICT_OrgApacheXalanTransformerCounter
#define INCLUDE_ALL_OrgApacheXalanTransformerCounter 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerCounter 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerCounter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerCounter_) && (INCLUDE_ALL_OrgApacheXalanTransformerCounter || defined(INCLUDE_OrgApacheXalanTransformerCounter))
#define OrgApacheXalanTransformerCounter_

@class OrgApacheXalanTemplatesElemNumber;
@class OrgApacheXpathNodeSetDTM;
@class OrgApacheXpathXPathContext;

/*!
 @brief A class that does incremental counting for support of xsl:number.
 This class stores a cache of counted nodes (m_countNodes).
  It tries to cache the counted nodes in document order...
  the node count is based on its position in the cache list
 */
@interface OrgApacheXalanTransformerCounter : NSObject {
 @public
  /*!
   @brief The start count from where m_countNodes counts
  from.In other words, the count of a given node
  in the m_countNodes vector is node position +
  m_countNodesStartCount.
   */
  jint m_countNodesStartCount_;
  /*!
   @brief A vector of all nodes counted so far.
   */
  OrgApacheXpathNodeSetDTM *m_countNodes_;
  /*!
   @brief The node from where the counting starts.This is needed to
  find a counter if the node being counted is not immediatly
  found in the m_countNodes vector.
   */
  jint m_fromNode_;
  /*!
   @brief The owning xsl:number element.
   */
  OrgApacheXalanTemplatesElemNumber *m_numberElem_;
  /*!
   @brief Value to store result of last getCount call, for benifit
  of returning val from CountersTable.getCounterByCounted,
  who calls getCount.
   */
  jint m_countResult_;
}

+ (jint)MAXCOUNTNODES;

#pragma mark Package-Private

/*!
 @brief Construct a counter object.
 @param numberElem The owning xsl:number element.
 @param countNodes A vector of all nodes counted so far.
 @throw TransformerException
 */
- (instancetype)initWithOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem
                             withOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)countNodes;

/*!
 @brief Get the last node in the list.
 @return the last node in the list.
 */
- (jint)getLast;

/*!
 @brief Try and find a node that was previously counted.If found,
  return a positive integer that corresponds to the count.
 @param support The XPath context to use
 @param node The node to be counted.
 @return The count of the node, or -1 if not found.
 */
- (jint)getPreviouslyCountedWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
                                                   withInt:(jint)node;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerCounter)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerCounter, m_countNodes_, OrgApacheXpathNodeSetDTM *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerCounter, m_numberElem_, OrgApacheXalanTemplatesElemNumber *)

/*!
 @brief Set the maximum ammount the m_countNodes list can
  grow to.
 */
inline jint OrgApacheXalanTransformerCounter_get_MAXCOUNTNODES(void);
#define OrgApacheXalanTransformerCounter_MAXCOUNTNODES 500
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTransformerCounter, MAXCOUNTNODES, jint)

FOUNDATION_EXPORT void OrgApacheXalanTransformerCounter_initWithOrgApacheXalanTemplatesElemNumber_withOrgApacheXpathNodeSetDTM_(OrgApacheXalanTransformerCounter *self, OrgApacheXalanTemplatesElemNumber *numberElem, OrgApacheXpathNodeSetDTM *countNodes);

FOUNDATION_EXPORT OrgApacheXalanTransformerCounter *new_OrgApacheXalanTransformerCounter_initWithOrgApacheXalanTemplatesElemNumber_withOrgApacheXpathNodeSetDTM_(OrgApacheXalanTemplatesElemNumber *numberElem, OrgApacheXpathNodeSetDTM *countNodes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerCounter *create_OrgApacheXalanTransformerCounter_initWithOrgApacheXalanTemplatesElemNumber_withOrgApacheXpathNodeSetDTM_(OrgApacheXalanTemplatesElemNumber *numberElem, OrgApacheXpathNodeSetDTM *countNodes);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerCounter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerCounter")
