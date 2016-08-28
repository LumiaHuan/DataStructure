//
//  TreeAlgorithms.h
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#ifndef TreeAlgorithms_h
#define TreeAlgorithms_h

#include <stdio.h>
#include "TreeNode.h"

TreeNode* addLeft(TreeNode* root, int data);
TreeNode* addRight(TreeNode* root, int data);
void preOrderTraversal(TreeNode* root);
void postOrderTraversal(TreeNode* root);

void postOrderTraversal_expression(TreeNode* root);

#endif /* TreeAlgorithms_h */
