//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/TrustAnchor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertTrustAnchor")
#ifdef RESTRICT_JavaSecurityCertTrustAnchor
#define INCLUDE_ALL_JavaSecurityCertTrustAnchor 0
#else
#define INCLUDE_ALL_JavaSecurityCertTrustAnchor 1
#endif
#undef RESTRICT_JavaSecurityCertTrustAnchor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertTrustAnchor_) && (INCLUDE_ALL_JavaSecurityCertTrustAnchor || defined(INCLUDE_JavaSecurityCertTrustAnchor))
#define JavaSecurityCertTrustAnchor_

@class IOSByteArray;
@class JavaSecurityCertX509Certificate;
@class JavaxSecurityAuthX500X500Principal;
@protocol JavaSecurityPublicKey;

/*!
 @brief A trust anchor or most-trusted Certification Authority (CA).
 <p>
  This class represents a "most-trusted CA", which is used as a trust anchor
  for validating X.509 certification paths. A most-trusted CA includes the
  public key of the CA, the CA's name, and any constraints upon the set of
  paths which may be validated using this key. These parameters can be
  specified in the form of a trusted <code>X509Certificate</code> or as
  individual parameters. 
 <p>
  <b>Concurrent Access</b>
  <p>
  <p>All <code>TrustAnchor</code> objects must be immutable and
  thread-safe. That is, multiple threads may concurrently invoke the
  methods defined in this class on a single <code>TrustAnchor</code>
  object (or more than one) with no ill effects. Requiring 
 <code>TrustAnchor</code> objects to be immutable and thread-safe
  allows them to be passed around to various pieces of code without
  worrying about coordinating access. This stipulation applies to all
  public fields and methods of this class and any added or overridden
  by subclasses.
 - seealso: PKIXParameters#PKIXParameters(Set)
 - seealso: PKIXBuilderParameters#PKIXBuilderParameters(Set, CertSelector)
 @since 1.4
 @author Sean Mullan
 */
@interface JavaSecurityCertTrustAnchor : NSObject

#pragma mark Public

/*!
 @brief Creates an instance of <code>TrustAnchor</code> where the
  most-trusted CA is specified as a distinguished name and public key.
 Name constraints are an optional parameter, and are intended to be used
  as additional constraints when validating an X.509 certification path. 
 <p>
  The name constraints are specified as a byte array. This byte array
  contains the DER encoded form of the name constraints, as they
  would appear in the NameConstraints structure defined in RFC 3280
  and X.509. The ASN.1 notation for this structure is supplied in the
  documentation for 
 <code>trustedCert, byte[] nameConstraints)</code>
 .
  <p>
  Note that the name constraints byte array supplied here is cloned to
  protect against subsequent modifications.
 @param caName the X.500 distinguished name of the most-trusted CA in  
  <a href="http://www.ietf.org/rfc/rfc2253.txt"> RFC 2253 </a>   <code>
  String </code>  format
 @param pubKey the public key of the most-trusted CA
 @param nameConstraints a byte array containing the ASN.1 DER encoding of  a NameConstraints extension to be used for checking name constraints.
   Only the value of the extension is included, not the OID or criticality
   flag. Specify 
  <code> null </code>  to omit the parameter.
 @throw IllegalArgumentExceptionif the specified <code>
  caName</code> parameter is empty <code>(caName.length() == 0)</code>
  or incorrectly formatted or the name constraints cannot be decoded
 @throw NullPointerExceptionif the specified <code>caName</code> or 
 <code>pubKey</code> parameter is <code>null</code>
 */
- (instancetype)initWithNSString:(NSString *)caName
       withJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)pubKey
                   withByteArray:(IOSByteArray *)nameConstraints;

/*!
 @brief Creates an instance of <code>TrustAnchor</code> where the
  most-trusted CA is specified as an X500Principal and public key.
 Name constraints are an optional parameter, and are intended to be used
  as additional constraints when validating an X.509 certification path. 
 <p>
  The name constraints are specified as a byte array. This byte array
  contains the DER encoded form of the name constraints, as they
  would appear in the NameConstraints structure defined in RFC 3280
  and X.509. The ASN.1 notation for this structure is supplied in the
  documentation for 
 <code>trustedCert, byte[] nameConstraints)</code>
 .
  <p>
  Note that the name constraints byte array supplied here is cloned to
  protect against subsequent modifications.
 @param caPrincipal the name of the most-trusted CA as X500Principal
 @param pubKey the public key of the most-trusted CA
 @param nameConstraints a byte array containing the ASN.1 DER encoding of  a NameConstraints extension to be used for checking name constraints.
   Only the value of the extension is included, not the OID or criticality
   flag. Specify 
  <code> null </code>  to omit the parameter.
 @throw NullPointerExceptionif the specified <code>caPrincipal</code> or 
 <code>pubKey</code> parameter is <code>null</code>
 @since 1.5
 */
- (instancetype)initWithJavaxSecurityAuthX500X500Principal:(JavaxSecurityAuthX500X500Principal *)caPrincipal
                                 withJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)pubKey
                                             withByteArray:(IOSByteArray *)nameConstraints;

/*!
 @brief Creates an instance of <code>TrustAnchor</code> with the specified 
 <code>X509Certificate</code> and optional name constraints, which
  are intended to be used as additional constraints when validating
  an X.509 certification path.
 <p>
  The name constraints are specified as a byte array. This byte array
  should contain the DER encoded form of the name constraints, as they
  would appear in the NameConstraints structure defined in 
 <a href="http://www.ietf.org/rfc/rfc3280">RFC 3280</a>
  and X.509. The ASN.1 definition of this structure appears below. 
 @code
<code>
   NameConstraints ::= SEQUENCE {
        permittedSubtrees       [0]     GeneralSubtrees OPTIONAL,
        excludedSubtrees        [1]     GeneralSubtrees OPTIONAL }
   GeneralSubtrees ::= SEQUENCE SIZE (1..MAX) OF GeneralSubtree
   GeneralSubtree ::= SEQUENCE {
        base                    GeneralName,
        minimum         [0]     BaseDistance DEFAULT 0,
        maximum         [1]     BaseDistance OPTIONAL }
   BaseDistance ::= INTEGER (0..MAX)
   GeneralName ::= CHOICE {
        otherName                       [0]     OtherName,
        rfc822Name                      [1]     IA5String,
        dNSName                         [2]     IA5String,
        x400Address                     [3]     ORAddress,
        directoryName                   [4]     Name,
        ediPartyName                    [5]     EDIPartyName,
        uniformResourceIdentifier       [6]     IA5String,
        iPAddress                       [7]     OCTET STRING,
        registeredID                    [8]     OBJECT IDENTIFIER} 
  </code>
@endcode
  <p>
  Note that the name constraints byte array supplied is cloned to protect
  against subsequent modifications.
 @param trustedCert a trusted  <code> X509Certificate </code>
 @param nameConstraints a byte array containing the ASN.1 DER encoding of  a NameConstraints extension to be used for checking name constraints.
   Only the value of the extension is included, not the OID or criticality
   flag. Specify 
  <code> null </code>  to omit the parameter.
 @throw IllegalArgumentExceptionif the name constraints cannot be
  decoded
 @throw NullPointerExceptionif the specified 
 <code>X509Certificate</code> is <code>null</code>
 */
- (instancetype)initWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)trustedCert
                                          withByteArray:(IOSByteArray *)nameConstraints;

/*!
 @brief Returns the name of the most-trusted CA as an X500Principal.
 @return the X.500 distinguished name of the most-trusted CA, or 
 <code>null</code> if the trust anchor was not specified as a trusted
  public key and name or X500Principal pair
 @since 1.5
 */
- (JavaxSecurityAuthX500X500Principal *)getCA;

/*!
 @brief Returns the name of the most-trusted CA in RFC 2253 <code>String</code>
  format.
 @return the X.500 distinguished name of the most-trusted CA, or 
 <code>null</code> if the trust anchor was not specified as a trusted
  public key and name or X500Principal pair
 */
- (NSString *)getCAName;

/*!
 @brief Returns the public key of the most-trusted CA.
 @return the public key of the most-trusted CA, or <code>null</code>
  if the trust anchor was not specified as a trusted public key and name
  or X500Principal pair
 */
- (id<JavaSecurityPublicKey>)getCAPublicKey;

/*!
 @brief Returns the name constraints parameter.The specified name constraints
  are associated with this trust anchor and are intended to be used
  as additional constraints when validating an X.509 certification path.
 <p>
  The name constraints are returned as a byte array. This byte array
  contains the DER encoded form of the name constraints, as they
  would appear in the NameConstraints structure defined in RFC 3280
  and X.509. The ASN.1 notation for this structure is supplied in the
  documentation for 
 <code>trustedCert, byte[] nameConstraints)</code>
 .
  <p>
  Note that the byte array returned is cloned to protect against
  subsequent modifications.
 @return a byte array containing the ASN.1 DER encoding of
          a NameConstraints extension used for checking name constraints,
          or <code>null</code> if not set.
 */
- (IOSByteArray *)getNameConstraints;

/*!
 @brief Returns the most-trusted CA certificate.
 @return a trusted <code>X509Certificate</code> or <code>null</code>
  if the trust anchor was not specified as a trusted certificate
 */
- (JavaSecurityCertX509Certificate *)getTrustedCert;

/*!
 @brief Returns a formatted string describing the <code>TrustAnchor</code>.
 @return a formatted string describing the <code>TrustAnchor</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertTrustAnchor)

FOUNDATION_EXPORT void JavaSecurityCertTrustAnchor_initWithJavaSecurityCertX509Certificate_withByteArray_(JavaSecurityCertTrustAnchor *self, JavaSecurityCertX509Certificate *trustedCert, IOSByteArray *nameConstraints);

FOUNDATION_EXPORT JavaSecurityCertTrustAnchor *new_JavaSecurityCertTrustAnchor_initWithJavaSecurityCertX509Certificate_withByteArray_(JavaSecurityCertX509Certificate *trustedCert, IOSByteArray *nameConstraints) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertTrustAnchor *create_JavaSecurityCertTrustAnchor_initWithJavaSecurityCertX509Certificate_withByteArray_(JavaSecurityCertX509Certificate *trustedCert, IOSByteArray *nameConstraints);

FOUNDATION_EXPORT void JavaSecurityCertTrustAnchor_initWithJavaxSecurityAuthX500X500Principal_withJavaSecurityPublicKey_withByteArray_(JavaSecurityCertTrustAnchor *self, JavaxSecurityAuthX500X500Principal *caPrincipal, id<JavaSecurityPublicKey> pubKey, IOSByteArray *nameConstraints);

FOUNDATION_EXPORT JavaSecurityCertTrustAnchor *new_JavaSecurityCertTrustAnchor_initWithJavaxSecurityAuthX500X500Principal_withJavaSecurityPublicKey_withByteArray_(JavaxSecurityAuthX500X500Principal *caPrincipal, id<JavaSecurityPublicKey> pubKey, IOSByteArray *nameConstraints) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertTrustAnchor *create_JavaSecurityCertTrustAnchor_initWithJavaxSecurityAuthX500X500Principal_withJavaSecurityPublicKey_withByteArray_(JavaxSecurityAuthX500X500Principal *caPrincipal, id<JavaSecurityPublicKey> pubKey, IOSByteArray *nameConstraints);

FOUNDATION_EXPORT void JavaSecurityCertTrustAnchor_initWithNSString_withJavaSecurityPublicKey_withByteArray_(JavaSecurityCertTrustAnchor *self, NSString *caName, id<JavaSecurityPublicKey> pubKey, IOSByteArray *nameConstraints);

FOUNDATION_EXPORT JavaSecurityCertTrustAnchor *new_JavaSecurityCertTrustAnchor_initWithNSString_withJavaSecurityPublicKey_withByteArray_(NSString *caName, id<JavaSecurityPublicKey> pubKey, IOSByteArray *nameConstraints) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertTrustAnchor *create_JavaSecurityCertTrustAnchor_initWithNSString_withJavaSecurityPublicKey_withByteArray_(NSString *caName, id<JavaSecurityPublicKey> pubKey, IOSByteArray *nameConstraints);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertTrustAnchor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertTrustAnchor")
