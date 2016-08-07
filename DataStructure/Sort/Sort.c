//
//  Sort.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "Sort.h"
#include <stdlib.h>
#include "Pow.h"
Node* radixSort(Node* header, int radix, int stepNum){
    if (header == NULL) {
        printf("Error radixSort header is NULL\n");
        return NULL;
    }
    Node* retList = copyList(header);
    Node* buckets[radix];
    int i, j;
    for (i = 0; i < radix; i++) {
        buckets[i] = createList();
    }
    
    for (i = 0; i < stepNum; i++) {
        Node* tmp = retList->next;
        while (tmp!=NULL) {
            insertNode(tmp->data, findLast(buckets[tmp->data/pow_logn(radix, i)%radix]));
            tmp = tmp->next;
        }
        deleteList(retList);
        for (j = 0; j < radix; j++) {
            Node* tmp = buckets[j]->next;
            while (tmp != NULL) {
                insertNode(tmp->data, findLast(retList));
                tmp = tmp->next;
            }
            deleteList(buckets[j]);
        }
        printList(retList);
    }
    return retList;
}