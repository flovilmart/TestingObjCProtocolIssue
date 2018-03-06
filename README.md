Demo project for Swift Compiler Issue
====

This issue arises with j2objc, breaks class comparison.

Note: This doesn't dive deep into the objective-c runtime, but provides examples of broken behaviours in Swift

# Run!

## 1. ObjC target

The ObjC target is behaving as expected, the protocol metadata giving us the right answer.

## 2. SwiftDemo target

The SwiftDemo target is broken, due to the code in 

```swift
let obj: ObjectWithList? = nil
print("\(String(describing: obj?.getIntegers()))")
``` 

At this point we're not sure what's causing the issue

## 3. SwiftDemo unbroken

Same as the previous target, but with a compile flag removed.

## 4. SwiftDemo force protocol load

Another workaround, which involves explicitely calling `@prococol(AProtocolToLoad)`

```
void workaround() {
    // Forcing the import here, will ensure protocol is properly 'materialized'
    @protocol(JavaUtilList);
}
```

Note that `workaround()` is never called, simply compiled with the target.

# References

Checking protocol conformance for j2objc classes is down through [[IOSProtocolClass isAssignableFrom:]](https://github.com/google/j2objc/blob/master/jre_emul/Classes/IOSProtocolClass.m#L108).
