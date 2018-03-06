//
//  unbreak.m
//  TestingObjCProtocolIssue
//
//  Created by Florent Vilmart on 18-03-06.
//  Copyright © 2018 amp. All rights reserved.
//

#import "java/util/List.h"

void workaround() {
    // Forcing the import here, will ensure protocol is properly 'materialized'
    @protocol(JavaUtilList);
}
