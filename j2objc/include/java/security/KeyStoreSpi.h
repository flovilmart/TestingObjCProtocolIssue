//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/KeyStoreSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyStoreSpi")
#ifdef RESTRICT_JavaSecurityKeyStoreSpi
#define INCLUDE_ALL_JavaSecurityKeyStoreSpi 0
#else
#define INCLUDE_ALL_JavaSecurityKeyStoreSpi 1
#endif
#undef RESTRICT_JavaSecurityKeyStoreSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyStoreSpi_) && (INCLUDE_ALL_JavaSecurityKeyStoreSpi || defined(INCLUDE_JavaSecurityKeyStoreSpi))
#define JavaSecurityKeyStoreSpi_

@class IOSByteArray;
@class IOSCharArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaSecurityCertCertificate;
@class JavaUtilDate;
@protocol JavaSecurityKey;
@protocol JavaSecurityKeyStore_Entry;
@protocol JavaSecurityKeyStore_LoadStoreParameter;
@protocol JavaSecurityKeyStore_ProtectionParameter;
@protocol JavaUtilEnumeration;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>KeyStore</code> class.
 All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a keystore for a particular keystore type.
 @author Jan Luehe
 - seealso: KeyStore
 @since 1.2
 */
@interface JavaSecurityKeyStoreSpi : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Lists all the alias names of this keystore.
 @return enumeration of the alias names
 */
- (id<JavaUtilEnumeration>)engineAliases;

/*!
 @brief Checks if the given alias exists in this keystore.
 @param alias the alias name
 @return true if the alias exists, false otherwise
 */
- (jboolean)engineContainsAliasWithNSString:(NSString *)alias;

/*!
 @brief Deletes the entry identified by the given alias from this keystore.
 @param alias the alias name
 @throw KeyStoreExceptionif the entry cannot be removed.
 */
- (void)engineDeleteEntryWithNSString:(NSString *)alias;

/*!
 @brief Determines if the keystore <code>Entry</code> for the specified 
 <code>alias</code> is an instance or subclass of the specified 
 <code>entryClass</code>.
 @param alias the alias name
 @param entryClass the entry class
 @return true if the keystore <code>Entry</code> for the specified
           <code>alias</code> is an instance or subclass of the
           specified <code>entryClass</code>, false otherwise
 @since 1.5
 */
- (jboolean)engineEntryInstanceOfWithNSString:(NSString *)alias
                                 withIOSClass:(IOSClass *)entryClass;

/*!
 @brief Returns the certificate associated with the given alias.
 <p> If the given alias name identifies an entry
  created by a call to <code>setCertificateEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>TrustedCertificateEntry</code>,
  then the trusted certificate contained in that entry is returned. 
 <p> If the given alias name identifies an entry
  created by a call to <code>setKeyEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>PrivateKeyEntry</code>,
  then the first element of the certificate chain in that entry
  (if a chain exists) is returned.
 @param alias the alias name
 @return the certificate, or null if the given alias does not exist or
  does not contain a certificate.
 */
- (JavaSecurityCertCertificate *)engineGetCertificateWithNSString:(NSString *)alias;

/*!
 @brief Returns the (alias) name of the first keystore entry whose certificate
  matches the given certificate.
 <p>This method attempts to match the given certificate with each
  keystore entry. If the entry being considered was
  created by a call to <code>setCertificateEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>TrustedCertificateEntry</code>,
  then the given certificate is compared to that entry's certificate. 
 <p> If the entry being considered was
  created by a call to <code>setKeyEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>PrivateKeyEntry</code>,
  then the given certificate is compared to the first
  element of that entry's certificate chain.
 @param cert the certificate to match with.
 @return the alias name of the first entry with matching certificate,
  or null if no such entry exists in this keystore.
 */
- (NSString *)engineGetCertificateAliasWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

/*!
 @brief Returns the certificate chain associated with the given alias.
 The certificate chain must have been associated with the alias
  by a call to <code>setKeyEntry</code>,
  or by a call to <code>setEntry</code> with a 
 <code>PrivateKeyEntry</code>.
 @param alias the alias name
 @return the certificate chain (ordered with the user's certificate first
  and the root certificate authority last), or null if the given alias
  does not exist or does not contain a certificate chain
 */
- (IOSObjectArray *)engineGetCertificateChainWithNSString:(NSString *)alias;

/*!
 @brief Returns the creation date of the entry identified by the given alias.
 @param alias the alias name
 @return the creation date of this entry, or null if the given alias does
  not exist
 */
- (JavaUtilDate *)engineGetCreationDateWithNSString:(NSString *)alias;

/*!
 @brief Gets a <code>KeyStore.Entry</code> for the specified alias
  with the specified protection parameter.
 @param alias get the  <code> KeyStore.Entry </code>  for this alias
 @param protParam the  <code> ProtectionParameter </code>
            used to protect the  <code> Entry </code> ,
            which may be  <code> null </code>
 @return the <code>KeyStore.Entry</code> for the specified alias,
           or <code>null</code> if there is no such entry
 @throw KeyStoreExceptionif the operation failed
 @throw NoSuchAlgorithmExceptionif the algorithm for recovering the
           entry cannot be found
 @throw UnrecoverableEntryExceptionif the specified
           <code>protParam</code> were insufficient or invalid
 @throw UnrecoverableKeyExceptionif the entry is a
           <code>PrivateKeyEntry</code> or <code>SecretKeyEntry</code>
           and the specified <code>protParam</code> does not contain
           the information needed to recover the key (e.g. wrong password)
 @since 1.5
 */
- (id<JavaSecurityKeyStore_Entry>)engineGetEntryWithNSString:(NSString *)alias
                withJavaSecurityKeyStore_ProtectionParameter:(id<JavaSecurityKeyStore_ProtectionParameter>)protParam;

/*!
 @brief Returns the key associated with the given alias, using the given
  password to recover it.The key must have been associated with
  the alias by a call to <code>setKeyEntry</code>,
  or by a call to <code>setEntry</code> with a 
 <code>PrivateKeyEntry</code> or <code>SecretKeyEntry</code>.
 @param alias the alias name
 @param password the password for recovering the key
 @return the requested key, or null if the given alias does not exist
  or does not identify a key-related entry.
 @throw NoSuchAlgorithmExceptionif the algorithm for recovering the
  key cannot be found
 @throw UnrecoverableKeyExceptionif the key cannot be recovered
  (e.g., the given password is wrong).
 */
- (id<JavaSecurityKey>)engineGetKeyWithNSString:(NSString *)alias
                                  withCharArray:(IOSCharArray *)password;

/*!
 @brief Returns true if the entry identified by the given alias
  was created by a call to <code>setCertificateEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>TrustedCertificateEntry</code>.
 @param alias the alias for the keystore entry to be checked
 @return true if the entry identified by the given alias contains a
  trusted certificate, false otherwise.
 */
- (jboolean)engineIsCertificateEntryWithNSString:(NSString *)alias;

/*!
 @brief Returns true if the entry identified by the given alias
  was created by a call to <code>setKeyEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>PrivateKeyEntry</code> or a <code>SecretKeyEntry</code>.
 @param alias the alias for the keystore entry to be checked
 @return true if the entry identified by the given alias is a
  key-related, false otherwise.
 */
- (jboolean)engineIsKeyEntryWithNSString:(NSString *)alias;

/*!
 @brief Loads the keystore from the given input stream.
 <p>A password may be given to unlock the keystore
  (e.g. the keystore resides on a hardware token device),
  or to check the integrity of the keystore data.
  If a password is not given for integrity checking,
  then integrity checking is not performed.
 @param stream the input stream from which the keystore is loaded,  or 
  <code> null </code>
 @param password the password used to check the integrity of  the keystore, the password used to unlock the keystore,
   or  <code>
  null </code>
 @throw IOExceptionif there is an I/O or format problem with the
  keystore data, if a password is required but not given,
  or if the given password was incorrect. If the error is due to a
  wrong password, the <code>cause</code> of the 
 <code>IOException</code> should be an 
 <code>UnrecoverableKeyException</code>
 @throw NoSuchAlgorithmExceptionif the algorithm used to check
  the integrity of the keystore cannot be found
 @throw CertificateExceptionif any of the certificates in the
  keystore could not be loaded
 */
- (void)engineLoadWithJavaIoInputStream:(JavaIoInputStream *)stream
                          withCharArray:(IOSCharArray *)password;

/*!
 @brief Loads the keystore using the given 
 <code>KeyStore.LoadStoreParameter</code>.
 <p> Note that if this KeyStore has already been loaded, it is
  reinitialized and loaded again from the given parameter.
 @param param the  <code> KeyStore.LoadStoreParameter </code>
            that specifies how to load the keystore,           which may be 
  <code> null </code>
 @throw IllegalArgumentExceptionif the given
           <code>KeyStore.LoadStoreParameter</code>
           input is not recognized
 @throw IOExceptionif there is an I/O or format problem with the
           keystore data. If the error is due to an incorrect         
 <code>ProtectionParameter</code> (e.g. wrong password)
          the <code>cause</code> of the
          <code>IOException</code> should be an
          <code>UnrecoverableKeyException</code>
 @throw NoSuchAlgorithmExceptionif the algorithm used to check
           the integrity of the keystore cannot be found
 @throw CertificateExceptionif any of the certificates in the
           keystore could not be loaded
 @since 1.5
 */
- (void)engineLoadWithJavaSecurityKeyStore_LoadStoreParameter:(id<JavaSecurityKeyStore_LoadStoreParameter>)param;

/*!
 @brief Assigns the given certificate to the given alias.
 <p> If the given alias identifies an existing entry
  created by a call to <code>setCertificateEntry</code>,
  or created by a call to <code>setEntry</code> with a 
 <code>TrustedCertificateEntry</code>,
  the trusted certificate in the existing entry
  is overridden by the given certificate.
 @param alias the alias name
 @param cert the certificate
 @throw KeyStoreExceptionif the given alias already exists and does
  not identify an entry containing a trusted certificate,
  or this operation fails for some other reason.
 */
- (void)engineSetCertificateEntryWithNSString:(NSString *)alias
              withJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

/*!
 @brief Saves a <code>KeyStore.Entry</code> under the specified alias.
 The specified protection parameter is used to protect the 
 <code>Entry</code>.
  
 <p> If an entry already exists for the specified alias,
  it is overridden.
 @param alias save the  <code> KeyStore.Entry </code>  under this alias
 @param entry_ the  <code> Entry </code>  to save
 @param protParam the  <code> ProtectionParameter </code>
            used to protect the  <code> Entry </code> ,
            which may be  <code> null </code>
 @throw KeyStoreExceptionif this operation fails
 @since 1.5
 */
- (void)engineSetEntryWithNSString:(NSString *)alias
    withJavaSecurityKeyStore_Entry:(id<JavaSecurityKeyStore_Entry>)entry_
withJavaSecurityKeyStore_ProtectionParameter:(id<JavaSecurityKeyStore_ProtectionParameter>)protParam;

/*!
 @brief Assigns the given key (that has already been protected) to the given
  alias.
 <p>If the protected key is of type 
 <code>java.security.PrivateKey</code>,
  it must be accompanied by a certificate chain certifying the
  corresponding public key. 
 <p>If the given alias already exists, the keystore information
  associated with it is overridden by the given key (and possibly
  certificate chain).
 @param alias the alias name
 @param key the key (in protected format) to be associated with the alias
 @param chain the certificate chain for the corresponding public  key (only useful if the protected key is of type
    <code>
  java.security.PrivateKey </code> ).
 @throw KeyStoreExceptionif this operation fails.
 */
- (void)engineSetKeyEntryWithNSString:(NSString *)alias
                        withByteArray:(IOSByteArray *)key
 withJavaSecurityCertCertificateArray:(IOSObjectArray *)chain;

/*!
 @brief Assigns the given key to the given alias, protecting it with the given
  password.
 <p>If the given key is of type <code>java.security.PrivateKey</code>,
  it must be accompanied by a certificate chain certifying the
  corresponding public key. 
 <p>If the given alias already exists, the keystore information
  associated with it is overridden by the given key (and possibly
  certificate chain).
 @param alias the alias name
 @param key the key to be associated with the alias
 @param password the password to protect the key
 @param chain the certificate chain for the corresponding public  key (only required if the given key is of type
    <code>
  java.security.PrivateKey </code> ).
 @throw KeyStoreExceptionif the given key cannot be protected, or
  this operation fails for some other reason
 */
- (void)engineSetKeyEntryWithNSString:(NSString *)alias
                  withJavaSecurityKey:(id<JavaSecurityKey>)key
                        withCharArray:(IOSCharArray *)password
 withJavaSecurityCertCertificateArray:(IOSObjectArray *)chain;

/*!
 @brief Retrieves the number of entries in this keystore.
 @return the number of entries in this keystore
 */
- (jint)engineSize;

/*!
 @brief Stores this keystore using the given 
 <code>KeyStore.LoadStoreParmeter</code>.
 @param param the  <code> KeyStore.LoadStoreParmeter </code>
            that specifies how to store the keystore,           which may be 
  <code> null </code>
 @throw IllegalArgumentExceptionif the given
           <code>KeyStore.LoadStoreParmeter</code>
           input is not recognized
 @throw IOExceptionif there was an I/O problem with data
 @throw NoSuchAlgorithmExceptionif the appropriate data integrity
           algorithm could not be found
 @throw CertificateExceptionif any of the certificates included in
           the keystore data could not be stored
 @since 1.5
 */
- (void)engineStoreWithJavaSecurityKeyStore_LoadStoreParameter:(id<JavaSecurityKeyStore_LoadStoreParameter>)param;

/*!
 @brief Stores this keystore to the given output stream, and protects its
  integrity with the given password.
 @param stream the output stream to which this keystore is written.
 @param password the password to generate the keystore integrity check
 @throw IOExceptionif there was an I/O problem with data
 @throw NoSuchAlgorithmExceptionif the appropriate data integrity
  algorithm could not be found
 @throw CertificateExceptionif any of the certificates included in
  the keystore data could not be stored
 */
- (void)engineStoreWithJavaIoOutputStream:(JavaIoOutputStream *)stream
                            withCharArray:(IOSCharArray *)password;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyStoreSpi)

FOUNDATION_EXPORT void JavaSecurityKeyStoreSpi_init(JavaSecurityKeyStoreSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyStoreSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyStoreSpi")