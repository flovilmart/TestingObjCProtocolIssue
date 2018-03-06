//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ObjDoubleConsumer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionObjDoubleConsumer")
#ifdef RESTRICT_JavaUtilFunctionObjDoubleConsumer
#define INCLUDE_ALL_JavaUtilFunctionObjDoubleConsumer 0
#else
#define INCLUDE_ALL_JavaUtilFunctionObjDoubleConsumer 1
#endif
#undef RESTRICT_JavaUtilFunctionObjDoubleConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionObjDoubleConsumer_) && (INCLUDE_ALL_JavaUtilFunctionObjDoubleConsumer || defined(INCLUDE_JavaUtilFunctionObjDoubleConsumer))
#define JavaUtilFunctionObjDoubleConsumer_

/*!
 @brief Represents an operation that accepts an object-valued and a 
 <code>double</code>-valued argument, and returns no result.This is the 
 <code>(reference, double)</code> specialization of <code>BiConsumer</code>.
 Unlike most other functional interfaces, <code>ObjDoubleConsumer</code> is
  expected to operate via side-effects. 
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>double)</code>.
 - seealso: BiConsumer
 @since 1.8
 */
@protocol JavaUtilFunctionObjDoubleConsumer < JavaObject >

/*!
 @brief Performs this operation on the given arguments.
 @param t the first input argument
 @param value the second input argument
 */
- (void)acceptWithId:(id)t
          withDouble:(jdouble)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionObjDoubleConsumer)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionObjDoubleConsumer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionObjDoubleConsumer")