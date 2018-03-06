//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/WhiteSpaceInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesWhiteSpaceInfo")
#ifdef RESTRICT_OrgApacheXalanTemplatesWhiteSpaceInfo
#define INCLUDE_ALL_OrgApacheXalanTemplatesWhiteSpaceInfo 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesWhiteSpaceInfo 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesWhiteSpaceInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesWhiteSpaceInfo_) && (INCLUDE_ALL_OrgApacheXalanTemplatesWhiteSpaceInfo || defined(INCLUDE_OrgApacheXalanTemplatesWhiteSpaceInfo))
#define OrgApacheXalanTemplatesWhiteSpaceInfo_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplate 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplate 1
#include "org/apache/xalan/templates/ElemTemplate.h"

@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXpathXPath;

/*!
 @brief This is used as a special "fake" template that can be
  handled by the TemplateList to do pattern matching
  on nodes.
 */
@interface OrgApacheXalanTemplatesWhiteSpaceInfo : OrgApacheXalanTemplatesElemTemplate

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor WhiteSpaceInfo
 @param thisSheet The current stylesheet
 */
- (instancetype)initWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)thisSheet;

/*!
 @brief Constructor WhiteSpaceInfo
 @param matchPattern Match pattern
 @param shouldStripSpace Flag indicating whether or not  to strip whitespaces
 @param thisSheet The current stylesheet
 */
- (instancetype)initWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)matchPattern
                                withBoolean:(jboolean)shouldStripSpace
      withOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)thisSheet;

/*!
 @brief Return true if this element specifies that the node that
  matches the match pattern should be stripped, otherwise
  the space should be preserved.
 @return value of m_shouldStripSpace flag
 */
- (jboolean)getShouldStripSpace;

/*!
 @brief This function is called to recompose() all of the WhiteSpaceInfo elements.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesWhiteSpaceInfo)

inline jlong OrgApacheXalanTemplatesWhiteSpaceInfo_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesWhiteSpaceInfo_serialVersionUID 6389208261999943836LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesWhiteSpaceInfo, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesWhiteSpaceInfo_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesWhiteSpaceInfo *self, OrgApacheXalanTemplatesStylesheet *thisSheet);

FOUNDATION_EXPORT OrgApacheXalanTemplatesWhiteSpaceInfo *new_OrgApacheXalanTemplatesWhiteSpaceInfo_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *thisSheet) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesWhiteSpaceInfo *create_OrgApacheXalanTemplatesWhiteSpaceInfo_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *thisSheet);

FOUNDATION_EXPORT void OrgApacheXalanTemplatesWhiteSpaceInfo_initWithOrgApacheXpathXPath_withBoolean_withOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesWhiteSpaceInfo *self, OrgApacheXpathXPath *matchPattern, jboolean shouldStripSpace, OrgApacheXalanTemplatesStylesheet *thisSheet);

FOUNDATION_EXPORT OrgApacheXalanTemplatesWhiteSpaceInfo *new_OrgApacheXalanTemplatesWhiteSpaceInfo_initWithOrgApacheXpathXPath_withBoolean_withOrgApacheXalanTemplatesStylesheet_(OrgApacheXpathXPath *matchPattern, jboolean shouldStripSpace, OrgApacheXalanTemplatesStylesheet *thisSheet) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesWhiteSpaceInfo *create_OrgApacheXalanTemplatesWhiteSpaceInfo_initWithOrgApacheXpathXPath_withBoolean_withOrgApacheXalanTemplatesStylesheet_(OrgApacheXpathXPath *matchPattern, jboolean shouldStripSpace, OrgApacheXalanTemplatesStylesheet *thisSheet);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesWhiteSpaceInfo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesWhiteSpaceInfo")
