//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/theories/internal/ParameterizedAssertionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError || defined(INCLUDE_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError))
#define OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@protocol JavaUtilCollection;

@interface OrgJunitExperimentalTheoriesInternalParameterizedAssertionError : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)targetException
                             withNSString:(NSString *)methodName
                        withNSObjectArray:(IOSObjectArray *)params;

- (jboolean)isEqual:(id)obj;

+ (NSString *)joinWithNSString:(NSString *)delimiter
        withJavaUtilCollection:(id<JavaUtilCollection>)values;

+ (NSString *)joinWithNSString:(NSString *)delimiter
             withNSObjectArray:(IOSObjectArray *)params;

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

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithJavaLangThrowable_withNSString_withNSObjectArray_(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *self, JavaLangThrowable *targetException, NSString *methodName, IOSObjectArray *params);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *new_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithJavaLangThrowable_withNSString_withNSObjectArray_(JavaLangThrowable *targetException, NSString *methodName, IOSObjectArray *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalParameterizedAssertionError *create_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_initWithJavaLangThrowable_withNSString_withNSObjectArray_(JavaLangThrowable *targetException, NSString *methodName, IOSObjectArray *params);

FOUNDATION_EXPORT NSString *OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_joinWithNSString_withNSObjectArray_(NSString *delimiter, IOSObjectArray *params);

FOUNDATION_EXPORT NSString *OrgJunitExperimentalTheoriesInternalParameterizedAssertionError_joinWithNSString_withJavaUtilCollection_(NSString *delimiter, id<JavaUtilCollection> values);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalParameterizedAssertionError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalParameterizedAssertionError")
