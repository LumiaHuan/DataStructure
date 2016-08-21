//
//  ArrayQueue.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "ArrayQueue.h"
#include <stdlib.h>

ArrayQueue* createArrayQueue(int maxSize){
    if (maxSize<=0) {
        printf("Error: createArrayQueue maxSize is too small");
        return NULL;
    }
    ArrayQueue* queue = (ArrayQueue*)malloc(sizeof(ArrayQueue));
    if (queue == NULL) {
        printf("Error: createArrayQueue memory is NULL\n");
        return NULL;
    }
    queue->currentSize = 0;
    queue->maxSize = maxSize;
    queue->rear = queue->head = 0;
    queue->data = (int*)malloc(sizeof(int)*maxSize);
    if (queue->data == NULL) {
        printf("Error: createArrayQueue memory is NULL\n");
        free(queue);
        return NULL;
    }
    return queue;
}

int clearArrayQueue(ArrayQueue** queue){
    if (*queue == NULL) {
        printf("Error: clearArrayQueue queue is NULL\n");
        return 0;
    }
    free((*queue)->data);
    free(*queue);
    *queue = NULL;
    return 1;
}

int enArrayQueue(ArrayQueue* queue, int enData){
    if (queue == NULL) {
        printf("Error: enArrayQueue queue is NULL\n");
        return 0;
    }
    if (isArrayQueueEmpty(queue)) {
        queue->data[queue->rear] = enData;
        queue->currentSize++;
    } else{
        if (isArrayQueueFull(queue)) {
            printf("queue is Full\n");
            return 0;
        }
        queue->rear = (queue->rear+1)%queue->maxSize;
        queue->data[queue->rear] = enData;
        queue->currentSize++;
    }
    return 1;
}
int deArrayQueue(ArrayQueue* queue, int* ret){
    if (queue == NULL) {
        printf("Error: deArrayQueue queue is NULL\n");
        return 0;
    }
    if (isArrayQueueEmpty(queue)) {
        printf("Error: deArrayQueue isArrayQueueEmpty\n");
        return 0;
    }
    *ret = queue->data[queue->head];
    queue->head = (queue->head+1) % queue->maxSize;
    queue->currentSize--;
    return 1;
}
int isArrayQueueEmpty(ArrayQueue* queue){
    if (queue == NULL) {
        printf("Error: isArrayQueueEmpty queue is NULL\n");
        return 1;
    }
    return queue->currentSize == 0;
}
int isArrayQueueFull(ArrayQueue* queue){
    if (queue == NULL) {
        printf("Error: isArrayQueueFull queue is NULL\n");
        return 1;
    }
    return queue->currentSize == queue->maxSize;

}
int frontArrayQueue(ArrayQueue* queue){
    if (queue == NULL) {
        printf("Error: frontArrayQueue queue is NULL\n");
        return 0;
    }
    if (isArrayQueueEmpty(queue)) {
        printf("Error: array is NULL\n");
        return 0;
    }
    return queue->data[queue->head];
}
int tailArrayQueue(ArrayQueue* queue){
    if (queue == NULL) {
        printf("Error: tailArrayQueue queue is NULL\n");
        return 0;
    }
    if (isArrayQueueEmpty(queue)) {
        printf("Error: array is NULL\n");
        return 0;
    }
    return queue->data[queue->rear];

}