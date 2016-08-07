//
//  List.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
struct _Node;
typedef struct _Node Node;
Node* createList();
int isEmpty(Node* header);
Node* findPos(int pos, Node* header);
Node* findNode(int findValue, Node* header);
Node* findLast(Node* header);
void deleteNode(int deleteValue, Node* header);
void insertNode(int insertValue, Node* pos);
void insertPos(int insertValue, Node* header, int pos);
void deleteList(Node* header);
void printList(Node* header);
#endif /* List_h */
