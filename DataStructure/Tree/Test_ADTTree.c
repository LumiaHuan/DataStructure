//
//  Test_ADTTree.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "ADTTree.h"
#include <stdlib.h>


/*
        6
     /     \
    3       9
     \     / \
      4   7   10
 
 */
int main(){
    TreeNode* adtRoot = (TreeNode*)malloc(sizeof(TreeNode));
    adtRoot->data = 6;
    adtRoot->left = NULL;
    adtRoot->right = NULL;
    insertADT(adtRoot, 3);
    insertADT(adtRoot, 4);
    insertADT(adtRoot, 9);
    insertADT(adtRoot, 7);
    insertADT(adtRoot, 10);
    printf("Min: %d\n", findMinADT(adtRoot)->data);
    printf("Max: %d\n", findMaxADT(adtRoot)->data);
    deleteADT(adtRoot, 6);
    printf("Top: %d\n", adtRoot->data);
    printf("Min: %d\n", findMinADT(adtRoot)->data);
    printf("Max: %d\n", findMaxADT(adtRoot)->data);
    deleteADT(adtRoot, 3);
    printf("Min: %d\n", findMinADT(adtRoot)->data);
    printf("Max: %d\n", findMaxADT(adtRoot)->data);

    return 1;
}