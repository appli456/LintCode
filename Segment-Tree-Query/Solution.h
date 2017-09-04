#pragma once
/**
* Definition of SegmentTreeNode:
* class SegmentTreeNode {
* public:
*     int start, end, max;
*     SegmentTreeNode *left, *right;
*     SegmentTreeNode(int start, int end, int max) {
*         this->start = start;
*         this->end = end;
*         this->max = max;
*         this->left = this->right = NULL;
*     }
* }
*/
#include "./../lib/SegmentTreeNode.h"
#include <cstdint>
#include <algorithm>

class Solution {
public:
    /*
    * @param root: The root of segment tree.
    * @param start: start value.
    * @param end: end value.
    * @return: The maximum number in the interval [start, end]
    */
    int query(SegmentTreeNode * root, int start, int end) {
        // write your code here

        if (root->start > end || root->end < start)
        {
            return INT32_MIN;
        }

        if (root->start >= start && root->end <= end)
        {
            return root->max;
        }

        int left = query(root->left, start, end);
        int right = query(root->right, start, end);

        return std::max(left, right);
    }
};
