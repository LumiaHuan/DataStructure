//
//  TreeNode.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef TreeNode_h
#define TreeNode_h

#include <stdio.h>
struct _TreeNode{
    int data;
    struct _TreeNode* left;
    struct _TreeNode* right;
};

typedef struct _TreeNode TreeNode;

#endif /* TreeNode_h */
