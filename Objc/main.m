//
//  main.m
//  ObjCTest
//
//  Created by Florent Vilmart on 18-03-06.
//  Copyright © 2018 amp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Bridging-Header.h"

int main(int argc, const char * argv[]) {
    // Unlike Swift, this is always true...
    if ([ProtocolTest isCollectionAssignableFromList]) {
        ObjectWithList *obj = nil;
        [obj getIntegers];
        return 0;
    }
    return 1;
}
