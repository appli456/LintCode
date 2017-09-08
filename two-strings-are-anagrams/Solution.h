#pragma once
#include <string>
#include <vector>
#include <algorithm>
using std::string;
using std::vector;

class Solution {
public:
    /**
    * @param s: The first string
    * @param b: The second string
    * @return true or false
    */
    bool anagram(string s, string t) {

        // write your code here

        if (s.length() != t.length())
        {
            return false;
        }

        vector<int>sv(128, 0);
        for (int i = 0; i < s.length(); ++i)
        {
          
            sv[s[i]] += 1;
        }

        for (int i = 0; i < t.length(); ++i)
        {
            sv[t[i]] -= 1;
            if (sv[t[i]] < 0)
            {
                return false;
            }
        }

        return true;
    }
};
