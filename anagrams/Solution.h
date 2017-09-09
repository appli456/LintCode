#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using std::string;
using std::vector;
using std::unordered_map;


class Solution {
public:
    /**
    * @param strs: A list of strings
    * @return: A list of strings
    */
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        unordered_map<string, vector<string>>str_map;
        vector<string>result;

        for(int i = 0; i < strs.size(); ++i)
        {
            string str = strs[i];
            std::sort(str.begin(), str.end());

            auto it = str_map.find(str);
            if (it != str_map.end())
            {
                it->second.push_back(strs[i]);
            }
            else
            {
                vector<string>container;
                container.push_back(strs[i]);
                str_map[str] = container;
            }
        }

        for (auto it = str_map.begin(); it != str_map.end(); ++it)
        {
            if (it->second.size() >= 2)
            {
                for (int i = 0; i < it->second.size(); ++i)
                {
                    result.push_back(it->second[i]);
                }
            }
        }

        return result;
    }
};