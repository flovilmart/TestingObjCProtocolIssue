//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/Matchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoMatchers")
#ifdef RESTRICT_OrgMockitoMatchers
#define INCLUDE_ALL_OrgMockitoMatchers 0
#else
#define INCLUDE_ALL_OrgMockitoMatchers 1
#endif
#undef RESTRICT_OrgMockitoMatchers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoMatchers_) && (INCLUDE_ALL_OrgMockitoMatchers || defined(INCLUDE_OrgMockitoMatchers))
#define OrgMockitoMatchers_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol OrgHamcrestMatcher;

/*!
 @brief Allow flexible verification or stubbing.See also <code>AdditionalMatchers</code>.
 <p>
  <code>Mockito</code> extends Matchers so to get access to all matchers just import Mockito class statically. 
 <pre class="code"><code class="java">
   //stubbing using anyInt() argument matcher
   when(mockedList.get(anyInt())).thenReturn("element");  
   //following prints "element"
   System.out.println(mockedList.get(999));  
   //you can also verify using argument matcher
   verify(mockedList).get(anyInt()); 
 </code>
@endcode
  Scroll down to see all methods - full list of matchers. 
 <p>
  <b>Warning:</b>
  <p>
  If you are using argument matchers, <b>all arguments</b> have to be provided by matchers. 
 <p>
  E.g: (example shows verification but the same applies to stubbing): 
 <pre class="code"><code class="java">
    verify(mock).someMethod(anyInt(), anyString(), <b>eq("third argument")</b>);
    //above is correct - eq() is also an argument matcher   
    verify(mock).someMethod(anyInt(), anyString(), <b>"third argument"</b>);
    //above is incorrect - exception will be thrown because third argument is given without argument matcher. 
 </code>
@endcode
  <p>
  Matcher methods like <code>anyObject()</code>, <code>eq()</code> <b>do not</b> return matchers.
  Internally, they record a matcher on a stack and return a dummy value (usually null).
  This implementation is due static type safety imposed by java compiler.
  The consequence is that you cannot use <code>anyObject()</code>, <code>eq()</code> methods outside of verified/stubbed method. 
 <p>
  <b>Warning 2:</b>
  <p>
  The any family methods <b>
 *don't do any type checks*</b>, those are only here to avoid casting in your code. If you want to perform type checks use the <code>isA(Class)</code> method. This <b>might</b> however change (type checks could be added) in a future major release. <h1>Custom Argument Matchers</h1>  Use <code>Matchers.argThat</code> method and pass an instance of hamcrest <code>Matcher</code>. <p> Before you start implementing your own custom argument matcher, make sure you check out <code>ArgumentCaptor</code> api. <p> So, how to implement your own argument matcher? First, you might want to subclass <code>ArgumentMatcher</code> which is an hamcrest matcher with predefined describeTo() method. Default description generated by describeTo() uses <b>decamelized class name</b> - to promote meaningful class names. <p> Example:  <pre class="code"><code class="java">   class IsListOfTwoElements extends ArgumentMatcher&lt;List&gt; {      public boolean matches(Object list) {          return ((List) list).size() == 2;      }   }      List mock = mock(List.class);      when(mock.addAll(argThat(new IsListOfTwoElements()))).thenReturn(true);      mock.addAll(Arrays.asList("one", "two"));      verify(mock).addAll(argThat(new IsListOfTwoElements())); </code>
@endcode  To keep it readable you may want to extract method, e.g: <pre class="code"><code class="java">   verify(mock).addAll(<b>argThat(new IsListOfTwoElements())</b>);   //becomes   verify(mock).addAll(<b>listOfTwoElements()</b>); </code>
@endcode <b>Warning:</b> Be reasonable with using complicated argument matching, especially custom argument matchers, as it can make the test less readable.  Sometimes it's better to implement equals() for arguments that are passed to mocks  (Mockito naturally uses equals() for argument matching).  This can make the test cleaner.  <p> Also, <b>sometimes <code>ArgumentCaptor</code> may be a better fit</b> than custom matcher.  For example, if custom argument matcher is not likely to be reused or you just need it to assert on argument values to complete verification of behavior.
 */
@interface OrgMockitoMatchers : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Any object or <code>null</code>.
 <p>
  Shorter alias to <code>Matchers.anyObject()</code>
  <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>null</code>.
 */
+ (id)any;

/*!
 @brief Any kind object, not necessary of the given class.
 The class argument is provided only to avoid casting. 
 <p>
  Sometimes looks better than <code>anyObject()</code> - especially when explicit casting is required 
 <p>
  Alias to <code>Matchers.anyObject()</code>
  <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @param clazz The type to avoid casting
 @return <code>null</code>.
 */
+ (id)anyWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>boolean</code>, <code>Boolean</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>false</code>.
 */
+ (jboolean)anyBoolean;

/*!
 @brief Any <code>byte</code>, <code>Byte</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jbyte)anyByte;

/*!
 @brief Any <code>char</code>, <code>Character</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jchar)anyChar;

/*!
 @brief Any <code>Collection</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return empty Collection.
 */
+ (id<JavaUtilCollection>)anyCollection;

/*!
 @brief Generic friendly alias to <code>Matchers.anyCollection()</code>.
 It's an alternative to &#064;SuppressWarnings("unchecked") to keep code clean of compiler warnings.      
 <p>
  Any <code>Collection</code> or <code>null</code>.
  <p>
  This method <b>*don't do any type checks*</b>, it is only there to avoid casting
  in your code. This might however change (type checks could be added) in a
  future major release. 
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param clazz Type owned by the collection to avoid casting
 @return empty Collection.
 */
+ (id<JavaUtilCollection>)anyCollectionOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>double</code>, <code>Double</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jdouble)anyDouble;

/*!
 @brief Any <code>float</code>, <code>Float</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jfloat)anyFloat;

/*!
 @brief Any int, Integer or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jint)anyInt;

/*!
 @brief Any <code>List</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return empty List.
 */
+ (id<JavaUtilList>)anyList;

/*!
 @brief Generic friendly alias to <code>Matchers.anyList()</code>.
 It's an alternative to &#064;SuppressWarnings("unchecked") to keep code clean of compiler warnings. 
 <p>
  Any <code>List</code> or <code>null</code>.
  <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @param clazz Type owned by the list to avoid casting
 @return empty List.
 */
+ (id<JavaUtilList>)anyListOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>long</code>, <code>Long</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jlong)anyLong;

/*!
 @brief Any <code>Map</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return empty Map.
 */
+ (id<JavaUtilMap>)anyMap;

/*!
 @brief Generic friendly alias to <code>Matchers.anyMap()</code>.
 It's an alternative to &#064;SuppressWarnings("unchecked") to keep code clean of compiler warnings. 
 <p>
  Any <code>Map</code> or <code>null</code>
  <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @param keyClazz Type of the map key to avoid casting
 @param valueClazz Type of the value to avoid casting
 @return empty Map.
 */
+ (id<JavaUtilMap>)anyMapOfWithIOSClass:(IOSClass *)keyClazz
                           withIOSClass:(IOSClass *)valueClazz;

/*!
 @brief Any <code>Object</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> Has aliases: <code>any()</code> and <code>clazz)</code> <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>null</code>.
 */
+ (id)anyObject;

/*!
 @brief Any <code>Set</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return empty Set
 */
+ (id<JavaUtilSet>)anySet;

/*!
 @brief Generic friendly alias to <code>Matchers.anySet()</code>.
 It's an alternative to &#064;SuppressWarnings("unchecked") to keep code clean of compiler warnings. 
 <p>
  Any <code>Set</code> or <code>null</code>
  <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @param clazz Type owned by the Set to avoid casting
 @return empty Set
 */
+ (id<JavaUtilSet>)anySetOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>short</code>, <code>Short</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return <code>0</code>.
 */
+ (jshort)anyShort;

/*!
 @brief Any <code>String</code> or <code>null</code>.
 <p>
  This method <b>
 *don't do any type checks*</b>, it is only there to avoid casting in your code. This might however change (type checks could be added) in a future major release. <p> See examples in javadoc for <code>Matchers</code> class
 @return empty String ("")
 */
+ (NSString *)anyString;

/*!
 @brief Any vararg, meaning any number and values of arguments.
 <p>
  Example: 
 <pre class="code"><code class="java">
    //verification:
    mock.foo(1, 2);
    mock.foo(1, 2, 3, 4);
    verify(mock, times(2)).foo(anyVararg());
    //stubbing:
    when(mock.foo(anyVararg()).thenReturn(100);
    //prints 100
    System.out.println(mock.foo(1, 2));
    //also prints 100
    System.out.println(mock.foo(1, 2, 3, 4)); 
 </code>
@endcode
  See examples in javadoc for <code>Matchers</code> class
 @return <code>null</code>.
 */
+ (id)anyVararg;

/*!
 @brief Allows creating custom argument matchers.
 <p>
  In rare cases when the parameter is a primitive then you <b>*must*</b> use relevant intThat(), floatThat(), etc. method.
  This way you will avoid <code>NullPointerException</code> during auto-unboxing. 
 <p>
  See examples in javadoc for <code>ArgumentMatcher</code> class
 @param matcher decides whether argument matches
 @return <code>null</code>.
 */
+ (id)argThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Allows creating custom <code>Boolean</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>false</code>.
 */
+ (jboolean)booleanThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Allows creating custom <code>Byte</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jbyte)byteThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Allows creating custom <code>Character</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jchar)charThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief <code>String</code> argument that contains the given substring.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param substring the substring.
 @return empty String ("").
 */
+ (NSString *)containsWithNSString:(NSString *)substring;

/*!
 @brief Allows creating custom <code>Double</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jdouble)doubleThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief <code>String</code> argument that ends with the given suffix.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param suffix the suffix.
 @return empty String ("").
 */
+ (NSString *)endsWithWithNSString:(NSString *)suffix;

/*!
 @brief <code>boolean</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jboolean)eqWithBoolean:(jboolean)value;

/*!
 @brief <code>byte</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jbyte)eqWithByte:(jbyte)value;

/*!
 @brief <code>char</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jchar)eqWithChar:(jchar)value;

/*!
 @brief <code>double</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jdouble)eqWithDouble:(jdouble)value;

/*!
 @brief <code>float</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jfloat)eqWithFloat:(jfloat)value;

/*!
 @brief <code>int</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jint)eqWithInt:(jint)value;

/*!
 @brief <code>long</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jlong)eqWithLong:(jlong)value;

/*!
 @brief <code>short</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jshort)eqWithShort:(jshort)value;

/*!
 @brief Object argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id)eqWithId:(id)value;

/*!
 @brief Allows creating custom <code>Float</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jfloat)floatThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Allows creating custom <code>Integer</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jint)intThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief <code>Object</code> argument that implements the given class.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param clazz the class of the accepted type.
 @return <code>null</code>.
 */
+ (id)isAWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Not <code>null</code> argument.
 <p>
  alias to <code>Matchers.notNull()</code>
  <p>
  See examples in javadoc for <code>Matchers</code> class
 @return <code>null</code>.
 */
+ (id)isNotNull;

/*!
 @brief Not <code>null</code> argument, not necessary of the given class.
 The class argument is provided to avoid casting. 
 <p>
  alias to <code>Matchers.notNull(Class)</code>
  <p>
  See examples in javadoc for <code>Matchers</code> class
 @param clazz Type to avoid casting
 @return <code>null</code>.
 */
+ (id)isNotNullWithIOSClass:(IOSClass *)clazz;

/*!
 @brief <code>null</code> argument.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @return <code>null</code>.
 */
+ (id)isNull;

/*!
 @brief <code>null</code> argument.
 The class argument is provided to avoid casting. 
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param clazz Type to avoid casting
 @return <code>null</code>.
 */
+ (id)isNullWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Allows creating custom <code>Long</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jlong)longThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief <code>String</code> argument that matches the given regular expression.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param regex the regular expression.
 @return empty String ("").
 */
+ (NSString *)matchesWithNSString:(NSString *)regex;

/*!
 @brief Not <code>null</code> argument.
 <p>
  alias to <code>Matchers.isNotNull()</code>
  <p>
  See examples in javadoc for <code>Matchers</code> class
 @return <code>null</code>.
 */
+ (id)notNull;

/*!
 @brief Not <code>null</code> argument, not necessary of the given class.
 The class argument is provided to avoid casting. 
 <p>
  alias to <code>Matchers.isNotNull(Class)</code>
  <p>
  See examples in javadoc for <code>Matchers</code> class
 @param clazz Type to avoid casting
 @return <code>null</code>.
 */
+ (id)notNullWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Object argument that is reflection-equal to the given value with support for excluding
  selected fields from a class.
 <p>
  This matcher can be used when equals() is not implemented on compared objects.
  Matcher uses java reflection API to compare fields of wanted and actual object. 
 <p>
  Works similarly to EqualsBuilder.reflectionEquals(this, other, exlucdeFields) from
  apache commons library. 
 <p>
  <b>Warning</b> The equality check is shallow! 
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @param excludeFields fields to exclude, if field does not exist it is ignored.
 @return <code>null</code>.
 */
+ (id)refEqWithId:(id)value
withNSStringArray:(IOSObjectArray *)excludeFields;

/*!
 @brief Object argument that is the same as the given value.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param value the given value.
 @return <code>null</code>.
 */
+ (id)sameWithId:(id)value;

/*!
 @brief Allows creating custom <code>Short</code> argument matchers.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jshort)shortThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief <code>String</code> argument that starts with the given prefix.
 <p>
  See examples in javadoc for <code>Matchers</code> class
 @param prefix the prefix.
 @return empty String ("").
 */
+ (NSString *)startsWithWithNSString:(NSString *)prefix;

@end

J2OBJC_STATIC_INIT(OrgMockitoMatchers)

FOUNDATION_EXPORT void OrgMockitoMatchers_init(OrgMockitoMatchers *self);

FOUNDATION_EXPORT OrgMockitoMatchers *new_OrgMockitoMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoMatchers *create_OrgMockitoMatchers_init(void);

FOUNDATION_EXPORT jboolean OrgMockitoMatchers_anyBoolean(void);

FOUNDATION_EXPORT jbyte OrgMockitoMatchers_anyByte(void);

FOUNDATION_EXPORT jchar OrgMockitoMatchers_anyChar(void);

FOUNDATION_EXPORT jint OrgMockitoMatchers_anyInt(void);

FOUNDATION_EXPORT jlong OrgMockitoMatchers_anyLong(void);

FOUNDATION_EXPORT jfloat OrgMockitoMatchers_anyFloat(void);

FOUNDATION_EXPORT jdouble OrgMockitoMatchers_anyDouble(void);

FOUNDATION_EXPORT jshort OrgMockitoMatchers_anyShort(void);

FOUNDATION_EXPORT id OrgMockitoMatchers_anyObject(void);

FOUNDATION_EXPORT id OrgMockitoMatchers_anyVararg(void);

FOUNDATION_EXPORT id OrgMockitoMatchers_anyWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_any(void);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_anyString(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoMatchers_anyList(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoMatchers_anyListOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoMatchers_anySet(void);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoMatchers_anySetOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoMatchers_anyMap(void);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoMatchers_anyMapOfWithIOSClass_withIOSClass_(IOSClass *keyClazz, IOSClass *valueClazz);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoMatchers_anyCollection(void);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoMatchers_anyCollectionOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_isAWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT jboolean OrgMockitoMatchers_eqWithBoolean_(jboolean value);

FOUNDATION_EXPORT jbyte OrgMockitoMatchers_eqWithByte_(jbyte value);

FOUNDATION_EXPORT jchar OrgMockitoMatchers_eqWithChar_(jchar value);

FOUNDATION_EXPORT jdouble OrgMockitoMatchers_eqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoMatchers_eqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoMatchers_eqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoMatchers_eqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoMatchers_eqWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoMatchers_eqWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoMatchers_refEqWithId_withNSStringArray_(id value, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT id OrgMockitoMatchers_sameWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoMatchers_isNull(void);

FOUNDATION_EXPORT id OrgMockitoMatchers_isNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_notNull(void);

FOUNDATION_EXPORT id OrgMockitoMatchers_notNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_isNotNull(void);

FOUNDATION_EXPORT id OrgMockitoMatchers_isNotNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_containsWithNSString_(NSString *substring);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_matchesWithNSString_(NSString *regex);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_endsWithWithNSString_(NSString *suffix);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_startsWithWithNSString_(NSString *prefix);

FOUNDATION_EXPORT id OrgMockitoMatchers_argThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jchar OrgMockitoMatchers_charThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jboolean OrgMockitoMatchers_booleanThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jbyte OrgMockitoMatchers_byteThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jshort OrgMockitoMatchers_shortThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jint OrgMockitoMatchers_intThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jlong OrgMockitoMatchers_longThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jfloat OrgMockitoMatchers_floatThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jdouble OrgMockitoMatchers_doubleThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMatchers)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoMatchers")
