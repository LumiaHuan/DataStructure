//
//  BinarySearch.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "BinarySearch.h"

int binarySearch(const int* const array, int N, int key){
    if (array == NULL || N <= 0) {
        printf("error array == NULL || N<=0 in binarySearch\n");
        return -1;
    }
    int head = 0;
    int tail = N-1;
    int mid = (head+tail) / 2;
    while (head <= tail) {
        if (array[mid] < key) {
            head = mid + 1;
        } else if(array[mid] > key){
            tail = mid - 1;
        } else{
            return mid;
        }
        mid = (head + tail) / 2;
    }
    return -1;
}