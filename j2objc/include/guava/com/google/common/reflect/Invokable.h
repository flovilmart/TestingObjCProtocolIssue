//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/reflect/Invokable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectInvokable")
#ifdef RESTRICT_ComGoogleCommonReflectInvokable
#define INCLUDE_ALL_ComGoogleCommonReflectInvokable 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectInvokable 1
#endif
#undef RESTRICT_ComGoogleCommonReflectInvokable
#ifdef INCLUDE_ComGoogleCommonReflectInvokable_ConstructorInvokable
#define INCLUDE_ComGoogleCommonReflectInvokable 1
#endif
#ifdef INCLUDE_ComGoogleCommonReflectInvokable_MethodInvokable
#define INCLUDE_ComGoogleCommonReflectInvokable 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectInvokable_) && (INCLUDE_ALL_ComGoogleCommonReflectInvokable || defined(INCLUDE_ComGoogleCommonReflectInvokable))
#define ComGoogleCommonReflectInvokable_

#define RESTRICT_ComGoogleCommonReflectElement 1
#define INCLUDE_ComGoogleCommonReflectElement 1
#include "com/google/common/reflect/Element.h"

#define RESTRICT_JavaLangReflectGenericDeclaration 1
#define INCLUDE_JavaLangReflectGenericDeclaration 1
#include "java/lang/reflect/GenericDeclaration.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectAccessibleObject;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@protocol JavaLangReflectMember;
@protocol JavaLangReflectType;

@interface ComGoogleCommonReflectInvokable : ComGoogleCommonReflectElement < JavaLangReflectGenericDeclaration >

#pragma mark Public

+ (ComGoogleCommonReflectInvokable *)fromWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

+ (ComGoogleCommonReflectInvokable *)fromWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (IOSClass *)getDeclaringClass;

- (ComGoogleCommonCollectImmutableList *)getExceptionTypes;

- (ComGoogleCommonReflectTypeToken *)getOwnerType;

- (ComGoogleCommonCollectImmutableList *)getParameters;

- (ComGoogleCommonReflectTypeToken *)getReturnType;

- (id)invokeWithId:(id)receiver
 withNSObjectArray:(IOSObjectArray *)args;

- (jboolean)isOverridable;

- (jboolean)isVarArgs;

- (ComGoogleCommonReflectInvokable *)returningWithIOSClass:(IOSClass *)returnType;

- (ComGoogleCommonReflectInvokable *)returningWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)returnType;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)member;

- (IOSObjectArray *)getGenericExceptionTypes;

- (IOSObjectArray *)getGenericParameterTypes;

- (id<JavaLangReflectType>)getGenericReturnType;

- (IOSObjectArray *)getParameterAnnotations;

- (id)invokeInternalWithId:(id)receiver
         withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectInvokable)

FOUNDATION_EXPORT void ComGoogleCommonReflectInvokable_initWithJavaLangReflectAccessibleObject_(ComGoogleCommonReflectInvokable *self, JavaLangReflectAccessibleObject<JavaLangReflectMember> *member);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable *ComGoogleCommonReflectInvokable_fromWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable *ComGoogleCommonReflectInvokable_fromWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectInvokable)

#endif

#if !defined (ComGoogleCommonReflectInvokable_MethodInvokable_) && (INCLUDE_ALL_ComGoogleCommonReflectInvokable || defined(INCLUDE_ComGoogleCommonReflectInvokable_MethodInvokable))
#define ComGoogleCommonReflectInvokable_MethodInvokable_

@class IOSObjectArray;
@class JavaLangReflectAccessibleObject;
@class JavaLangReflectMethod;
@protocol JavaLangReflectMember;
@protocol JavaLangReflectType;

@interface ComGoogleCommonReflectInvokable_MethodInvokable : ComGoogleCommonReflectInvokable {
 @public
  JavaLangReflectMethod *method_;
}

#pragma mark Public

- (IOSObjectArray *)getTypeParameters;

- (jboolean)isOverridable;

- (jboolean)isVarArgs;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (IOSObjectArray *)getGenericExceptionTypes;

- (IOSObjectArray *)getGenericParameterTypes;

- (id<JavaLangReflectType>)getGenericReturnType;

- (IOSObjectArray *)getParameterAnnotations;

- (id)invokeInternalWithId:(id)receiver
         withNSObjectArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectInvokable_MethodInvokable)

J2OBJC_FIELD_SETTER(ComGoogleCommonReflectInvokable_MethodInvokable, method_, JavaLangReflectMethod *)

FOUNDATION_EXPORT void ComGoogleCommonReflectInvokable_MethodInvokable_initWithJavaLangReflectMethod_(ComGoogleCommonReflectInvokable_MethodInvokable *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_MethodInvokable *new_ComGoogleCommonReflectInvokable_MethodInvokable_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_MethodInvokable *create_ComGoogleCommonReflectInvokable_MethodInvokable_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectInvokable_MethodInvokable)

#endif

#if !defined (ComGoogleCommonReflectInvokable_ConstructorInvokable_) && (INCLUDE_ALL_ComGoogleCommonReflectInvokable || defined(INCLUDE_ComGoogleCommonReflectInvokable_ConstructorInvokable))
#define ComGoogleCommonReflectInvokable_ConstructorInvokable_

@class IOSObjectArray;
@class JavaLangReflectAccessibleObject;
@class JavaLangReflectConstructor;
@protocol JavaLangReflectMember;
@protocol JavaLangReflectType;

@interface ComGoogleCommonReflectInvokable_ConstructorInvokable : ComGoogleCommonReflectInvokable {
 @public
  JavaLangReflectConstructor *constructor_;
}

#pragma mark Public

- (IOSObjectArray *)getTypeParameters;

- (jboolean)isOverridable;

- (jboolean)isVarArgs;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

- (IOSObjectArray *)getGenericExceptionTypes;

- (IOSObjectArray *)getGenericParameterTypes;

- (id<JavaLangReflectType>)getGenericReturnType;

- (IOSObjectArray *)getParameterAnnotations;

- (id)invokeInternalWithId:(id)receiver
         withNSObjectArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectInvokable_ConstructorInvokable)

J2OBJC_FIELD_SETTER(ComGoogleCommonReflectInvokable_ConstructorInvokable, constructor_, JavaLangReflectConstructor *)

FOUNDATION_EXPORT void ComGoogleCommonReflectInvokable_ConstructorInvokable_initWithJavaLangReflectConstructor_(ComGoogleCommonReflectInvokable_ConstructorInvokable *self, JavaLangReflectConstructor *constructor);

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_ConstructorInvokable *new_ComGoogleCommonReflectInvokable_ConstructorInvokable_initWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectInvokable_ConstructorInvokable *create_ComGoogleCommonReflectInvokable_ConstructorInvokable_initWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectInvokable_ConstructorInvokable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectInvokable")
