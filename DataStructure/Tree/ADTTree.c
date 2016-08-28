//
//  ADTTree.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "ADTTree.h"
#include <stdlib.h>

void emptyADT(TreeNode* root){
    if (root == NULL) {
        return;
    }
    emptyADT(root->left);
    emptyADT(root->right);
    free(root);
}
TreeNode* findADT(TreeNode* root, int value){
    if (root == NULL) {
        return NULL;
    }
    if (root->data > value) {
        return findADT(root->left, value);
    } else if(root->data < value){
        return findADT(root->right, value);
    } else{
        return root;
    }
}
TreeNode* findMinADT(TreeNode* root){
    if (root == NULL) {
        printf("Error:findMinADT root is NULL\n");
        return NULL;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}
TreeNode* findMaxADT(TreeNode* root){
    if (root == NULL) {
        printf("Error:findMaxADT root is NULL\n");
        return NULL;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

TreeNode* createADTNode(int value){
    TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
    if (node == NULL) {
        printf("Error: createADTNode memory is NULL\n");
        return NULL;
    }
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

TreeNode* insertADT(TreeNode* root, int insertedValue){
    if (root == NULL) {
        printf("Error: insertADT root is NULL\n");
        return NULL;
    }
    while (root != NULL) {
        if (root->data < insertedValue) {
            if (root->right != NULL) {
                root = root->right;
            } else{
                root->right = createADTNode(insertedValue);
                return root->right;
            }
        } else if(root->data > insertedValue){
            if (root->left != NULL) {
                root = root->left;
            } else{
                root->left = createADTNode(insertedValue);
                return root->left;
            }
        } else{
            printf("Error the value is existed!\n");
            return root;
        }
    }
    return NULL;
}
TreeNode* deleteADT(TreeNode* root, int deletedValue){
    if (root == NULL) {
        printf("Error: deleteADT root is NULL\n");
        return NULL;
    }
    
    if (root->data < deletedValue) {
        root->right = deleteADT(root->right, deletedValue);
    } else if(root->data > deletedValue){
        root->left = deleteADT(root->left, deletedValue);
    } else{
        if (root->left!=NULL && root->right!=NULL) {
            TreeNode* rightMin = findMinADT(root->right);
            root->data = rightMin->data;
            root->right = deleteADT(root->right, root->data);
        } else{
            TreeNode* tmp = root;
            if (root->left==NULL) {
                root = root->right;
            } else if(root->right == NULL){
                root = root->left;
            }
            free(tmp);
        }
    }
    return root; 
}