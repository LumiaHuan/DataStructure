//
//  BalanceSymbole.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int isBalance(char* str){
    if (str == NULL) {
        printf("Error: isBalance str is NULL\n");
        return -1;
    }
    Stack* stack = createStack();
    while (*str != '\0') {
        
        switch (*str) {
            case '(':
            case '[':
            case '{':
                push(stack, *str);
                break;
            case ')':
                if (isStackEmpty(stack) || top(stack)->data != '(') {
                    return 0;
                } else{
                    pop(stack);
                }
                break;
            case ']':
                if (isStackEmpty(stack) || top(stack)->data != '[') {
                    return 0;
                } else{
                    pop(stack);
                }

                break;
            case '}':
                if (isStackEmpty(stack) || top(stack)->data != '{') {
                    return 0;
                } else{
                    pop(stack);
                }
                break;
        }
        str++;
    }
    if (!isStackEmpty(stack)) {
        return 0;
    }
    return 1;
}

int main(){
    char* str = "(1+2)-(2*(4)+2))";
    int balanced = isBalance(str);
    if (balanced == -1) {
        return 1;
    }
    if (balanced) {
        printf("Balance!\n");
    } else{
        printf("Not Balance!\n");
    }
    return 0;
}