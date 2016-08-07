//
//  main.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "ArrayTools.h"
#include "BinarySearch.h"

int main_BinarySearch(){
    int array[] = {0,2,3,4,5,7,8,9};
    int N = sizeof(array) / sizeof(int);
    int key = 3;
    printIntArray(array, N);
    printf("Find %d : %d\n", key, binarySearch(array, N, key));
    key = 1;
    printf("Find %d : %d\n", key, binarySearch(array, N, key));
    return 0;
}