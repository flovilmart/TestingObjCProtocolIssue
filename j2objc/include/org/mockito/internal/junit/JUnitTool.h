//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/junit/JUnitTool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitJUnitTool")
#ifdef RESTRICT_OrgMockitoInternalJunitJUnitTool
#define INCLUDE_ALL_OrgMockitoInternalJunitJUnitTool 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitJUnitTool 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitJUnitTool

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalJunitJUnitTool_) && (INCLUDE_ALL_OrgMockitoInternalJunitJUnitTool || defined(INCLUDE_OrgMockitoInternalJunitJUnitTool))
#define OrgMockitoInternalJunitJUnitTool_

@class JavaLangAssertionError;

@interface OrgMockitoInternalJunitJUnitTool : NSObject

#pragma mark Public

- (instancetype)init;

+ (JavaLangAssertionError *)createArgumentsAreDifferentExceptionWithNSString:(NSString *)message
                                                                withNSString:(NSString *)wanted
                                                                withNSString:(NSString *)actual;

+ (jboolean)hasJUnit;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalJunitJUnitTool)

FOUNDATION_EXPORT void OrgMockitoInternalJunitJUnitTool_init(OrgMockitoInternalJunitJUnitTool *self);

FOUNDATION_EXPORT OrgMockitoInternalJunitJUnitTool *new_OrgMockitoInternalJunitJUnitTool_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalJunitJUnitTool *create_OrgMockitoInternalJunitJUnitTool_init(void);

FOUNDATION_EXPORT jboolean OrgMockitoInternalJunitJUnitTool_hasJUnit(void);

FOUNDATION_EXPORT JavaLangAssertionError *OrgMockitoInternalJunitJUnitTool_createArgumentsAreDifferentExceptionWithNSString_withNSString_withNSString_(NSString *message, NSString *wanted, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitJUnitTool)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitJUnitTool")
