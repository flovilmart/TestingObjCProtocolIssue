//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/builders/SuiteMethodBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalBuildersSuiteMethodBuilder")
#ifdef RESTRICT_OrgJunitInternalBuildersSuiteMethodBuilder
#define INCLUDE_ALL_OrgJunitInternalBuildersSuiteMethodBuilder 0
#else
#define INCLUDE_ALL_OrgJunitInternalBuildersSuiteMethodBuilder 1
#endif
#undef RESTRICT_OrgJunitInternalBuildersSuiteMethodBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalBuildersSuiteMethodBuilder_) && (INCLUDE_ALL_OrgJunitInternalBuildersSuiteMethodBuilder || defined(INCLUDE_OrgJunitInternalBuildersSuiteMethodBuilder))
#define OrgJunitInternalBuildersSuiteMethodBuilder_

#define RESTRICT_OrgJunitRunnersModelRunnerBuilder 1
#define INCLUDE_OrgJunitRunnersModelRunnerBuilder 1
#include "org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersSuiteMethodBuilder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype)init;

- (jboolean)hasSuiteMethodWithIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)each;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersSuiteMethodBuilder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersSuiteMethodBuilder_init(OrgJunitInternalBuildersSuiteMethodBuilder *self);

FOUNDATION_EXPORT OrgJunitInternalBuildersSuiteMethodBuilder *new_OrgJunitInternalBuildersSuiteMethodBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalBuildersSuiteMethodBuilder *create_OrgJunitInternalBuildersSuiteMethodBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersSuiteMethodBuilder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalBuildersSuiteMethodBuilder")
