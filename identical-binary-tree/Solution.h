#pragma once
#include "../lib/TreeNode.h"

class Solution {
public:
    /*
    * @param a: the root of binary tree a.
    * @param b: the root of binary tree b.
    * @return: true if they are identical, or false.
    */
    bool isIdentical(TreeNode * a, TreeNode * b) {
        // write your code here

        if (a == nullptr && b == nullptr)
        {
            return true;
        }
        if (a == nullptr || b == nullptr)
        {
            return false;
        }

        return a->val == b->val && 
            isIdentical(a->left, b->left) && 
            isIdentical(a->right, b->right);
    }
};
