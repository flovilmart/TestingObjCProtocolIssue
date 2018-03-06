//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/AxesWalker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesAxesWalker")
#ifdef RESTRICT_OrgApacheXpathAxesAxesWalker
#define INCLUDE_ALL_OrgApacheXpathAxesAxesWalker 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesAxesWalker 1
#endif
#undef RESTRICT_OrgApacheXpathAxesAxesWalker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesAxesWalker_) && (INCLUDE_ALL_OrgApacheXpathAxesAxesWalker || defined(INCLUDE_OrgApacheXpathAxesAxesWalker))
#define OrgApacheXpathAxesAxesWalker_

#define RESTRICT_OrgApacheXpathAxesPredicatedNodeTest 1
#define INCLUDE_OrgApacheXpathAxesPredicatedNodeTest 1
#include "org/apache/xpath/axes/PredicatedNodeTest.h"

#define RESTRICT_OrgApacheXpathAxesPathComponent 1
#define INCLUDE_OrgApacheXpathAxesPathComponent 1
#include "org/apache/xpath/axes/PathComponent.h"

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class JavaUtilVector;
@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathAxesWalkingIterator;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTM;

/*!
 @brief Serves as common interface for axes Walkers, and stores common
  state variables.
 */
@interface OrgApacheXpathAxesAxesWalker : OrgApacheXpathAxesPredicatedNodeTest < NSCopying, OrgApacheXpathAxesPathComponent, OrgApacheXpathExpressionOwner > {
 @public
  /*!
   @brief The root node of the TreeWalker, as specified when it was created.
   */
  jint m_root_;
  /*!
   @brief True if an itteration has not begun.
   */
  jboolean m_isFresh_;
  /*!
   @brief The next walker in the location step chain.
   */
  OrgApacheXpathAxesAxesWalker *m_nextWalker_;
  /*!
   @brief The previous walker in the location step chain, or null.
   */
  OrgApacheXpathAxesAxesWalker *m_prevWalker_;
  /*!
   @brief The traversal axis from where the nodes will be filtered.
   */
  jint m_axis_;
  /*!
   @brief The DTM inner traversal class, that corresponds to the super axis.
   */
  OrgApacheXmlDtmDTMAxisTraverser *m_traverser_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct an AxesWalker using a LocPathIterator.
 @param locPathIterator non-null reference to the parent iterator.
 */
- (instancetype)initWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)locPathIterator
                                                  withInt:(jint)axis;

/*!
 @brief This will traverse the heararchy, calling the visitor for 
  each member.If the called visitor method returns 
  false, the subtree should not be called.
 @param owner The owner of the visitor, where that path may be                rewritten if needed.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Get a cloned AxesWalker.
 @return A new AxesWalker that can be used without mutating this one.
 @throw CloneNotSupportedException
 */
- (id)java_clone;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Detaches the walker from the set which it iterated over, releasing
  any computational resources and placing the iterator in the INVALID
  state.
 */
- (void)detach;

/*!
 @brief Get the analysis bits for this walker, as defined in the WalkerFactory.
 @return One of WalkerFactory#BIT_DESCENDANT, etc.
 */
- (jint)getAnalysisBits;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
  types.
 */
- (jint)getAxis;

/*!
 @brief The node at which the TreeWalker is currently positioned.
 <br> The value must not be null. Alterations to the DOM tree may cause
  the current node to no longer be accepted by the TreeWalker's
  associated filter. currentNode may also be explicitly set to any node,
  whether or not it is within the subtree specified by the root node or
  would be accepted by the filter and whatToShow flags. Further
  traversal occurs relative to currentNode even if it is not part of the
  current view by applying the filters in the requested direction (not
  changing currentNode where no traversal is possible).
 @return The node at which the TreeWalker is currently positioned, only null 
  if setRoot has not yet been called.
 */
- (jint)getCurrentNode;

/*!
 @brief Get the DTM for this walker.
 @return Non-null reference to a DTM.
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithInt:(jint)node;

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 @brief Get the index of the last node that can be itterated to.
 @param xctxt XPath runtime context.
 @return the index of the last node that can be itterated to.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the next walker in the location step chain.
 @return Reference to AxesWalker derivative, or null.
 */
- (OrgApacheXpathAxesAxesWalker *)getNextWalker;

/*!
 @brief Get the previous walker reference in the location step chain.
 @return Reference to previous walker reference in the location 
                step chain, or null.
 */
- (OrgApacheXpathAxesAxesWalker *)getPrevWalker;

/*!
 @brief The root node of the TreeWalker, as specified in setRoot(int root).
 Note that this may actually be below the current node.
 @return The context node of the step.
 */
- (jint)getRoot;

/*!
 @brief Initialize an AxesWalker during the parse of the XPath expression.
 @param compiler The Compiler object that has information about this                   walker in the op map.
 @param opPos The op code position of this location step.
 @param stepType The type of location step.
 @throw javax.xml.transform.TransformerException
 */
- (void)init__WithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                         withInt:(jint)opPos
                                         withInt:(jint)stepType OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
  order.
 Warning: This can only be called after setRoot has been called!
 @return true as a default.
 */
- (jboolean)isDocOrdered;

/*!
 @brief Moves the <code>TreeWalker</code> to the next visible node in document
  order relative to the current node, and returns the new node.If the
  current node has no next node,  or if the search for nextNode attempts
  to step upward from the TreeWalker's root node, returns 
 <code>null</code> , and retains the current node.
 @return The new node, or <code>null</code> if the current node has no
    next node  in the TreeWalker's logical view.
 */
- (jint)nextNode;

/*!
 @brief Set the DTM for this walker.
 @param dtm Non-null reference to a DTM.
 */
- (void)setDefaultDTMWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

/*!
 @brief Set the next walker in the location step chain.
 @param walker Reference to AxesWalker derivative, or may be null.
 */
- (void)setNextWalkerWithOrgApacheXpathAxesAxesWalker:(OrgApacheXpathAxesAxesWalker *)walker;

/*!
 @brief Set or clear the previous walker reference in the location step chain.
 @param walker Reference to previous walker reference in the location                 step chain, or null.
 */
- (void)setPrevWalkerWithOrgApacheXpathAxesAxesWalker:(OrgApacheXpathAxesAxesWalker *)walker;

/*!
 @brief Set the root node of the TreeWalker.
 (Not part of the DOM2 TreeWalker interface).
 @param root The context node of this step.
 */
- (void)setRootWithInt:(jint)root;

- (OrgApacheXpathAxesWalkingIterator *)wi;

#pragma mark Protected

/*!
 @brief Get the next node in document order on the axes.
 @return the next node in document order on the axes, or null.
 */
- (jint)getNextNode;

#pragma mark Package-Private

/*!
 @brief Do a deep clone of this walker, including next and previous walkers.
 If the this AxesWalker is on the clone list, don't clone but 
  return the already cloned version.
 @param cloneOwner non-null reference to the cloned location path                     iterator to which this clone will be added.
 @param cloneList non-null vector of sources in odd elements, and the                    corresponding clones in even vectors.
 @return non-null clone, which may be a new clone, or may be a clone 
          contained on the cloneList.
 */
- (OrgApacheXpathAxesAxesWalker *)cloneDeepWithOrgApacheXpathAxesWalkingIterator:(OrgApacheXpathAxesWalkingIterator *)cloneOwner
                                                              withJavaUtilVector:(JavaUtilVector *)cloneList;

/*!
 @brief Find a clone that corresponds to the key argument.
 @param key The original AxesWalker for which there may be a clone.
 @param cloneList vector of sources in odd elements, and the                    corresponding clones in even vectors, may be null.
 @return A clone that corresponds to the key, or null if key not found.
 */
+ (OrgApacheXpathAxesAxesWalker *)findCloneWithOrgApacheXpathAxesAxesWalker:(OrgApacheXpathAxesAxesWalker *)key
                                                         withJavaUtilVector:(JavaUtilVector *)cloneList;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesAxesWalker)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesAxesWalker, m_nextWalker_, OrgApacheXpathAxesAxesWalker *)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesAxesWalker, m_prevWalker_, OrgApacheXpathAxesAxesWalker *)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesAxesWalker, m_traverser_, OrgApacheXmlDtmDTMAxisTraverser *)

inline jlong OrgApacheXpathAxesAxesWalker_get_serialVersionUID(void);
#define OrgApacheXpathAxesAxesWalker_serialVersionUID -2966031951306601247LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesAxesWalker, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesAxesWalker_initWithOrgApacheXpathAxesLocPathIterator_withInt_(OrgApacheXpathAxesAxesWalker *self, OrgApacheXpathAxesLocPathIterator *locPathIterator, jint axis);

FOUNDATION_EXPORT OrgApacheXpathAxesAxesWalker *new_OrgApacheXpathAxesAxesWalker_initWithOrgApacheXpathAxesLocPathIterator_withInt_(OrgApacheXpathAxesLocPathIterator *locPathIterator, jint axis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesAxesWalker *create_OrgApacheXpathAxesAxesWalker_initWithOrgApacheXpathAxesLocPathIterator_withInt_(OrgApacheXpathAxesLocPathIterator *locPathIterator, jint axis);

FOUNDATION_EXPORT OrgApacheXpathAxesAxesWalker *OrgApacheXpathAxesAxesWalker_findCloneWithOrgApacheXpathAxesAxesWalker_withJavaUtilVector_(OrgApacheXpathAxesAxesWalker *key, JavaUtilVector *cloneList);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesAxesWalker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesAxesWalker")
