//
//  TestArrayQueue.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "ArrayQueue.h"
#include "ArrayTools.h"

int main(){
    ArrayQueue* queue = createArrayQueue(10);
    printIntArrayQueue(queue);
    enArrayQueue(queue, 0);
    printIntArrayQueue(queue);
    enArrayQueue(queue, 1);
    printIntArrayQueue(queue);
    for (int i = 0; i < 9; i++) {
        enArrayQueue(queue, i);
    }
    printIntArrayQueue(queue);
    int ret;
    deArrayQueue(queue, &ret);
    printf("%d\n", ret);
    printIntArrayQueue(queue);
    deArrayQueue(queue, &ret);
    deArrayQueue(queue, &ret);
    deArrayQueue(queue, &ret);
    printIntArrayQueue(queue);
    enArrayQueue(queue, 6);
    enArrayQueue(queue, 6);
    enArrayQueue(queue, 6);
    printIntArrayQueue(queue);
    enArrayQueue(queue, 6);
    printIntArrayQueue(queue);
    enArrayQueue(queue, 6);
    return 1;
}