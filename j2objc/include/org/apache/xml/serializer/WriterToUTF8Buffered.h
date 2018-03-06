//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/WriterToUTF8Buffered.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered")
#ifdef RESTRICT_OrgApacheXmlSerializerWriterToUTF8Buffered
#define INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerWriterToUTF8Buffered

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerWriterToUTF8Buffered_) && (INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered || defined(INCLUDE_OrgApacheXmlSerializerWriterToUTF8Buffered))
#define OrgApacheXmlSerializerWriterToUTF8Buffered_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

#define RESTRICT_OrgApacheXmlSerializerWriterChain 1
#define INCLUDE_OrgApacheXmlSerializerWriterChain 1
#include "org/apache/xml/serializer/WriterChain.h"

@class IOSCharArray;
@class JavaIoOutputStream;

/*!
 @brief This class writes unicode characters to a byte stream (java.io.OutputStream)
  as quickly as possible.It buffers the output in an internal
  buffer which must be flushed to the OutputStream when done.
 This flushing
  is done via the close() flush() or flushBuffer() method.  
  This class is only used internally within Xalan.
 */
@interface OrgApacheXmlSerializerWriterToUTF8Buffered : JavaIoWriter < OrgApacheXmlSerializerWriterChain >

#pragma mark Public

/*!
 @brief Create an buffered UTF-8 writer.
 @param outArg the underlying output stream.
 @throw UnsupportedEncodingException
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Close the stream, flushing it first.Once a stream has been closed,
  further write() or flush() invocations will cause an IOException to be
  thrown.
 Closing a previously-closed stream, however, has no effect.
 @throw IOExceptionIf an I/O error occurs
 @throw java.io.IOException
 */
- (void)close;

/*!
 @brief Flush the stream.If the stream has saved any characters from the
  various write() methods in a buffer, write them immediately to their
  intended destination.
 Then, if that destination is another character or
  byte stream, flush it.  Thus one flush() invocation will flush all the
  buffers in a chain of Writers and OutputStreams.
 @throw IOExceptionIf an I/O error occurs
 @throw java.io.IOException
 */
- (void)flush;

/*!
 @brief Flush the internal buffer
 @throw IOException
 */
- (void)flushBuffer;

/*!
 @brief Get the output stream where the events will be serialized to.
 @return reference to the result stream, or null of only a writer was
  set.
 */
- (JavaIoOutputStream *)getOutputStream;

- (JavaIoWriter *)getWriter;

/*!
 @brief Write a portion of an array of characters.
 @param chars Array of characters
 @param start Offset from which to start writing characters
 @param length Number of characters to write
 @throw IOExceptionIf an I/O error occurs
 @throw java.io.IOException
 */
- (void)writeWithCharArray:(IOSCharArray *)chars
                   withInt:(jint)start
                   withInt:(jint)length;

/*!
 @brief Write a single character.The character to be written is contained in
  the 16 low-order bits of the given integer value; the 16 high-order bits
  are ignored.
 <p> Subclasses that intend to support efficient single-character output
  should override this method.
 @param c int specifying a character to be written.
 @throw IOExceptionIf an I/O error occurs
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Write a string.
 @param s String to be written
 @throw IOExceptionIf an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerWriterToUTF8Buffered)

FOUNDATION_EXPORT void OrgApacheXmlSerializerWriterToUTF8Buffered_initWithJavaIoOutputStream_(OrgApacheXmlSerializerWriterToUTF8Buffered *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT OrgApacheXmlSerializerWriterToUTF8Buffered *new_OrgApacheXmlSerializerWriterToUTF8Buffered_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerWriterToUTF8Buffered *create_OrgApacheXmlSerializerWriterToUTF8Buffered_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerWriterToUTF8Buffered)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered")
