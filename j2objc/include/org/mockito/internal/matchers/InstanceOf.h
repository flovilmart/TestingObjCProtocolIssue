//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/InstanceOf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersInstanceOf")
#ifdef RESTRICT_OrgMockitoInternalMatchersInstanceOf
#define INCLUDE_ALL_OrgMockitoInternalMatchersInstanceOf 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersInstanceOf 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersInstanceOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersInstanceOf_) && (INCLUDE_ALL_OrgMockitoInternalMatchersInstanceOf || defined(INCLUDE_OrgMockitoInternalMatchersInstanceOf))
#define OrgMockitoInternalMatchersInstanceOf_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersInstanceOf : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)clazz;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersInstanceOf)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersInstanceOf_initWithIOSClass_(OrgMockitoInternalMatchersInstanceOf *self, IOSClass *clazz);

FOUNDATION_EXPORT OrgMockitoInternalMatchersInstanceOf *new_OrgMockitoInternalMatchersInstanceOf_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersInstanceOf *create_OrgMockitoInternalMatchersInstanceOf_initWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersInstanceOf)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersInstanceOf")
