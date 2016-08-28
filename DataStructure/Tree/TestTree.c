//
//  TestTree.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "TreeAlgorithms.h"
#include <stdlib.h>

TreeNode* createTree();

int main_TreeAlgorithms(){
    TreeNode* root = createTree();
    if (root == NULL) {
        printf("Memory is Full!\n");
        return -1;
    }
    printf("PreOrder:");
    preOrderTraversal(root);
    printf("\n");
    printf("PostOrder:");
    postOrderTraversal(root);
    printf("\n");
    return 0;
}

/*
             0
           /   \
          1     2
        /  \   /  \
       3   4  NUL  5
 
 */
TreeNode* createTree(){
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->data = 0;
    TreeNode* left = addLeft(root, 1);
    TreeNode* right = addRight(root, 2);
    addLeft(left, 3);
    addRight(left, 4);
    addRight(right, 5);
    return root;
}