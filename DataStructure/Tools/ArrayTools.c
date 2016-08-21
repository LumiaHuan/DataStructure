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

void printIntArrayStack(const ArrayStack* stack){
    if (stack == NULL) {
        printf("Error: printIntArrayStack stack == NULL\n");
        return;
    }
    printf(" - \n");
    int i;
    for (i = stack->topIndex; i>=0; i--) {
        printf(" %d \n", stack->array[i]);
        printf(" - \n");
    }
}

void printIntArrayQueue(const ArrayQueue* queue){
    if (queue == NULL) {
        printf("Error: printIntArrayQueue queue == NULL\n");
        return;
    }
    if (isArrayQueueEmpty(queue)) {
        printf("Queue is Empty\n");
        return;
    }
    int i = queue->head;
    do {
        printf("%d", queue->data[i]);
        if (i != queue->rear) {
            printf("<-");
        }
        i++;
        if (i >= queue->maxSize) {
            i = i%queue->maxSize;
        }
    } while (i != (queue->rear+1)%queue->maxSize);
    printf("\n");
}