//
//  Node.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
struct _Node{
    int data;
    struct _Node* next;
};
typedef struct _Node Node;
#endif /* Node_h */
