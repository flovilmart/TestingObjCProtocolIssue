//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/CodeSigner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCodeSigner")
#ifdef RESTRICT_JavaSecurityCodeSigner
#define INCLUDE_ALL_JavaSecurityCodeSigner 0
#else
#define INCLUDE_ALL_JavaSecurityCodeSigner 1
#endif
#undef RESTRICT_JavaSecurityCodeSigner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCodeSigner_) && (INCLUDE_ALL_JavaSecurityCodeSigner || defined(INCLUDE_JavaSecurityCodeSigner))
#define JavaSecurityCodeSigner_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaSecurityCertCertPath;
@class JavaSecurityTimestamp;

/*!
 @brief This class encapsulates information about a code signer.
 It is immutable.
 @since 1.5
 @author Vincent Ryan
 */
@interface JavaSecurityCodeSigner : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a CodeSigner object.
 @param signerCertPath The signer's certificate path.                        It must not be 
  <code> null </code> .
 @param timestamp A signature timestamp.                   If 
  <code> null </code>  then no timestamp was generated                   for the signature.
 @throw NullPointerExceptionif <code>signerCertPath</code> is
                               <code>null</code>.
 */
- (instancetype)initWithJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)signerCertPath
                       withJavaSecurityTimestamp:(JavaSecurityTimestamp *)timestamp;

/*!
 @brief Tests for equality between the specified object and this
  code signer.Two code signers are considered equal if their
  signer certificate paths are equal and if their timestamps are equal,
  if present in both.
 @param obj the object to test for equality with this object.
 @return true if the objects are considered equal, false otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the signer's certificate path.
 @return A certificate path.
 */
- (JavaSecurityCertCertPath *)getSignerCertPath;

/*!
 @brief Returns the signature timestamp.
 @return The timestamp or <code>null</code> if none is present.
 */
- (JavaSecurityTimestamp *)getTimestamp;

/*!
 @brief Returns the hash code value for this code signer.
 The hash code is generated using the signer's certificate path and the
  timestamp, if present.
 @return a hash code value for this code signer.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string describing this code signer.
 @return A string comprising the signer's certificate and a timestamp,
          if present.
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCodeSigner)

FOUNDATION_EXPORT void JavaSecurityCodeSigner_initWithJavaSecurityCertCertPath_withJavaSecurityTimestamp_(JavaSecurityCodeSigner *self, JavaSecurityCertCertPath *signerCertPath, JavaSecurityTimestamp *timestamp);

FOUNDATION_EXPORT JavaSecurityCodeSigner *new_JavaSecurityCodeSigner_initWithJavaSecurityCertCertPath_withJavaSecurityTimestamp_(JavaSecurityCertCertPath *signerCertPath, JavaSecurityTimestamp *timestamp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCodeSigner *create_JavaSecurityCodeSigner_initWithJavaSecurityCertCertPath_withJavaSecurityTimestamp_(JavaSecurityCertCertPath *signerCertPath, JavaSecurityTimestamp *timestamp);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCodeSigner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCodeSigner")