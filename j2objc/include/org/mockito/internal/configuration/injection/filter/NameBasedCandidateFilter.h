//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/NameBasedCandidateFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter))
#define OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

@interface OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter:(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)next;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter *self, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter *new_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter *create_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter")