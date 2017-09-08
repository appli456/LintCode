#pragma once
#include <string>

using std::string;
class Solution {
public:
    /*
    * @param str: A string
    * @return: An integer
    */
    int atoi(string &str) {
        // write your code here


        if (!str.length())
        {
            return 0;
        }

        int i = 0;
        // remove space
        while (str[i] == ' ')
        {
            i++;
        }

        int sign = 1;
        // set sign
        if (str[i] == '+' || str[i] == '-')
        {
            sign = str[i] == '+' ? 1 : -1;
            ++i;
        }
        
        int num = 0;
        for (; str[i] >= '0' && str[i] <= '9'; ++i)
        {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && str[i] > '7'))
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = 10 * num + (str[i] - '0');
        }

        return num * sign;
    }
};