// paint-house-ii.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Solution.h"

using namespace std;
int main()
{
    Solution *s = new Solution();
    vector<vector<int>>value = { {14, 2, 11}, {11, 14, 5}, {14, 3, 10} };

    cout << s->minCostII(value) << endl;

    system("pause");
    return 0;
}

