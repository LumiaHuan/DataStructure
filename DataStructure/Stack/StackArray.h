//
//  StackArray.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef StackArray_h
#define StackArray_h

#include <stdio.h>
#define EMPTY_INDEX -1
struct _ArrayStack{
    int capacity;
    int topIndex;
    int* array;
};
typedef struct _ArrayStack ArrayStack;

ArrayStack* createArrayStack(int capacity);
int isArrayStackEmpty(const ArrayStack* stack);
int isArrayStackFull(const ArrayStack* stack);
void push_ArrayStack(ArrayStack* stack, int data);
void pop_ArrayStack(ArrayStack* stack);
int top_ArrayStack(const ArrayStack* stack);
void clearArrayStack(ArrayStack** stack);
#endif /* StackArray_h */
