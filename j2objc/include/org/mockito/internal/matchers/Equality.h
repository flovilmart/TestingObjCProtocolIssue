//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Equality.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEquality")
#ifdef RESTRICT_OrgMockitoInternalMatchersEquality
#define INCLUDE_ALL_OrgMockitoInternalMatchersEquality 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersEquality 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersEquality

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersEquality_) && (INCLUDE_ALL_OrgMockitoInternalMatchersEquality || defined(INCLUDE_OrgMockitoInternalMatchersEquality))
#define OrgMockitoInternalMatchersEquality_

@interface OrgMockitoInternalMatchersEquality : NSObject

#pragma mark Public

- (instancetype)init;

+ (jboolean)areEqualWithId:(id)o1
                    withId:(id)o2;

#pragma mark Package-Private

+ (jboolean)areArrayElementsEqualWithId:(id)o1
                                 withId:(id)o2;

+ (jboolean)areArrayLengthsEqualWithId:(id)o1
                                withId:(id)o2;

+ (jboolean)areArraysEqualWithId:(id)o1
                          withId:(id)o2;

+ (jboolean)isArrayWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEquality)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEquality_init(OrgMockitoInternalMatchersEquality *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEquality *new_OrgMockitoInternalMatchersEquality_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersEquality *create_OrgMockitoInternalMatchersEquality_init(void);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areArraysEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areArrayLengthsEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areArrayElementsEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_isArrayWithId_(id o);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEquality)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEquality")
