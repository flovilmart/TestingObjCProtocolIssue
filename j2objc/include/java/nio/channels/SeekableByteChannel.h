//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/SeekableByteChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSeekableByteChannel")
#ifdef RESTRICT_JavaNioChannelsSeekableByteChannel
#define INCLUDE_ALL_JavaNioChannelsSeekableByteChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSeekableByteChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSeekableByteChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSeekableByteChannel_) && (INCLUDE_ALL_JavaNioChannelsSeekableByteChannel || defined(INCLUDE_JavaNioChannelsSeekableByteChannel))
#define JavaNioChannelsSeekableByteChannel_

#define RESTRICT_JavaNioChannelsByteChannel 1
#define INCLUDE_JavaNioChannelsByteChannel 1
#include "java/nio/channels/ByteChannel.h"

@class JavaNioByteBuffer;

/*!
 @brief A byte channel that maintains a current <i>position</i> and allows the
  position to be changed.
 <p> A seekable byte channel is connected to an entity, typically a file,
  that contains a variable-length sequence of bytes that can be read and
  written. The current position can be <code><i>queried</i></code> and 
 <code><i>modified</i></code>. The channel also provides access to
  the current <i>size</i> of the entity to which the channel is connected. The
  size increases when bytes are written beyond its current size; the size
  decreases when it is <code><i>truncated</i></code>.
  
 <p> The <code>position</code> and <code>truncate</code> methods
  which do not otherwise have a value to return are specified to return the
  channel upon which they are invoked. This allows method invocations to be
  chained. Implementations of this interface should specialize the return type
  so that method invocations on the implementation class can be chained.
 @since 1.7
 - seealso: java.nio.file.Files
 */
@protocol JavaNioChannelsSeekableByteChannel < JavaNioChannelsByteChannel, JavaObject >

/*!
 @brief Reads a sequence of bytes from this channel into the given buffer.
 <p> Bytes are read starting at this channel's current position, and
  then the position is updated with the number of bytes actually read.
  Otherwise this method behaves exactly as specified in the <code>ReadableByteChannel</code>
  interface.
 */
- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

/*!
 @brief Writes a sequence of bytes to this channel from the given buffer.
 <p> Bytes are written starting at this channel's current position.
  The entity to which
  the channel is connected is grown, if necessary, to accommodate the
  written bytes, and then the position is updated with the number of bytes
  actually written. Otherwise this method behaves exactly as specified by
  the <code>WritableByteChannel</code> interface.
 */
- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

/*!
 @brief Returns this channel's position.
 @return This channel's position,
           a non-negative integer counting the number of bytes
           from the beginning of the entity to the current position
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 */
- (jlong)position;

/*!
 @brief Sets this channel's position.
 <p> Setting the position to a value that is greater than the current size
  is legal but does not change the size of the entity.  A later attempt to
  read bytes at such a position will immediately return an end-of-file
  indication.  A later attempt to write bytes at such a position will cause
  the entity to grow to accommodate the new bytes; the values of any bytes
  between the previous end-of-file and the newly-written bytes are
  unspecified.
 @param newPosition The new position, a non-negative integer counting
           the number of bytes from the beginning of the entity
 @return This channel
 @throw ClosedChannelException
 If this channel is closed
 @throw IllegalArgumentException
 If the new position is negative
 @throw IOException
 If some other I/O error occurs
 */
- (id<JavaNioChannelsSeekableByteChannel>)positionWithLong:(jlong)newPosition;

/*!
 @brief Returns the current size of entity to which this channel is connected.
 @return The current size, measured in bytes
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 */
- (jlong)size;

/*!
 @brief Truncates the entity, to which this channel is connected, to the given
  size.
 <p> If the given size is less than the current size then the entity is
  truncated, discarding any bytes beyond the new end. If the given size is
  greater than or equal to the current size then the entity is not modified.
  In either case, if the current position is greater than the given size
  then it is set to that size.
 @param size The new size, a non-negative byte count
 @return This channel
 @throw NonWritableChannelException
 If this channel was not opened for writing
 @throw ClosedChannelException
 If this channel is closed
 @throw IllegalArgumentException
 If the new size is negative
 @throw IOException
 If some other I/O error occurs
 */
- (id<JavaNioChannelsSeekableByteChannel>)truncateWithLong:(jlong)size;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSeekableByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSeekableByteChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSeekableByteChannel")