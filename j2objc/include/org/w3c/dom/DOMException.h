//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMException")
#ifdef RESTRICT_OrgW3cDomDOMException
#define INCLUDE_ALL_OrgW3cDomDOMException 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMException 1
#endif
#undef RESTRICT_OrgW3cDomDOMException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomDOMException_) && (INCLUDE_ALL_OrgW3cDomDOMException || defined(INCLUDE_OrgW3cDomDOMException))
#define OrgW3cDomDOMException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief DOM operations only raise exceptions in "exceptional" circumstances, i.e.,
  when an operation is impossible to perform (either for logical reasons,
  because data is lost, or because the implementation has become unstable).
 In general, DOM methods return specific error values in ordinary
  processing situations, such as out-of-bound errors when using 
 <code>NodeList</code>.
  <p>Implementations should raise other exceptions under other circumstances.
  For example, implementations should raise an implementation-dependent
  exception if a <code>null</code> argument is passed when <code>null</code>
   was not expected. 
 <p>Some languages and object systems do not support the concept of
  exceptions. For such systems, error conditions may be indicated using
  native error reporting mechanisms. For some bindings, for example,
  methods may return error codes similar to those listed in the
  corresponding method descriptions. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@interface OrgW3cDomDOMException : JavaLangRuntimeException {
 @public
  jshort code_;
}

+ (jshort)INDEX_SIZE_ERR;

+ (jshort)DOMSTRING_SIZE_ERR;

+ (jshort)HIERARCHY_REQUEST_ERR;

+ (jshort)WRONG_DOCUMENT_ERR;

+ (jshort)INVALID_CHARACTER_ERR;

+ (jshort)NO_DATA_ALLOWED_ERR;

+ (jshort)NO_MODIFICATION_ALLOWED_ERR;

+ (jshort)NOT_FOUND_ERR;

+ (jshort)NOT_SUPPORTED_ERR;

+ (jshort)INUSE_ATTRIBUTE_ERR;

+ (jshort)INVALID_STATE_ERR;

+ (jshort)SYNTAX_ERR;

+ (jshort)INVALID_MODIFICATION_ERR;

+ (jshort)NAMESPACE_ERR;

+ (jshort)INVALID_ACCESS_ERR;

+ (jshort)VALIDATION_ERR;

+ (jshort)TYPE_MISMATCH_ERR;

#pragma mark Public

- (instancetype)initWithShort:(jshort)code
                 withNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMException)

/*!
 @brief If index or size is negative, or greater than the allowed value.
 */
inline jshort OrgW3cDomDOMException_get_INDEX_SIZE_ERR(void);
#define OrgW3cDomDOMException_INDEX_SIZE_ERR 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, INDEX_SIZE_ERR, jshort)

/*!
 @brief If the specified range of text does not fit into a 
 <code>DOMString</code>.
 */
inline jshort OrgW3cDomDOMException_get_DOMSTRING_SIZE_ERR(void);
#define OrgW3cDomDOMException_DOMSTRING_SIZE_ERR 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, DOMSTRING_SIZE_ERR, jshort)

/*!
 @brief If any <code>Node</code> is inserted somewhere it doesn't belong.
 */
inline jshort OrgW3cDomDOMException_get_HIERARCHY_REQUEST_ERR(void);
#define OrgW3cDomDOMException_HIERARCHY_REQUEST_ERR 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, HIERARCHY_REQUEST_ERR, jshort)

/*!
 @brief If a <code>Node</code> is used in a different document than the one
  that created it (that doesn't support it).
 */
inline jshort OrgW3cDomDOMException_get_WRONG_DOCUMENT_ERR(void);
#define OrgW3cDomDOMException_WRONG_DOCUMENT_ERR 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, WRONG_DOCUMENT_ERR, jshort)

/*!
 @brief If an invalid or illegal character is specified, such as in an XML name.
 */
inline jshort OrgW3cDomDOMException_get_INVALID_CHARACTER_ERR(void);
#define OrgW3cDomDOMException_INVALID_CHARACTER_ERR 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, INVALID_CHARACTER_ERR, jshort)

/*!
 @brief If data is specified for a <code>Node</code> which does not support
  data.
 */
inline jshort OrgW3cDomDOMException_get_NO_DATA_ALLOWED_ERR(void);
#define OrgW3cDomDOMException_NO_DATA_ALLOWED_ERR 6
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, NO_DATA_ALLOWED_ERR, jshort)

/*!
 @brief If an attempt is made to modify an object where modifications are not
  allowed.
 */
inline jshort OrgW3cDomDOMException_get_NO_MODIFICATION_ALLOWED_ERR(void);
#define OrgW3cDomDOMException_NO_MODIFICATION_ALLOWED_ERR 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, NO_MODIFICATION_ALLOWED_ERR, jshort)

/*!
 @brief If an attempt is made to reference a <code>Node</code> in a context
  where it does not exist.
 */
inline jshort OrgW3cDomDOMException_get_NOT_FOUND_ERR(void);
#define OrgW3cDomDOMException_NOT_FOUND_ERR 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, NOT_FOUND_ERR, jshort)

/*!
 @brief If the implementation does not support the requested type of object or
  operation.
 */
inline jshort OrgW3cDomDOMException_get_NOT_SUPPORTED_ERR(void);
#define OrgW3cDomDOMException_NOT_SUPPORTED_ERR 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, NOT_SUPPORTED_ERR, jshort)

/*!
 @brief If an attempt is made to add an attribute that is already in use
  elsewhere.
 */
inline jshort OrgW3cDomDOMException_get_INUSE_ATTRIBUTE_ERR(void);
#define OrgW3cDomDOMException_INUSE_ATTRIBUTE_ERR 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, INUSE_ATTRIBUTE_ERR, jshort)

/*!
 @brief If an attempt is made to use an object that is not, or is no longer,
  usable.
 @since DOM Level 2
 */
inline jshort OrgW3cDomDOMException_get_INVALID_STATE_ERR(void);
#define OrgW3cDomDOMException_INVALID_STATE_ERR 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, INVALID_STATE_ERR, jshort)

/*!
 @brief If an invalid or illegal string is specified.
 @since DOM Level 2
 */
inline jshort OrgW3cDomDOMException_get_SYNTAX_ERR(void);
#define OrgW3cDomDOMException_SYNTAX_ERR 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, SYNTAX_ERR, jshort)

/*!
 @brief If an attempt is made to modify the type of the underlying object.
 @since DOM Level 2
 */
inline jshort OrgW3cDomDOMException_get_INVALID_MODIFICATION_ERR(void);
#define OrgW3cDomDOMException_INVALID_MODIFICATION_ERR 13
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, INVALID_MODIFICATION_ERR, jshort)

/*!
 @brief If an attempt is made to create or change an object in a way which is
  incorrect with regard to namespaces.
 @since DOM Level 2
 */
inline jshort OrgW3cDomDOMException_get_NAMESPACE_ERR(void);
#define OrgW3cDomDOMException_NAMESPACE_ERR 14
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, NAMESPACE_ERR, jshort)

/*!
 @brief If a parameter or an operation is not supported by the underlying
  object.
 @since DOM Level 2
 */
inline jshort OrgW3cDomDOMException_get_INVALID_ACCESS_ERR(void);
#define OrgW3cDomDOMException_INVALID_ACCESS_ERR 15
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, INVALID_ACCESS_ERR, jshort)

/*!
 @brief If a call to a method such as <code>insertBefore</code> or 
 <code>removeChild</code> would make the <code>Node</code> invalid
  with respect to "partial validity", this exception would be raised
  and the operation would not be done.This code is used in [<a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Val-20040127/'>DOM Level 3 Validation</a>]
  .
 Refer to this specification for further information.
 @since DOM Level 3
 */
inline jshort OrgW3cDomDOMException_get_VALIDATION_ERR(void);
#define OrgW3cDomDOMException_VALIDATION_ERR 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, VALIDATION_ERR, jshort)

/*!
 @brief If the type of an object is incompatible with the expected type of the
  parameter associated to the object.
 @since DOM Level 3
 */
inline jshort OrgW3cDomDOMException_get_TYPE_MISMATCH_ERR(void);
#define OrgW3cDomDOMException_TYPE_MISMATCH_ERR 17
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomDOMException, TYPE_MISMATCH_ERR, jshort)

FOUNDATION_EXPORT void OrgW3cDomDOMException_initWithShort_withNSString_(OrgW3cDomDOMException *self, jshort code, NSString *message);

FOUNDATION_EXPORT OrgW3cDomDOMException *new_OrgW3cDomDOMException_initWithShort_withNSString_(jshort code, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgW3cDomDOMException *create_OrgW3cDomDOMException_initWithShort_withNSString_(jshort code, NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMException")