//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/beans/PropertyChangeEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansPropertyChangeEvent")
#ifdef RESTRICT_JavaBeansPropertyChangeEvent
#define INCLUDE_ALL_JavaBeansPropertyChangeEvent 0
#else
#define INCLUDE_ALL_JavaBeansPropertyChangeEvent 1
#endif
#undef RESTRICT_JavaBeansPropertyChangeEvent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansPropertyChangeEvent_) && (INCLUDE_ALL_JavaBeansPropertyChangeEvent || defined(INCLUDE_JavaBeansPropertyChangeEvent))
#define JavaBeansPropertyChangeEvent_

#define RESTRICT_JavaUtilEventObject 1
#define INCLUDE_JavaUtilEventObject 1
#include "java/util/EventObject.h"

@class JavaLangStringBuilder;

/*!
 @brief A "PropertyChange" event gets delivered whenever a bean changes a "bound"
  or "constrained" property.A PropertyChangeEvent object is sent as an
  argument to the PropertyChangeListener and VetoableChangeListener methods.
 <P>
  Normally PropertyChangeEvents are accompanied by the name and the old
  and new value of the changed property.  If the new value is a primitive
  type (such as int or boolean) it must be wrapped as the
  corresponding java.lang.* Object type (such as Integer or Boolean). 
 <P>
  Null values may be provided for the old and the new values if their
  true values are not known. 
 <P>
  An event source may send a null object as the name to indicate that an
  arbitrary set of if its properties have changed.  In this case the
  old and new values should also be null.
 */
@interface JavaBeansPropertyChangeEvent : JavaUtilEventObject

#pragma mark Public

/*!
 @brief Constructs a new <code>PropertyChangeEvent</code>.
 @param source The bean that fired the event.
 @param propertyName The programmatic name of the property           that was changed.
 @param oldValue The old value of the property.
 @param newValue The new value of the property.
 */
- (instancetype)initWithId:(id)source
              withNSString:(NSString *)propertyName
                    withId:(id)oldValue
                    withId:(id)newValue;

/*!
 @brief Gets the new value for the property, expressed as an Object.
 @return The new value for the property, expressed as an Object.
           May be null if multiple properties have changed.
 */
- (id)getNewValue;

/*!
 @brief Gets the old value for the property, expressed as an Object.
 @return The old value for the property, expressed as an Object.
           May be null if multiple properties have changed.
 */
- (id)getOldValue;

/*!
 @brief The "propagationId" field is reserved for future use.In Beans 1.0
  the sole requirement is that if a listener catches a PropertyChangeEvent
  and then fires a PropertyChangeEvent of its own, then it should
  make sure that it propagates the propagationId field from its
  incoming event to its outgoing event.
 @return the propagationId object associated with a bound/constrained
           property update.
 */
- (id)getPropagationId;

/*!
 @brief Gets the programmatic name of the property that was changed.
 @return The programmatic name of the property that was changed.
           May be null if multiple properties have changed.
 */
- (NSString *)getPropertyName;

/*!
 @brief Sets the propagationId object for the event.
 @param propagationId The propagationId object for the event.
 */
- (void)setPropagationIdWithId:(id)propagationId;

/*!
 @brief Returns a string representation of the object.
 @return a string representation of the object
 @since 1.7
 */
- (NSString *)description;

#pragma mark Package-Private

- (void)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansPropertyChangeEvent)

FOUNDATION_EXPORT void JavaBeansPropertyChangeEvent_initWithId_withNSString_withId_withId_(JavaBeansPropertyChangeEvent *self, id source, NSString *propertyName, id oldValue, id newValue);

FOUNDATION_EXPORT JavaBeansPropertyChangeEvent *new_JavaBeansPropertyChangeEvent_initWithId_withNSString_withId_withId_(id source, NSString *propertyName, id oldValue, id newValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansPropertyChangeEvent *create_JavaBeansPropertyChangeEvent_initWithId_withNSString_withId_withId_(id source, NSString *propertyName, id oldValue, id newValue);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyChangeEvent)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansPropertyChangeEvent")
