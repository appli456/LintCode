// update-bits.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Solution.h"

using namespace std;
int main()
{
    Solution * s = new Solution();
    cout << s->updateBits(35, 41, 3, 9) << endl;
    system("pause");

    return 0;
}

