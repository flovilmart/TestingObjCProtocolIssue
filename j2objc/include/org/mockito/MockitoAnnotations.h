//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/MockitoAnnotations.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoMockitoAnnotations")
#ifdef RESTRICT_OrgMockitoMockitoAnnotations
#define INCLUDE_ALL_OrgMockitoMockitoAnnotations 0
#else
#define INCLUDE_ALL_OrgMockitoMockitoAnnotations 1
#endif
#undef RESTRICT_OrgMockitoMockitoAnnotations

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoMockitoAnnotations_) && (INCLUDE_ALL_OrgMockitoMockitoAnnotations || defined(INCLUDE_OrgMockitoMockitoAnnotations))
#define OrgMockitoMockitoAnnotations_

@class IOSClass;
@class JavaLangReflectField;
@protocol OrgMockitoConfigurationAnnotationEngine;

/*!
 @brief MockitoAnnotations.initMocks(this); initializes fields annotated with Mockito annotations.
 <p>   
 <ul>
  <li>Allows shorthand creation of objects required for testing.</li>  
 <li>Minimizes repetitive mock creation code.</li>  
 <li>Makes the test class more readable.</li>
  <li>Makes the verification error easier to read because <b>field name</b> is used to identify the mock.</li>
  </ul>
   
 <pre class="code"><code class="java">
    public class ArticleManagerTest extends SampleBaseTestCase { 
      
        &#064;Mock private ArticleCalculator calculator;
        &#064;Mock private ArticleDatabase database;
        &#064;Mock private UserProvider userProvider;
      
        private ArticleManager manager;            
 &#064;Before public void setup() {
            manager = new ArticleManager(userProvider, database, calculator);
        }   }   
    public class SampleBaseTestCase {   
        &#064;Before public void initMocks() {
            MockitoAnnotations.initMocks(this);
        }   } 
 </code>
@endcode
  <p>
  Read also about other annotations &#064;<code>Spy</code>, &#064;<code>Captor</code>, &#064;<code>InjectMocks</code>
  <p>
  <b><code>MockitoAnnotations.initMocks(this)</code></b> method has to called to initialize annotated fields. 
 <p>
  In above example, <code>initMocks()</code> is called in &#064;Before (JUnit4) method of test's base class. 
  For JUnit3 <code>initMocks()</code> can go to <code>setup()</code> method of a base class.
  You can also put initMocks() in your JUnit runner (&#064;RunWith) or use built-in runner: <code>MockitoJUnitRunner</code>
 */
@interface OrgMockitoMockitoAnnotations : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Initializes objects annotated with Mockito annotations for given testClass:
   &#064;<code>org.mockito.Mock</code>, &#064;<code>Spy</code>, &#064;<code>Captor</code>, &#064;<code>InjectMocks</code> 
 <p>
  See examples in javadoc for <code>MockitoAnnotations</code> class.
 */
+ (void)initMocksWithId:(id)testClass OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

+ (void)processAnnotationDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine:(id<OrgMockitoConfigurationAnnotationEngine>)annotationEngine
                                                                           withId:(id)testClass
                                                         withJavaLangReflectField:(JavaLangReflectField *)field;

+ (void)scanDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine:(id<OrgMockitoConfigurationAnnotationEngine>)annotationEngine
                                                              withId:(id)testClass
                                                        withIOSClass:(IOSClass *)clazz;

+ (void)throwIfAlreadyAssignedWithJavaLangReflectField:(JavaLangReflectField *)field
                                           withBoolean:(jboolean)alreadyAssigned;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoMockitoAnnotations)

FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_init(OrgMockitoMockitoAnnotations *self);

FOUNDATION_EXPORT OrgMockitoMockitoAnnotations *new_OrgMockitoMockitoAnnotations_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoMockitoAnnotations *create_OrgMockitoMockitoAnnotations_init(void);

FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_initMocksWithId_(id testClass);

FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_scanDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine_withId_withIOSClass_(id<OrgMockitoConfigurationAnnotationEngine> annotationEngine, id testClass, IOSClass *clazz);

FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_processAnnotationDeprecatedWayWithOrgMockitoConfigurationAnnotationEngine_withId_withJavaLangReflectField_(id<OrgMockitoConfigurationAnnotationEngine> annotationEngine, id testClass, JavaLangReflectField *field);

FOUNDATION_EXPORT void OrgMockitoMockitoAnnotations_throwIfAlreadyAssignedWithJavaLangReflectField_withBoolean_(JavaLangReflectField *field, jboolean alreadyAssigned);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMockitoAnnotations)

#endif

#if !defined (OrgMockitoMockitoAnnotations_Mock_) && (INCLUDE_ALL_OrgMockitoMockitoAnnotations || defined(INCLUDE_OrgMockitoMockitoAnnotations_Mock))
#define OrgMockitoMockitoAnnotations_Mock_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Use top-level <code>org.mockito.Mock</code> annotation instead
 <p>
  When &#064;Mock annotation was implemented as an inner class then users experienced problems with autocomplete features in IDEs.
 Hence &#064;Mock was made a top-level class.   
 <p>
  How to fix deprecation warnings? 
  Typically, you can just <b>search:</b> import org.mockito.MockitoAnnotations.Mock; <b>and replace with:</b> import org.mockito.Mock; 
 <p>
  If you're an existing user then sorry for making your code littered with deprecation warnings. 
  This change was required to make Mockito better.
 */
__attribute__((deprecated))
@protocol OrgMockitoMockitoAnnotations_Mock < JavaLangAnnotationAnnotation >

@end

@interface OrgMockitoMockitoAnnotations_Mock : NSObject < OrgMockitoMockitoAnnotations_Mock >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoMockitoAnnotations_Mock)

FOUNDATION_EXPORT id<OrgMockitoMockitoAnnotations_Mock> create_OrgMockitoMockitoAnnotations_Mock(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMockitoAnnotations_Mock)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoMockitoAnnotations")
