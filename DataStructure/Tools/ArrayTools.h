//
//  ArrayTools.h
//  DataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef ArrayTools_h
#define ArrayTools_h

#include <stdio.h>
#include "Stack.h"
#include "StackArray.h"
#include "ArrayQueue.h"
void printIntArray(const int* const array, int N);
void printIntStack(const Stack* stack);
void printIntArrayStack(const ArrayStack* stack);
void printIntArrayQueue(const ArrayQueue* queue);

#endif /* ArrayTools_h */
