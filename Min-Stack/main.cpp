// Min-Stack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "MinStack.h"

using namespace std;

template<typename T>void print(T value)
{
    cout << value << '\t';
}

int main()
{
    MinStack* ms = new MinStack();
    
    ms->push(1);
    print(ms->pop()); 
    ms->push(2); 
    ms->push(3); 
    print(ms->min()); 
    ms->push(1); 
    print(ms->min());
    system("pause");

    return 0;
}

