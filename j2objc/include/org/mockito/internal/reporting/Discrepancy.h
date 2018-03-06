//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/reporting/Discrepancy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalReportingDiscrepancy")
#ifdef RESTRICT_OrgMockitoInternalReportingDiscrepancy
#define INCLUDE_ALL_OrgMockitoInternalReportingDiscrepancy 0
#else
#define INCLUDE_ALL_OrgMockitoInternalReportingDiscrepancy 1
#endif
#undef RESTRICT_OrgMockitoInternalReportingDiscrepancy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalReportingDiscrepancy_) && (INCLUDE_ALL_OrgMockitoInternalReportingDiscrepancy || defined(INCLUDE_OrgMockitoInternalReportingDiscrepancy))
#define OrgMockitoInternalReportingDiscrepancy_

@interface OrgMockitoInternalReportingDiscrepancy : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)wantedCount
                    withInt:(jint)actualCount;

- (jint)getActualCount;

- (NSString *)getPluralizedActualCount;

- (NSString *)getPluralizedWantedCount;

- (jint)getWantedCount;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalReportingDiscrepancy)

FOUNDATION_EXPORT void OrgMockitoInternalReportingDiscrepancy_initWithInt_withInt_(OrgMockitoInternalReportingDiscrepancy *self, jint wantedCount, jint actualCount);

FOUNDATION_EXPORT OrgMockitoInternalReportingDiscrepancy *new_OrgMockitoInternalReportingDiscrepancy_initWithInt_withInt_(jint wantedCount, jint actualCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalReportingDiscrepancy *create_OrgMockitoInternalReportingDiscrepancy_initWithInt_withInt_(jint wantedCount, jint actualCount);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalReportingDiscrepancy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalReportingDiscrepancy")
