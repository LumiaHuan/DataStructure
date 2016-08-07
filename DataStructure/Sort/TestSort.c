//
//  TestSort.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "Sort.h"
#include "List.h"
int main(){
    Node* waitToSort = createList();
    int array[10] = {64, 8, 216, 512, 27, 729, 0, 1, 343, 125};
    int i;
    for (i = 0; i < 10; i++) {
        insertNode(array[i], findLast(waitToSort));
    }
    printf("Original List is:\n");
    printList(waitToSort);
    printf("\nRadix Sort:\n");
    Node* sortedList = radixSort(waitToSort, 10, 3);
    printf("The result is:\n");
    printList(sortedList);
    printf("\n\n");
    return 0;
}