#pragma once
#include <iostream>

class myStack
{
	enum{EMPTY = -1, FULL = 20};// enum перечисление, в скобках писать константы
	char arr[FULL + 1];
	int top;
public:
	
	myStack();

	void clearStack();
	
	bool isEmpty();
	bool isFull();

	void addInStack(char ch);

	int getCount();
	char getLastChar();

	char pop();

	friend std::ostream& operator<<(std::ostream& out, const myStack& stack) {
		for (int i = 0; i < stack.top; i++) {
			out << stack.arr[i];
		}
		return out;
	}

	void output();
};

