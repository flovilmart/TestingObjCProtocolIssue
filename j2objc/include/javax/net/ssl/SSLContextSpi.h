//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLContextSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLContextSpi")
#ifdef RESTRICT_JavaxNetSslSSLContextSpi
#define INCLUDE_ALL_JavaxNetSslSSLContextSpi 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLContextSpi 1
#endif
#undef RESTRICT_JavaxNetSslSSLContextSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLContextSpi_) && (INCLUDE_ALL_JavaxNetSslSSLContextSpi || defined(INCLUDE_JavaxNetSslSSLContextSpi))
#define JavaxNetSslSSLContextSpi_

@class IOSObjectArray;
@class JavaSecuritySecureRandom;
@class JavaxNetSslSSLEngine;
@class JavaxNetSslSSLParameters;
@class JavaxNetSslSSLServerSocketFactory;
@class JavaxNetSslSSLSocketFactory;
@protocol JavaxNetSslSSLSessionContext;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>SSLContext</code> class.
 <p> All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a particular SSL context.
 @since 1.4
 - seealso: SSLContext
 */
@interface JavaxNetSslSSLContextSpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

/*!
 @brief Creates a new <code>SSLEngine</code> using this context.
 <P>
  Applications using this factory method are providing no hints
  for an internal session reuse strategy. If hints are desired, 
 <code>int)</code> should be used
  instead. 
 <P>
  Some cipher suites (such as Kerberos) require remote hostname
  information, in which case this factory method should not be used.
 @return the <code>SSLEngine</code> Object
 @throw IllegalStateExceptionif the SSLContextImpl requires
          initialization and the <code>engineInit()</code>
          has not been called
 - seealso: SSLContext#createSSLEngine()
 @since 1.5
 */
- (JavaxNetSslSSLEngine *)engineCreateSSLEngine;

/*!
 @brief Creates a <code>SSLEngine</code> using this context.
 <P>
  Applications using this factory method are providing hints
  for an internal session reuse strategy. 
 <P>
  Some cipher suites (such as Kerberos) require remote hostname
  information, in which case peerHost needs to be specified.
 @param host the non-authoritative name of the host
 @param port the non-authoritative port
 @return the <code>SSLEngine</code> Object
 @throw IllegalStateExceptionif the SSLContextImpl requires
          initialization and the <code>engineInit()</code>
          has not been called
 - seealso: SSLContext#createSSLEngine(String, int)
 @since 1.5
 */
- (JavaxNetSslSSLEngine *)engineCreateSSLEngineWithNSString:(NSString *)host
                                                    withInt:(jint)port;

/*!
 @brief Returns a client <code>SSLSessionContext</code> object for
  this context.
 @return the <code>SSLSessionContext</code> object
 - seealso: javax.net.ssl.SSLContext
 */
- (id<JavaxNetSslSSLSessionContext>)engineGetClientSessionContext;

/*!
 @brief Returns a copy of the SSLParameters indicating the default
  settings for this SSL context.
 <p>The parameters will always have the ciphersuite and protocols
  arrays set to non-null values. 
 <p>The default implementation obtains the parameters from an
  SSLSocket created by calling the 
 SocketFactory.createSocket()
  method of this context's SocketFactory.
 @return a copy of the SSLParameters object with the default settings
 @throw UnsupportedOperationExceptionif the default SSL parameters
    could not be obtained.
 @since 1.6
 */
- (JavaxNetSslSSLParameters *)engineGetDefaultSSLParameters;

/*!
 @brief Returns a server <code>SSLSessionContext</code> object for
  this context.
 @return the <code>SSLSessionContext</code> object
 - seealso: javax.net.ssl.SSLContext
 */
- (id<JavaxNetSslSSLSessionContext>)engineGetServerSessionContext;

/*!
 @brief Returns a <code>ServerSocketFactory</code> object for
  this context.
 @return the <code>ServerSocketFactory</code> object
 @throw IllegalStateExceptionif the SSLContextImpl requires
          initialization and the <code>engineInit()</code>
          has not been called
 - seealso: javax.net.ssl.SSLContext
 */
- (JavaxNetSslSSLServerSocketFactory *)engineGetServerSocketFactory;

/*!
 @brief Returns a <code>SocketFactory</code> object for this
  context.
 @return the <code>SocketFactory</code> object
 @throw IllegalStateExceptionif the SSLContextImpl requires
          initialization and the <code>engineInit()</code>
          has not been called
 - seealso: javax.net.ssl.SSLContext
 */
- (JavaxNetSslSSLSocketFactory *)engineGetSocketFactory;

/*!
 @brief Returns a copy of the SSLParameters indicating the maximum supported
  settings for this SSL context.
 <p>The parameters will always have the ciphersuite and protocols
  arrays set to non-null values. 
 <p>The default implementation obtains the parameters from an
  SSLSocket created by calling the 
 SocketFactory.createSocket()
  method of this context's SocketFactory.
 @return a copy of the SSLParameters object with the maximum supported
    settings
 @throw UnsupportedOperationExceptionif the supported SSL parameters
    could not be obtained.
 @since 1.6
 */
- (JavaxNetSslSSLParameters *)engineGetSupportedSSLParameters;

/*!
 @brief Initializes this context.
 @param km the sources of authentication keys
 @param tm the sources of peer authentication trust decisions
 @param sr the source of randomness
 @throw KeyManagementExceptionif this operation fails
 - seealso: SSLContext#init(KeyManager [], TrustManager [], SecureRandom)
 */
- (void)engineInitWithJavaxNetSslKeyManagerArray:(IOSObjectArray *)km
                withJavaxNetSslTrustManagerArray:(IOSObjectArray *)tm
                    withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)sr;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLContextSpi)

FOUNDATION_EXPORT void JavaxNetSslSSLContextSpi_init(JavaxNetSslSSLContextSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLContextSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLContextSpi")
