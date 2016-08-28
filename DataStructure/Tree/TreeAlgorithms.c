//
//  TreeAlgorithms.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "TreeAlgorithms.h"
#include <stdlib.h>

TreeNode* addLeft(TreeNode* root, int data){
    if (root == NULL) {
        printf("Error: addLeft root is NULL!\n");
        return NULL;
    }
    TreeNode* left = (TreeNode*)malloc(sizeof(TreeNode));
    if (left == NULL) {
        printf("Memory is NULL!\n");
        return NULL;
    }
    left->data = data;
    left->left = left->right = NULL;
    root->left = left;
    return left;
}

TreeNode* addRight(TreeNode* root, int data){
    if (root == NULL) {
        printf("Error: addRight root is NULL!\n");
        return NULL;
    }
    TreeNode* right = (TreeNode*)malloc(sizeof(TreeNode));
    if (right == NULL) {
        printf("Memory is NULL!\n");
        return NULL;
    }
    right->data = data;
    right->left = right->right = NULL;
    root->right = right;
    return right;

}

void preOrderTraversal(TreeNode* root){
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(TreeNode* root){
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ", root->data);
}

void postOrderTraversal_expression(TreeNode* root){
    if (root == NULL) {
        return;
    }
    postOrderTraversal_expression(root->left);
    postOrderTraversal_expression(root->right);
    printf("%c ", root->data);

}