//
//  TestList.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "List.h"

int main_List(){
    Node* header = createList();
    int i;
    printList(header);
    for (i = 0; i < 5; i++) {
        insertNode(i, findLast(header));
        printList(header);
    }
    for (i = 0; i < 5; i++) {
        deleteNode(i+1, header);
        printList(header);
    }
    insertPos(1, header, 0);
    printList(header);
    insertNode(2, header);
    printList(header);
    deleteList(header);
    printList(header);
    printf("isEmpty:%d\n", isEmpty(header));
    insertNode(0, header);
    printList(header);
    insertNode(1, findPos(0, header));
    printList(header);
    return 0;
}