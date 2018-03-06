//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/SecretKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSecretKey")
#ifdef RESTRICT_JavaxCryptoSecretKey
#define INCLUDE_ALL_JavaxCryptoSecretKey 0
#else
#define INCLUDE_ALL_JavaxCryptoSecretKey 1
#endif
#undef RESTRICT_JavaxCryptoSecretKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxCryptoSecretKey_) && (INCLUDE_ALL_JavaxCryptoSecretKey || defined(INCLUDE_JavaxCryptoSecretKey))
#define JavaxCryptoSecretKey_

#define RESTRICT_JavaSecurityKey 1
#define INCLUDE_JavaSecurityKey 1
#include "java/security/Key.h"

/*!
 @brief A secret (symmetric) key.
 <p>This interface contains no methods or constants.
  Its only purpose is to group (and provide type safety for) secret keys. 
 <p>Provider implementations of this interface must overwrite the 
 <code>equals</code> and <code>hashCode</code> methods inherited from 
 <code>java.lang.Object</code>, so that secret keys are compared based on
  their underlying key material and not based on reference. 
 <p>Keys that implement this interface return the string <code>RAW</code>
  as their encoding format (see <code>getFormat</code>), and return the
  raw key bytes as the result of a <code>getEncoded</code> method call. (The 
 <code>getFormat</code> and <code>getEncoded</code> methods are inherited
  from the <code>java.security.Key</code> parent interface.)
 @author Jan Luehe
 - seealso: SecretKeyFactory
 - seealso: Cipher
 @since 1.4
 */
@protocol JavaxCryptoSecretKey < JavaSecurityKey, JavaObject >

@end

@interface JavaxCryptoSecretKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSecretKey)

/*!
 @brief The class fingerprint that is set to indicate serialization
  compatibility since J2SE 1.4.
 */
inline jlong JavaxCryptoSecretKey_get_serialVersionUID(void);
#define JavaxCryptoSecretKey_serialVersionUID -4795878709595146952LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaxCryptoSecretKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSecretKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSecretKey")
