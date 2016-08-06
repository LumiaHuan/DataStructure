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