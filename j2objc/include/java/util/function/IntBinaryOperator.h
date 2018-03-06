//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/IntBinaryOperator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionIntBinaryOperator")
#ifdef RESTRICT_JavaUtilFunctionIntBinaryOperator
#define INCLUDE_ALL_JavaUtilFunctionIntBinaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionIntBinaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionIntBinaryOperator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionIntBinaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionIntBinaryOperator || defined(INCLUDE_JavaUtilFunctionIntBinaryOperator))
#define JavaUtilFunctionIntBinaryOperator_

/*!
 @brief Represents an operation upon two <code>int</code>-valued operands and producing an 
 <code>int</code>-valued result.This is the primitive type specialization of 
 <code>BinaryOperator</code> for <code>int</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>int)</code>.
 - seealso: BinaryOperator
 - seealso: IntUnaryOperator
 @since 1.8
 */
@protocol JavaUtilFunctionIntBinaryOperator < JavaObject >

/*!
 @brief Applies this operator to the given operands.
 @param left the first operand
 @param right the second operand
 @return the operator result
 */
- (jint)applyAsIntWithInt:(jint)left
                  withInt:(jint)right;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionIntBinaryOperator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionIntBinaryOperator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionIntBinaryOperator")
