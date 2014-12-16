//
//  ToDoItem.h
//  ToDoList
//
//  Created by Guozheng Ge on 12/11/14.
//  Copyright (c) 2014 Guozheng Ge. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
