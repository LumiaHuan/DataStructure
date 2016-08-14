//
//  TestStackArray.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include "StackArray.h"
#include "ArrayTools.h"

int main(){
    ArrayStack* stack = createArrayStack(10);
    printIntArrayStack(stack);
    pop_ArrayStack(stack);
    printIntArrayStack(stack);
    push_ArrayStack(stack, 0);
    printIntArrayStack(stack);
    push_ArrayStack(stack, 1);
    push_ArrayStack(stack, 2);
    printf("Stack top is %d\n", top_ArrayStack(stack));
    pop_ArrayStack(stack);
    printIntArrayStack(stack);
    printf("Stack top is %d\n", top_ArrayStack(stack));
    clearArrayStack(&stack);
    printIntArrayStack(stack);
    return 0;
}