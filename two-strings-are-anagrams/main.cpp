// two-strings-are-anagrams.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Solution.h"
#include <iostream>

using namespace std;
int main()
{
    Solution *s = new Solution();
    cout << s->anagram("A tidy tiger tied a tie tighter to tidy her tiny tail", 
        "iat  elyrteAteyhii g ttdoiy  r ei   tttihngi atdtdrie") << endl;

    system("pause");
    return 0;
}

