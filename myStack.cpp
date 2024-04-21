#include "myStack.h"

myStack::myStack()
{
	top = EMPTY;

}

void myStack::clearStack()
{
	top = EMPTY;
}

bool myStack::isEmpty()
{
	if (top == EMPTY) {
		return true;
	}
	return false;

}

void myStack::addInStack(char ch)
{
	if (!isFull()) {
	
		top++;
		arr[top] = ch;
		
	}
	
}


int myStack::getCount()
{
	return this->top+1;
}

char myStack::getLastChar()
{
	return arr[top-1];
}

char myStack::pop()
{
	if (!isEmpty()) {
		top--;
		return arr[top];
	}
	
}

bool myStack::isFull()
{
	if (this->top == FULL) {
		return true;
	}
	return false;
}



