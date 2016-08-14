//
//  ArrayTools.c
//  DataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "ArrayTools.h"
void printIntArray(const int* const array, int N){
    int i;
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printIntStack(const Stack* stack){
    printf(" - \n");
    while (!isStackEmpty(stack)) {
        printf(" %d \n", top(stack)->data);
        printf(" - \n");
        stack = stack->next;
    }
}