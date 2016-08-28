//
//  ExpressionTree.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "TreeAlgorithms.h"
#include <stdlib.h>
/*
             +
         /        \
        +          *
      /  \       /   \
     a    *     +     g
         / \   / \
        b   c *   f
             / \
            d   e
 */
TreeNode* createExpressionTree(){
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->data = '+';
    TreeNode* left = addLeft(root, '+');
    TreeNode* right = addRight(root, '*');
    addLeft(left, 'a');
    TreeNode* multi = addRight(left, '*');
    TreeNode* add = addLeft(right, '+');
    addRight(right, 'g');
    addLeft(multi, 'b');
    addRight(multi, 'c');
    TreeNode* multi2 = addLeft(add, '*');
    addRight(add, 'f');
    addLeft(multi2, 'd');
    addRight(multi2, 'e');
    return root;
}

int main_ExpressionTree(){
    TreeNode* root = createExpressionTree();
    postOrderTraversal_expression(root);
    return 0;
}


