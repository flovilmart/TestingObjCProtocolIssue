//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/TrustManagerFactorySpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslTrustManagerFactorySpi")
#ifdef RESTRICT_JavaxNetSslTrustManagerFactorySpi
#define INCLUDE_ALL_JavaxNetSslTrustManagerFactorySpi 0
#else
#define INCLUDE_ALL_JavaxNetSslTrustManagerFactorySpi 1
#endif
#undef RESTRICT_JavaxNetSslTrustManagerFactorySpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslTrustManagerFactorySpi_) && (INCLUDE_ALL_JavaxNetSslTrustManagerFactorySpi || defined(INCLUDE_JavaxNetSslTrustManagerFactorySpi))
#define JavaxNetSslTrustManagerFactorySpi_

@class IOSObjectArray;
@class JavaSecurityKeyStore;
@protocol JavaxNetSslManagerFactoryParameters;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>TrustManagerFactory</code> class.
 <p> All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a particular trust manager factory.
 @since 1.4
 - seealso: TrustManagerFactory
 - seealso: TrustManager
 */
@interface JavaxNetSslTrustManagerFactorySpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

/*!
 @brief Returns one trust manager for each type of trust material.
 @throw IllegalStateExceptionif the factory is not initialized.
 @return the trust managers
 */
- (IOSObjectArray *)engineGetTrustManagers;

/*!
 @brief Initializes this factory with a source of certificate
  authorities and related trust material.
 @param ks the key store or null
 @throw KeyStoreExceptionif this operation fails
 - seealso: TrustManagerFactory#init(KeyStore)
 */
- (void)engineInitWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks;

/*!
 @brief Initializes this factory with a source of provider-specific
  key material.
 <P>
  In some cases, initialization parameters other than a keystore
  may be needed by a provider.  Users of that
  particular provider are expected to pass an implementation of
  the appropriate <CODE>ManagerFactoryParameters</CODE> as
  defined by the provider.  The provider can then call the
  specified methods in the <CODE>ManagerFactoryParameters</CODE>
  implementation to obtain the needed information.
 @param spec an implementation of a provider-specific parameter           specification
 @throw InvalidAlgorithmParameterExceptionif there is problem
           with the parameters
 - seealso: TrustManagerFactory#init(ManagerFactoryParameters spec)
 */
- (void)engineInitWithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslTrustManagerFactorySpi)

FOUNDATION_EXPORT void JavaxNetSslTrustManagerFactorySpi_init(JavaxNetSslTrustManagerFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslTrustManagerFactorySpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslTrustManagerFactorySpi")