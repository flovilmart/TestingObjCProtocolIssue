//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/RSAPublicKeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecRSAPublicKeySpec")
#ifdef RESTRICT_JavaSecuritySpecRSAPublicKeySpec
#define INCLUDE_ALL_JavaSecuritySpecRSAPublicKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecRSAPublicKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecRSAPublicKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecRSAPublicKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecRSAPublicKeySpec || defined(INCLUDE_JavaSecuritySpecRSAPublicKeySpec))
#define JavaSecuritySpecRSAPublicKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include "java/security/spec/KeySpec.h"

@class JavaMathBigInteger;

/*!
 @brief This class specifies an RSA public key.
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: KeySpec
 - seealso: X509EncodedKeySpec
 - seealso: RSAPrivateKeySpec
 - seealso: RSAPrivateCrtKeySpec
 */
@interface JavaSecuritySpecRSAPublicKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new RSAPublicKeySpec.
 @param modulus the modulus
 @param publicExponent the public exponent
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)modulus
                    withJavaMathBigInteger:(JavaMathBigInteger *)publicExponent;

/*!
 @brief Returns the modulus.
 @return the modulus
 */
- (JavaMathBigInteger *)getModulus;

/*!
 @brief Returns the public exponent.
 @return the public exponent
 */
- (JavaMathBigInteger *)getPublicExponent;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecRSAPublicKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecRSAPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecRSAPublicKeySpec *self, JavaMathBigInteger *modulus, JavaMathBigInteger *publicExponent);

FOUNDATION_EXPORT JavaSecuritySpecRSAPublicKeySpec *new_JavaSecuritySpecRSAPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *modulus, JavaMathBigInteger *publicExponent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecRSAPublicKeySpec *create_JavaSecuritySpecRSAPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *modulus, JavaMathBigInteger *publicExponent);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAPublicKeySpec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecRSAPublicKeySpec")