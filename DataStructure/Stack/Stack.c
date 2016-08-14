//
//  Stack.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "Stack.h"
#include <stdlib.h>
Stack* createStack(){
    Stack* stackRet = (Stack*)(malloc(sizeof(Stack)));
    if (stackRet == NULL) {
        printf("Error: createStack memory is null!\n");
        return NULL;
    }
    stackRet->next = NULL;
    return stackRet;
    
}

int isStackEmpty(const Stack* stack){
    if (stack == NULL) {
        printf("Error: isStackEmpty stack is NULL\n");
        return 1;
    }
    return stack->next == NULL;
}

void push(Stack* stack, int data){
    if (stack == NULL) {
        printf("Error: push stack is NULL\n");
        return;
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Error: push memory is null!\n");
        return;
    }
    newNode->data = data;
    newNode->next = stack->next;
    stack->next = newNode;
}

void pop(Stack* stack){
    if (stack == NULL) {
        printf("Error: pop stack is NULL!\n");
        return;
    }
    if (isStackEmpty(stack)) {
        printf("Stack is Empty!\n");
        return;
    }
    Node* poped = top(stack);
    stack->next = poped->next;
    free(poped);
}

Node* top(const Stack* stack){
    if (stack == NULL) {
        printf("Error: top statck is NULL\n");
        return NULL;
    }
    if (isStackEmpty(stack)) {
        printf("stack is Empty!\n");
        return NULL;
    }
    return stack->next;
}

void clearStack(Stack* stack){
    if (stack == NULL) {
        printf("Error: clearStack stack is NULL\n");
        return;
    }
    while (!isStackEmpty(stack)) {
        pop(stack);
    }
    
}