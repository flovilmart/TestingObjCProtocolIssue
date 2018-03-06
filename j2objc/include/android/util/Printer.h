//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Printer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilPrinter")
#ifdef RESTRICT_AndroidUtilPrinter
#define INCLUDE_ALL_AndroidUtilPrinter 0
#else
#define INCLUDE_ALL_AndroidUtilPrinter 1
#endif
#undef RESTRICT_AndroidUtilPrinter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidUtilPrinter_) && (INCLUDE_ALL_AndroidUtilPrinter || defined(INCLUDE_AndroidUtilPrinter))
#define AndroidUtilPrinter_

/*!
 @brief Simple interface for printing text, allowing redirection to various
  targets.
 */
@protocol AndroidUtilPrinter < JavaObject >

/*!
 @brief Write a line of text to the output.There is no need to terminate
  the given string with a newline.
 */
- (void)printlnWithNSString:(NSString *)x;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilPrinter)

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilPrinter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilPrinter")
