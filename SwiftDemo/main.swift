//
//  main.swift
//  SwiftDemo
//
//  Created by Florent Vilmart on 18-03-06.
//  Copyright © 2018 amp. All rights reserved.
//

import Foundation

let isAssignable = ProtocolTest.isCollectionAssignableFromList()

#if UNBROKEN
#else
let obj: ObjectWithList? = nil
print("\(String(describing: obj?.getIntegers()))")
#endif

if !isAssignable {
    fatalError("Oops. this should be assignable... run the SwiftDemo Unbroken target")
}
