#ifndef __SEGMENT_TREE_NODE__
#define __SEGMENT_TREE_NODE__
class SegmentTreeNode {
public:
    int start, end, max;
    SegmentTreeNode *left, *right;
    SegmentTreeNode(int start, int end, int max) 
    {
        this->start = start;
        this->end = end;
        this->max = max;
        this->left = this->right = nullptr;
            
    }      
};

#endif