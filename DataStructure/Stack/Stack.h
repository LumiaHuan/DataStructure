//
//  Stack.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include "Node.h"

typedef Node Stack;
Stack* createStack();
int isStackEmpty(const Stack* stack);
void push(Stack* stack, int data);
void pop(Stack* stack);
Node* top(const Stack* stack);
void clearStack(Stack* stack);
#endif /* Stack_h */
