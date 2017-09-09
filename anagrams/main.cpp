// anagrams.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Solution.h"
#include <iostream>


using namespace std;
int main()
{
    Solution *s = new Solution();
    vector<string> args = { "lint","intl","inlt","code" };
    
    vector<string> result = s->anagrams(args);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << '\t';
    }
    cout << endl;
    return 0;
}

