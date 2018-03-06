//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/spi/AbstractInterruptibleChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel")
#ifdef RESTRICT_JavaNioChannelsSpiAbstractInterruptibleChannel
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSpiAbstractInterruptibleChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSpiAbstractInterruptibleChannel_) && (INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel || defined(INCLUDE_JavaNioChannelsSpiAbstractInterruptibleChannel))
#define JavaNioChannelsSpiAbstractInterruptibleChannel_

#define RESTRICT_JavaNioChannelsChannel 1
#define INCLUDE_JavaNioChannelsChannel 1
#include "java/nio/channels/Channel.h"

#define RESTRICT_JavaNioChannelsInterruptibleChannel 1
#define INCLUDE_JavaNioChannelsInterruptibleChannel 1
#include "java/nio/channels/InterruptibleChannel.h"

@protocol SunNioChInterruptible;

/*!
 @brief Base implementation class for interruptible channels.
 <p> This class encapsulates the low-level machinery required to implement
  the asynchronous closing and interruption of channels.  A concrete channel
  class must invoke the <code>begin</code> and <code>end</code> methods
  before and after, respectively, invoking an I/O operation that might block
  indefinitely.  In order to ensure that the <code>end</code> method is always
  invoked, these methods should be used within a 
 <tt>try</tt>&nbsp;...&nbsp;<tt>finally</tt> block: <a name="be">
  
 <blockquote>@code

  boolean completed = false;
  try {
      begin();
      completed = ...;    // Perform blocking I/O operation
      return ...;         // Return result
  } finally {
      end(completed);
  }
@endcode</blockquote>
  
 <p> The <tt>completed</tt> argument to the <code>end</code> method tells
  whether or not the I/O operation actually completed, that is, whether it had
  any effect that would be visible to the invoker.  In the case of an
  operation that reads bytes, for example, this argument should be 
 <tt>true</tt> if, and only if, some bytes were actually transferred into the
  invoker's target buffer. 
 <p> A concrete channel class must also implement the <code>implCloseChannel</code>
  method in such a way that if it is
  invoked while another thread is blocked in a native I/O operation upon the
  channel then that operation will immediately return, either by throwing an
  exception or by returning normally.  If a thread is interrupted or the
  channel upon which it is blocked is asynchronously closed then the channel's 
 <code>end</code> method will throw the appropriate exception. 
 <p> This class performs the synchronization required to implement the <code>java.nio.channels.Channel</code>
  specification.  Implementations of the <code>implCloseChannel</code>
  method need not synchronize against
  other threads that might be attempting to close the channel.  </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioChannelsSpiAbstractInterruptibleChannel : NSObject < JavaNioChannelsChannel, JavaNioChannelsInterruptibleChannel >

#pragma mark Public

/*!
 @brief Closes this channel.
 <p> If the channel has already been closed then this method returns
  immediately.  Otherwise it marks the channel as closed and then invokes the 
 <code>implCloseChannel</code> method in order to
  complete the close operation.  </p>
 @throw IOException
 If an I/O error occurs
 */
- (void)close;

- (jboolean)isOpen;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 */
- (instancetype)init;

/*!
 @brief Marks the beginning of an I/O operation that might block indefinitely.
 <p> This method should be invoked in tandem with the <code>end</code>
  method, using a <tt>try</tt>&nbsp;...&nbsp;<tt>finally</tt> block as
  shown <a href="#be">above</a>, in order to implement asynchronous
  closing and interruption for this channel.  </p>
 */
- (void)begin;

/*!
 @brief Marks the end of an I/O operation that might block indefinitely.
 <p> This method should be invoked in tandem with the <code>begin</code>
  method, using a <tt>try</tt>&nbsp;...&nbsp;<tt>finally</tt> block
  as shown <a href="#be">above</a>, in order to implement asynchronous
  closing and interruption for this channel.  </p>
 @param completed <tt>
  true </tt>  if, and only if, the I/O operation completed          successfully, that is, had some effect that would be visible to
           the operation's invoker
 @throw AsynchronousCloseException
 If the channel was asynchronously closed
 @throw ClosedByInterruptException
 If the thread blocked in the I/O operation was interrupted
 */
- (void)endWithBoolean:(jboolean)completed;

/*!
 @brief Closes this channel.
 <p> This method is invoked by the <code>close</code> method in order
  to perform the actual work of closing the channel.  This method is only
  invoked if the channel has not yet been closed, and it is never invoked
  more than once. 
 <p> An implementation of this method must arrange for any other thread
  that is blocked in an I/O operation upon this channel to return
  immediately, either by throwing an exception or by returning normally. 
 </p>
 @throw IOException
 If an I/O error occurs while closing the channel
 */
- (void)implCloseChannel;

#pragma mark Package-Private

+ (void)blockedOnWithSunNioChInterruptible:(id<SunNioChInterruptible>)intr;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractInterruptibleChannel)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractInterruptibleChannel_init(JavaNioChannelsSpiAbstractInterruptibleChannel *self);

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractInterruptibleChannel_blockedOnWithSunNioChInterruptible_(id<SunNioChInterruptible> intr);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractInterruptibleChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel")
