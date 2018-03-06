//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/SerializerTrace.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerTrace")
#ifdef RESTRICT_OrgApacheXmlSerializerSerializerTrace
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerTrace 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerTrace 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerSerializerTrace

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerSerializerTrace_) && (INCLUDE_ALL_OrgApacheXmlSerializerSerializerTrace || defined(INCLUDE_OrgApacheXmlSerializerSerializerTrace))
#define OrgApacheXmlSerializerSerializerTrace_

@class IOSCharArray;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This interface defines a set of integer constants that identify trace event
  types.
 */
@protocol OrgApacheXmlSerializerSerializerTrace < JavaObject >

/*!
 @brief Tell if trace listeners are present.
 @return True if there are trace listeners
 */
- (jboolean)hasTraceListeners;

/*!
 @brief Fire startDocument, endDocument events.
 @param eventType One of the EVENTTYPE_XXX constants.
 */
- (void)fireGenerateEventWithInt:(jint)eventType;

/*!
 @brief Fire startElement, endElement events.
 @param eventType One of the EVENTTYPE_XXX constants.
 @param name The name of the element.
 @param atts The SAX attribute list.
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                    withNSString:(NSString *)name
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Fire characters, cdata events.
 @param eventType One of the EVENTTYPE_XXX constants.
 @param ch The char array from the SAX event.
 @param start The start offset to be used in the char array.
 @param length The end offset to be used in the chara array.
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                   withCharArray:(IOSCharArray *)ch
                         withInt:(jint)start
                         withInt:(jint)length;

/*!
 @brief Fire processingInstruction events.
 @param eventType One of the EVENTTYPE_XXX constants.
 @param name The name of the processing instruction.
 @param data The processing instruction data.
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                    withNSString:(NSString *)name
                    withNSString:(NSString *)data;

/*!
 @brief Fire comment and entity ref events.
 @param eventType One of the EVENTTYPE_XXX constants.
 @param data The comment or entity ref data.
 */
- (void)fireGenerateEventWithInt:(jint)eventType
                    withNSString:(NSString *)data;

@end

@interface OrgApacheXmlSerializerSerializerTrace : NSObject

+ (jint)EVENTTYPE_STARTDOCUMENT;

+ (jint)EVENTTYPE_ENDDOCUMENT;

+ (jint)EVENTTYPE_STARTELEMENT;

+ (jint)EVENTTYPE_ENDELEMENT;

+ (jint)EVENTTYPE_CHARACTERS;

+ (jint)EVENTTYPE_IGNORABLEWHITESPACE;

+ (jint)EVENTTYPE_PI;

+ (jint)EVENTTYPE_COMMENT;

+ (jint)EVENTTYPE_ENTITYREF;

+ (jint)EVENTTYPE_CDATA;

+ (jint)EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS;

+ (jint)EVENTTYPE_OUTPUT_CHARACTERS;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerSerializerTrace)

/*!
 @brief Event type generated when a document begins.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_STARTDOCUMENT(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_STARTDOCUMENT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_STARTDOCUMENT, jint)

/*!
 @brief Event type generated when a document ends.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_ENDDOCUMENT(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_ENDDOCUMENT 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_ENDDOCUMENT, jint)

/*!
 @brief Event type generated when an element begins (after the attributes have been processed but before the children have been added).
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_STARTELEMENT(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_STARTELEMENT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_STARTELEMENT, jint)

/*!
 @brief Event type generated when an element ends, after it's children have been added.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_ENDELEMENT(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_ENDELEMENT 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_ENDELEMENT, jint)

/*!
 @brief Event type generated for character data (CDATA and Ignorable Whitespace have their own events).
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_CHARACTERS(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_CHARACTERS 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_CHARACTERS, jint)

/*!
 @brief Event type generated for ignorable whitespace (I'm not sure how much this is actually called.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_IGNORABLEWHITESPACE(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_IGNORABLEWHITESPACE 6
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_IGNORABLEWHITESPACE, jint)

/*!
 @brief Event type generated for processing instructions.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_PI(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_PI 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_PI, jint)

/*!
 @brief Event type generated after a comment has been added.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_COMMENT(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_COMMENT 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_COMMENT, jint)

/*!
 @brief Event type generate after an entity ref is created.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_ENTITYREF(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_ENTITYREF 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_ENTITYREF, jint)

/*!
 @brief Event type generated after CDATA is generated.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_CDATA(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_CDATA 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_CDATA, jint)

/*!
 @brief Event type generated when characters might be written to an output stream,
   but  these characters never are.They will ultimately be written out via
  EVENTTYPE_OUTPUT_CHARACTERS.
 This type is used as attributes are collected.
  Whenever the attributes change this event type is fired. At the very end
  however, when the attributes do not change anymore and are going to be
  ouput to the document the real characters will be written out using the
  EVENTTYPE_OUTPUT_CHARACTERS.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS, jint)

/*!
 @brief Event type generated when characters are written to an output stream.
 */
inline jint OrgApacheXmlSerializerSerializerTrace_get_EVENTTYPE_OUTPUT_CHARACTERS(void);
#define OrgApacheXmlSerializerSerializerTrace_EVENTTYPE_OUTPUT_CHARACTERS 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerSerializerTrace, EVENTTYPE_OUTPUT_CHARACTERS, jint)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerSerializerTrace)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerTrace")
