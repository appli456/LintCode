#pragma once
#include <vector>

using std::vector;

class Solution {
public:
    /**
    * @param A: An integers array.
    * @return: return any of peek positions.
    */
    int findPeak(vector<int> A) {
        // write your code here
        int left = 0;
        int right = A.size() - 1;
        int mid;
        while (left < right - 1)
        {
            mid = (left + right) / 2;
            if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1]) {
                return mid;
            }
            if (A[mid] > A[mid - 1]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return A[left] > A[right] ? left : right;
    }
};
