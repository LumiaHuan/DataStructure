//
//  ArrayQueue.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef ArrayQueue_h
#define ArrayQueue_h

#include <stdio.h>
struct _ArrayQueue{
    int head;
    int rear;
    int currentSize;
    int maxSize;
    int* data;
};
typedef struct _ArrayQueue ArrayQueue;

ArrayQueue* createArrayQueue(int maxSize);
int clearArrayQueue(ArrayQueue** queue);
int enArrayQueue(ArrayQueue* queue, int enData);
int deArrayQueue(ArrayQueue* queue, /*out*/int* ret);
int isArrayQueueEmpty(ArrayQueue* queue);
int isArrayQueueFull(ArrayQueue* queue);
int frontArrayQueue(ArrayQueue* queue);
int tailArrayQueue(ArrayQueue* queue);

#endif /* ArrayQueue_h */
