//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/theories/ParameterSignature.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesParameterSignature")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesParameterSignature
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesParameterSignature 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesParameterSignature 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesParameterSignature

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalTheoriesParameterSignature_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesParameterSignature || defined(INCLUDE_OrgJunitExperimentalTheoriesParameterSignature))
#define OrgJunitExperimentalTheoriesParameterSignature_

@class IOSClass;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@class JavaUtilArrayList;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilList;

@interface OrgJunitExperimentalTheoriesParameterSignature : NSObject

#pragma mark Public

- (jboolean)canAcceptArrayTypeWithIOSClass:(IOSClass *)type;

- (jboolean)canAcceptTypeWithIOSClass:(IOSClass *)candidate;

- (id<JavaLangAnnotationAnnotation>)findDeepAnnotationWithIOSClass:(IOSClass *)annotationType;

- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (id<JavaUtilList>)getAnnotations;

- (IOSClass *)getType;

- (jboolean)hasAnnotationWithIOSClass:(IOSClass *)type;

+ (id<JavaUtilList>)signaturesWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

+ (JavaUtilArrayList *)signaturesWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesParameterSignature)

FOUNDATION_EXPORT JavaUtilArrayList *OrgJunitExperimentalTheoriesParameterSignature_signaturesWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

FOUNDATION_EXPORT id<JavaUtilList> OrgJunitExperimentalTheoriesParameterSignature_signaturesWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesParameterSignature)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesParameterSignature")
