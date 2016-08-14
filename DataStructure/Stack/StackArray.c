//
//  StackArray.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "StackArray.h"
#include <stdlib.h>
#include <math.h>
#include <limits.h>

ArrayStack* createArrayStack(int capacity){
    if (capacity <= 0) {
        printf("Error: createStack capacity cannot less than 1");
        return NULL;
    }
    ArrayStack* stack = (ArrayStack*)malloc(sizeof(ArrayStack));
    if (stack == NULL) {
        printf("Error: createStack Memoery is NULL\n");
        return NULL;
    }
    stack->capacity = capacity;
    stack->topIndex = EMPTY_INDEX;
    stack->array = (int*)malloc(sizeof(int)*capacity);
    if (stack->array == NULL) {
        printf("Error: createStack Memory is NULL\n");
        free(stack);
        return NULL;
    }
    return stack;
    
}
int isArrayStackEmpty(const ArrayStack* stack){
    if (stack == NULL) {
        printf("Error: isArrayStackEmpty stack is NULL!\n");
        return 1;
    }
    return stack->topIndex == EMPTY_INDEX;
}
int isArrayStackFull(const ArrayStack* stack){
    if (stack == NULL) {
        printf("Error: isArrayStackFull stack is NULL!\n");
        return 1;
    }
    return stack->topIndex == (stack->capacity-1);
}
void push_ArrayStack(ArrayStack* stack, int data){
    if (stack == NULL) {
        printf("Error: push tack is NULL\n");
        return;
    }
    if (isArrayStackFull(stack)) {
        printf("Stack is Full!\n");
        return;
    }
    stack->array[++stack->topIndex] = data;
}
void pop_ArrayStack(ArrayStack* stack){
    if (stack == NULL) {
        printf("Error: pop stack is NULL!\n");
        return;
    }
    if (isArrayStackEmpty(stack)) {
        printf("Stack is Empty");
        return;
    }
    stack->topIndex--;
}
int top_ArrayStack(const ArrayStack* stack){
    if (stack == NULL) {
        printf("Error: top stack is NULL!\n");
        return INT_MIN;
    }
    if (isArrayStackEmpty(stack)) {
        printf("Stack is Empty");
        return INT_MIN;
    }
    return stack->array[stack->topIndex];
}
void clearArrayStack(ArrayStack** stack){
    if (stack == NULL) {
        printf("Error: top stack is NULL!\n");
        return;
    }
    free((*stack)->array);
    free(*stack);
    *stack = NULL;
}