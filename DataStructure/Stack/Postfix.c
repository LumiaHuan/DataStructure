//
//  Postfix.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"

int calcPostfix(char* postfix){
    int ret = 0;
    Stack* stack = createStack();
    while (*postfix != '\0') {
        if (*postfix>='0' && *postfix<='9') {
            push(stack, *postfix-'0');
        }else{
            int num2 = 0;
            int num1 = 0;
            switch (*postfix) {
                case '+':
                    num2 = top(stack)->data;
                    pop(stack);
                    num1 = top(stack)->data;
                    pop(stack);
                    ret = num1 + num2;
                    push(stack, ret);
                    break;
                case '-':
                    num2 = top(stack)->data;
                    pop(stack);
                    num1 = top(stack)->data;
                    pop(stack);
                    ret = num1 - num2;
                    push(stack, ret);
                    break;
                case '*':
                    num2 = top(stack)->data;
                    pop(stack);
                    num1 = top(stack)->data;
                    pop(stack);
                    ret = num1 * num2;
                    push(stack, ret);
                    break;
                case '/':
                    num2 = top(stack)->data;
                    pop(stack);
                    num1 = top(stack)->data;
                    pop(stack);
                    ret = num1 / num2;
                    push(stack, ret);
                    break;
                default:
                    break;
            }
        }
        postfix++;
    }
    ret = top(stack)->data;
    clearStack(stack);
    free(stack);
    return ret;
}

int getLevel(char chr){
    int level = -1;
    switch (chr) {
        case '+':
        case '-':
            level = 0;
            break;
        case '*':
        case '/':
            level = 1;
            break;
        case '(':
            level = -1;
            break;
    }
    return level;
}

char* infix2Postfix(const char* infix, unsigned long length){
    char* postfix = (char*)malloc(sizeof(char)*length);
    int index = 0;
    Stack* tmpStack = createStack();
    while (*infix != '\0') {
        if (*infix >= '0' && *infix <= '9') {
            postfix[index++] = *infix;
        } else{
            switch(*infix){
                case '+':
                case '-':
                case '*':
                case '/':
                    while (!isStackEmpty(tmpStack) && getLevel(top(tmpStack)->data) >= getLevel(*infix)) {
                        postfix[index++] = top(tmpStack)->data;
                        pop(tmpStack);
                    }
                    push(tmpStack, *infix);
                    
                    break;
                case '(':
                    push(tmpStack, *infix);
                    break;
                case ')':
                    while (top(tmpStack)->data != '(') {
                        postfix[index++] = top(tmpStack)->data;
                        pop(tmpStack);
                    }
                    pop(tmpStack);
                    break;
            }
        }
        infix++;
    }
    while (!isStackEmpty(tmpStack)) {
        postfix[index++] = top(tmpStack)->data;
        pop(tmpStack);
    }
    postfix[index] = '\0';
    free(tmpStack);
    return postfix;
}

int main_Postfix(){
    const char* infix = "(1+2)*4-2*6/2";
    size_t length = strlen(infix);
    char* postfix = infix2Postfix(infix, length+1);
    int ret = calcPostfix(postfix);
    printf("Result is:%d\n", ret);
    return 0;
}
