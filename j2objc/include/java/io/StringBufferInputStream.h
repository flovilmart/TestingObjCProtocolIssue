//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/StringBufferInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoStringBufferInputStream")
#ifdef RESTRICT_JavaIoStringBufferInputStream
#define INCLUDE_ALL_JavaIoStringBufferInputStream 0
#else
#define INCLUDE_ALL_JavaIoStringBufferInputStream 1
#endif
#undef RESTRICT_JavaIoStringBufferInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoStringBufferInputStream_) && (INCLUDE_ALL_JavaIoStringBufferInputStream || defined(INCLUDE_JavaIoStringBufferInputStream))
#define JavaIoStringBufferInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief This class allows an application to create an input stream in
  which the bytes read are supplied by the contents of a string.
 Applications can also read bytes from a byte array by using a 
 <code>ByteArrayInputStream</code>.
  <p>
  Only the low eight bits of each character in the string are used by
  this class.
 @author Arthur van Hoff
 - seealso: java.io.ByteArrayInputStream
 - seealso: java.io.StringReader
 @since JDK1.0
 */
__attribute__((deprecated))
@interface JavaIoStringBufferInputStream : JavaIoInputStream {
 @public
  /*!
   @brief The string from which bytes are read.
   */
  NSString *buffer_;
  /*!
   @brief The index of the next character to read from the input stream buffer.
   - seealso: java.io.StringBufferInputStream
   */
  jint pos_;
  /*!
   @brief The number of valid characters in the input stream buffer.
   - seealso: java.io.StringBufferInputStream
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Creates a string input stream to read data from the specified string.
 @param s the underlying input buffer.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Returns the number of bytes that can be read from the input
  stream without blocking.
 @return the value of <code>count&nbsp;-&nbsp;pos</code>, which is the
              number of bytes remaining to be read from the input buffer.
 */
- (jint)available;

/*!
 @brief Reads the next byte of data from this input stream.The value
  byte is returned as an <code>int</code> in the range 
 <code>0</code> to <code>255</code>.
 If no byte is available
  because the end of the stream has been reached, the value 
 <code>-1</code> is returned. 
 <p>
  The <code>read</code> method of 
 <code>StringBufferInputStream</code> cannot block. It returns the
  low eight bits of the next character in this input stream's buffer.
 @return the next byte of data, or <code>-1</code> if the end of the
              stream is reached.
 */
- (jint)read;

/*!
 @brief Reads up to <code>len</code> bytes of data from this input stream
  into an array of bytes.
 <p>
  The <code>read</code> method of 
 <code>StringBufferInputStream</code> cannot block. It copies the
  low eight bits from the characters in this input stream's buffer into
  the byte array argument.
 @param b the buffer into which the data is read.
 @param off the start offset of the data.
 @param len the maximum number of bytes read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end of
              the stream has been reached.
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Resets the input stream to begin reading from the first character
  of this input stream's underlying buffer.
 */
- (void)reset;

/*!
 @brief Skips <code>n</code> bytes of input from this input stream.Fewer
  bytes might be skipped if the end of the input stream is reached.
 @param n the number of bytes to be skipped.
 @return the actual number of bytes skipped.
 */
- (jlong)skipWithLong:(jlong)n;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStringBufferInputStream)

J2OBJC_FIELD_SETTER(JavaIoStringBufferInputStream, buffer_, NSString *)

FOUNDATION_EXPORT void JavaIoStringBufferInputStream_initWithNSString_(JavaIoStringBufferInputStream *self, NSString *s);

FOUNDATION_EXPORT JavaIoStringBufferInputStream *new_JavaIoStringBufferInputStream_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStringBufferInputStream *create_JavaIoStringBufferInputStream_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStringBufferInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoStringBufferInputStream")