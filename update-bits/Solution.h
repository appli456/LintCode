#pragma once
#include <climits>
#include <iostream>


class Solution {
public:
    /**
    *@param n, m: Two integer
    *@param i, j: Two bit positions
    *return: An integer
    */
    int updateBits(int n, int m, int i, int j) {
        // write your code here
      
        int left = ((j == 31) ? 
            0 : 
            ((-1) - ((1 << (j + 1)) - 1)));
        int right = (1 << i) - 1;
        return (n & (left | right)) | (m << i);
    }
};
