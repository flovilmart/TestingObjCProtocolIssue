//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/lambda/java/java/lang/invoke/MethodType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInvokeMethodType")
#ifdef RESTRICT_JavaLangInvokeMethodType
#define INCLUDE_ALL_JavaLangInvokeMethodType 0
#else
#define INCLUDE_ALL_JavaLangInvokeMethodType 1
#endif
#undef RESTRICT_JavaLangInvokeMethodType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangInvokeMethodType_) && (INCLUDE_ALL_JavaLangInvokeMethodType || defined(INCLUDE_JavaLangInvokeMethodType))
#define JavaLangInvokeMethodType_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangClassLoader;
@protocol JavaUtilList;

@interface JavaLangInvokeMethodType : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (JavaLangInvokeMethodType *)appendParameterTypesWithIOSClassArray:(IOSObjectArray *)ptypesToInsert;

- (JavaLangInvokeMethodType *)appendParameterTypesWithJavaUtilList:(id<JavaUtilList>)ptypesToInsert;

- (JavaLangInvokeMethodType *)changeParameterTypeWithInt:(jint)num
                                            withIOSClass:(IOSClass *)nptype;

- (JavaLangInvokeMethodType *)changeReturnTypeWithIOSClass:(IOSClass *)nrtype;

- (JavaLangInvokeMethodType *)dropParameterTypesWithInt:(jint)start
                                                withInt:(jint)end;

- (JavaLangInvokeMethodType *)erase;

+ (JavaLangInvokeMethodType *)fromMethodDescriptorStringWithNSString:(NSString *)descriptor
                                             withJavaLangClassLoader:(JavaLangClassLoader *)loader;

- (JavaLangInvokeMethodType *)generic;

+ (JavaLangInvokeMethodType *)genericMethodTypeWithInt:(jint)objectArgCount;

+ (JavaLangInvokeMethodType *)genericMethodTypeWithInt:(jint)objectArgCount
                                           withBoolean:(jboolean)finalArray;

- (jboolean)hasPrimitives;

- (jboolean)hasWrappers;

- (JavaLangInvokeMethodType *)insertParameterTypesWithInt:(jint)num
                                        withIOSClassArray:(IOSObjectArray *)ptypesToInsert;

- (JavaLangInvokeMethodType *)insertParameterTypesWithInt:(jint)num
                                         withJavaUtilList:(id<JavaUtilList>)ptypesToInsert;

+ (JavaLangInvokeMethodType *)methodTypeWithIOSClass:(IOSClass *)rtype;

+ (JavaLangInvokeMethodType *)methodTypeWithIOSClass:(IOSClass *)rtype
                                        withIOSClass:(IOSClass *)ptype0;

+ (JavaLangInvokeMethodType *)methodTypeWithIOSClass:(IOSClass *)rtype
                                        withIOSClass:(IOSClass *)ptype0
                                   withIOSClassArray:(IOSObjectArray *)ptypes;

+ (JavaLangInvokeMethodType *)methodTypeWithIOSClass:(IOSClass *)rtype
                                   withIOSClassArray:(IOSObjectArray *)ptypes;

+ (JavaLangInvokeMethodType *)methodTypeWithIOSClass:(IOSClass *)rtype
                                    withJavaUtilList:(id<JavaUtilList>)ptypes;

+ (JavaLangInvokeMethodType *)methodTypeWithIOSClass:(IOSClass *)rtype
                        withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)ptypes;

- (IOSObjectArray *)parameterArray;

- (jint)parameterCount;

- (id<JavaUtilList>)parameterList;

- (IOSClass *)parameterTypeWithInt:(jint)num;

- (IOSClass *)returnType;

- (NSString *)toMethodDescriptorString;

- (JavaLangInvokeMethodType *)unwrap;

- (JavaLangInvokeMethodType *)wrap;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeMethodType)

FOUNDATION_EXPORT void JavaLangInvokeMethodType_init(JavaLangInvokeMethodType *self);

FOUNDATION_EXPORT JavaLangInvokeMethodType *new_JavaLangInvokeMethodType_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInvokeMethodType *create_JavaLangInvokeMethodType_init(void);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_methodTypeWithIOSClass_withIOSClassArray_(IOSClass *rtype, IOSObjectArray *ptypes);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_methodTypeWithIOSClass_withJavaUtilList_(IOSClass *rtype, id<JavaUtilList> ptypes);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_methodTypeWithIOSClass_withIOSClass_withIOSClassArray_(IOSClass *rtype, IOSClass *ptype0, IOSObjectArray *ptypes);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_methodTypeWithIOSClass_(IOSClass *rtype);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_methodTypeWithIOSClass_withIOSClass_(IOSClass *rtype, IOSClass *ptype0);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_methodTypeWithIOSClass_withJavaLangInvokeMethodType_(IOSClass *rtype, JavaLangInvokeMethodType *ptypes);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_genericMethodTypeWithInt_withBoolean_(jint objectArgCount, jboolean finalArray);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_genericMethodTypeWithInt_(jint objectArgCount);

FOUNDATION_EXPORT JavaLangInvokeMethodType *JavaLangInvokeMethodType_fromMethodDescriptorStringWithNSString_withJavaLangClassLoader_(NSString *descriptor, JavaLangClassLoader *loader);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeMethodType)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangInvokeMethodType")
