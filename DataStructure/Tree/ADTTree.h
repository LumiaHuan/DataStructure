//
//  ADTTree.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef ADTTree_h
#define ADTTree_h

#include <stdio.h>
#include "TreeNode.h"

void emptyADT(TreeNode* root);
TreeNode* findADT(TreeNode* root, int value);
TreeNode* findMinADT(TreeNode* root);
TreeNode* findMaxADT(TreeNode* root);
TreeNode* insertADT(TreeNode* root, int insertedValue);
TreeNode* deleteADT(TreeNode* root, int deletedValue);

#endif /* ADTTree_h */
