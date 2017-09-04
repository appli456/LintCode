#pragma once
#include <stack>
#include <algorithm>

class MinStack {
public:
	MinStack() {
		// do initialization if necessary
	}

	void push(int number) {
		// write your code here
		serial_stack.push(number);
		if (min_stack.empty())
		{
			min_stack.push(number);
		} 
	    else if (number <= min_stack.top())
		{
            min_stack.push(number);
		}
	}

	int pop() {
		// write your code here
		int top = serial_stack.top();
		serial_stack.pop();
		if (top == min_stack.top())
		{
			min_stack.pop();
		}

		return top;
	}

	int min() {
		// write your code here

		return min_stack.top();
	}

private:
    std::stack<int>serial_stack;
	std::stack<int>min_stack;
};