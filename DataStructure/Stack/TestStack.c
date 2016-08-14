//
//  TestStack.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"
#include "ArrayTools.h"

int main_Stack(){
    Stack* stack = createStack();
    printIntStack(stack);
    pop(stack);
    printIntStack(stack);
    push(stack, 0);
    printIntStack(stack);
    push(stack, 1);
    push(stack, 2);
    printf("Stack top is %d\n", top(stack)->data);
    pop(stack);
    printIntStack(stack);
    printf("Stack top is %d\n", top(stack)->data);
    clearStack(stack);
    printIntStack(stack);
    return 0;
}