//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/StringToIntTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsStringToIntTable")
#ifdef RESTRICT_OrgApacheXmlUtilsStringToIntTable
#define INCLUDE_ALL_OrgApacheXmlUtilsStringToIntTable 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsStringToIntTable 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsStringToIntTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsStringToIntTable_) && (INCLUDE_ALL_OrgApacheXmlUtilsStringToIntTable || defined(INCLUDE_OrgApacheXmlUtilsStringToIntTable))
#define OrgApacheXmlUtilsStringToIntTable_

@class IOSObjectArray;

/*!
 @brief A very simple lookup table that stores a list of strings, the even
  number strings being keys, and the odd number strings being values.
 */
@interface OrgApacheXmlUtilsStringToIntTable : NSObject

+ (jint)INVALID_KEY;

#pragma mark Public

/*!
 @brief Default constructor.Note that the default
  block size is very small, for small lists.
 */
- (instancetype)init;

/*!
 @brief Construct a StringToIntTable, using the given block size.
 @param blocksize Size of block to allocate
 */
- (instancetype)initWithInt:(jint)blocksize;

/*!
 @brief Tell if the table contains the given string.
 @param key String to look for
 @return True if the string is in the table
 */
- (jboolean)containsWithNSString:(NSString *)key;

/*!
 @brief Tell if the table contains the given string.
 @param key String to look for
 @return The String's int value
 */
- (jint)getWithNSString:(NSString *)key;

/*!
 @brief Tell if the table contains the given string.Ignore case.
 @param key String to look for
 @return The string's int value
 */
- (jint)getIgnoreCaseWithNSString:(NSString *)key;

/*!
 @brief Get the length of the list.
 @return the length of the list
 */
- (jint)getLength;

/*!
 @brief Return array of keys in the table.
 @return Array of strings
 */
- (IOSObjectArray *)keys;

/*!
 @brief Append a string onto the vector.
 @param key String to append
 @param value The int value of the string
 */
- (void)putWithNSString:(NSString *)key
                withInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsStringToIntTable)

inline jint OrgApacheXmlUtilsStringToIntTable_get_INVALID_KEY(void);
#define OrgApacheXmlUtilsStringToIntTable_INVALID_KEY -10000
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsStringToIntTable, INVALID_KEY, jint)

FOUNDATION_EXPORT void OrgApacheXmlUtilsStringToIntTable_init(OrgApacheXmlUtilsStringToIntTable *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsStringToIntTable *new_OrgApacheXmlUtilsStringToIntTable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsStringToIntTable *create_OrgApacheXmlUtilsStringToIntTable_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsStringToIntTable_initWithInt_(OrgApacheXmlUtilsStringToIntTable *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsStringToIntTable *new_OrgApacheXmlUtilsStringToIntTable_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsStringToIntTable *create_OrgApacheXmlUtilsStringToIntTable_initWithInt_(jint blocksize);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsStringToIntTable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsStringToIntTable")
