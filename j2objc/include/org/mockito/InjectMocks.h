//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/InjectMocks.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInjectMocks")
#ifdef RESTRICT_OrgMockitoInjectMocks
#define INCLUDE_ALL_OrgMockitoInjectMocks 0
#else
#define INCLUDE_ALL_OrgMockitoInjectMocks 1
#endif
#undef RESTRICT_OrgMockitoInjectMocks

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInjectMocks_) && (INCLUDE_ALL_OrgMockitoInjectMocks || defined(INCLUDE_OrgMockitoInjectMocks))
#define OrgMockitoInjectMocks_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Mark a field on which injection should be performed.
 <ul>
  <li>Allows shorthand mock and spy injection.</li>
  <li>Minimizes repetitive mock and spy injection.</li>
  </ul>
  <p>
  Mockito will try to inject mocks only either by constructor injection,
  setter injection, or property injection in order and as described below.
  If any of the following strategy fail, then Mockito <strong>won't report failure</strong>;
  i.e. you will have to provide dependencies yourself. 
 <ol>
      <li><strong>Constructor injection</strong>; the biggest constructor is chosen,
      then arguments are resolved with mocks declared in the test only.     
 <p><u>Note:</u> If arguments can not be found, then null is passed.
      If non-mockable types are wanted, then constructor injection won't happen.
      In these cases, you will have to satisfy dependencies yourself.</p></li>
      <li><strong>Property setter injection</strong>; mocks will first be resolved by type,
      then, if there is several property of the same type, by the match of the property name and the mock name.     
 <p><u>Note 1:</u> If you have properties with the same type (or same erasure), it's better to name all &#064;Mock
      annotated fields with the matching properties, otherwise Mockito might get confused and injection won't happen.</p>
      <p><u>Note 2:</u> If &#064;InjectMocks instance wasn't initialized before and have a no-arg constructor,
      then it will be initialized with this constructor.</p></li>
      <li><strong>Field injection</strong>; mocks will first be resolved by type,
      then, if there is several property of the same type, by the match of the field name and the mock name.     
 <p><u>Note 1:</u> If you have fields with the same type (or same erasure), it's better to name all &#064;Mock
      annotated fields with the matching fields, otherwise Mockito might get confused and injection won't happen.</p>
      <p><u>Note 2:</u> If &#064;InjectMocks instance wasn't initialized before and have a no-arg constructor,
      then it will be initialized with this constructor.</p></li>
  </ol>
  </p>
  
 <p>
  Example: 
 <pre class="code"><code class="java">
    public class ArticleManagerTest extends SampleBaseTestCase {
        &#064;Mock private ArticleCalculator calculator;
        &#064;Mock(name = "database") private ArticleDatabase dbMock; // note the mock name attribute
        &#064;Spy private UserProvider userProvider = new ConsumerUserProvider();
        &#064;InjectMocks private ArticleManager manager;
        &#064;Test public void shouldDoSomething() {
            manager.initiateArticle();
            verify(database).addListener(any(ArticleListener.class));
        }   }
    public class SampleBaseTestCase {
        &#064;Before public void initMocks() {
            MockitoAnnotations.initMocks(this);
        }   } 
 </code>
@endcode
  </p>
  
 <p>
  In the above example the field ArticleManager annotated with &#064;InjectMocks can have
  a parameterized constructor only or a no-arg constructor only, or both.
  All these constructors can be package protected, protected or private, however 
 <u>Mockito cannot instantiate inner classes, local classes, abstract classes and of course interfaces.</u>
  <u>Beware of private nest static classes too.</u>
  
 <p>The same stands for setters or fields, they can be declared with private
  visibility, Mockito will see them through reflection.
  However fields that are static or final will be ignored.</p>
  
 <p>So on the field that needs injection, for example constructor injection will happen here :</p>
  <pre class="code"><code class="java">
    public class ArticleManager {
        ArticleManager(ArticleCalculator calculator, ArticleDatabase database) {
            // parameterized constructor
        }   } 
 </code>
@endcode
  
 <p>Property setter injection will happen here :</p>
  <pre class="code"><code class="java">
    public class ArticleManager {
        // no-arg constructor
        ArticleManager() {  }
        // setter
        void setDatabase(ArticleDatabase database) { }
        // setter
        void setCalculator(ArticleCalculator calculator) { }
    } 
 </code>
@endcode
  
 <p>Field injection will be used here :</p>
  <pre class="code"><code class="java">
    public class ArticleManager {
        private ArticleDatabase database;
        private ArticleCalculator calculator;
    } 
 </code>
@endcode
  </p>
  
 <p>And finally, no injection will happen on the type in this case:</p>
  <pre class="code"><code class="java">
    public class ArticleManager {
        private ArticleDatabase database;
        private ArticleCalculator calculator;
        ArticleManager(ArticleObserver observer, boolean flag) {
            // observer is not declared in the test above.
            // flag is not mockable anyway
        }   } 
 </code>
@endcode
  </p>
  
 <p>
  Again, note that &#064;InjectMocks will only inject mocks/spies created using the &#64;Spy or &#64;Mock annotation. 
 </p>
  
 <p>
  <strong><code>MockitoAnnotations.initMocks(this)</code></strong> method has to be called to initialize annotated objects.
  In above example, <code>initMocks()</code> is called in &#064;Before (JUnit4) method of test's base class.
  For JUnit3 <code>initMocks()</code> can go to <code>setup()</code> method of a base class. 
 <strong>Instead</strong> you can also put initMocks() in your JUnit runner (&#064;RunWith) or use the built-in 
 <code>org.mockito.runners.MockitoJUnitRunner</code>.
  </p>
 - seealso: Mock
 - seealso: Spy
 - seealso: MockitoAnnotations#initMocks(Object)
 - seealso: org.mockito.runners.MockitoJUnitRunner
 @since 1.8.3
 */
@protocol OrgMockitoInjectMocks < JavaLangAnnotationAnnotation >

@end

@interface OrgMockitoInjectMocks : NSObject < OrgMockitoInjectMocks >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInjectMocks)

FOUNDATION_EXPORT id<OrgMockitoInjectMocks> create_OrgMockitoInjectMocks(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInjectMocks)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInjectMocks")
