//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/EndsWith.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEndsWith")
#ifdef RESTRICT_OrgMockitoInternalMatchersEndsWith
#define INCLUDE_ALL_OrgMockitoInternalMatchersEndsWith 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersEndsWith 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersEndsWith

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersEndsWith_) && (INCLUDE_ALL_OrgMockitoInternalMatchersEndsWith || defined(INCLUDE_OrgMockitoInternalMatchersEndsWith))
#define OrgMockitoInternalMatchersEndsWith_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersEndsWith : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)suffix;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEndsWith)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEndsWith_initWithNSString_(OrgMockitoInternalMatchersEndsWith *self, NSString *suffix);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEndsWith *new_OrgMockitoInternalMatchersEndsWith_initWithNSString_(NSString *suffix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersEndsWith *create_OrgMockitoInternalMatchersEndsWith_initWithNSString_(NSString *suffix);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEndsWith)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEndsWith")
