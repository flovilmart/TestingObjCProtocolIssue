//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/FinalMockCandidateFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter))
#define OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

/*!
 @brief This node returns an actual injecter which will be either : 
 <ul>
  <li>an <code>OngoingInjecter</code> that do nothing if a candidate couldn't be found</li>
  <li>an <code>OngoingInjecter</code> that will try to inject the candidate trying first the property setter then if not possible try the field access</li>
  </ul>
 */
@interface OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_init(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter *new_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter *create_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter")
