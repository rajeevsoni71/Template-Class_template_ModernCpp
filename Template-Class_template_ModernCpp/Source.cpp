//#include "Stack.h"
#pragma once
#include <iostream>

//non-template type parameter "STACK_SIZE"
template<typename T, int STACK_SIZE>
class Stack {
	T m_buffer[STACK_SIZE]{};
	int m_top{ -1 };
public:
	bool push(const T&& element) {
		if (m_top == STACK_SIZE) {
			std::cout << "Stack overflow" << std::endl;
			return false;
		}
		m_buffer[++m_top] = element;
		return true;
	}
	bool pop();
	const T& top() const;
	bool is_empty() const;
	int size() const;
};

template<class T, int size>
bool Stack<T, size>::pop() {
	if (m_top == -1) {
		std::cout << "Stack underflow" << std::endl;
		return false;
	}
	--m_top;
	return true;
}

template<class T, int size>
const T& Stack<T, size>::top() const {
	return m_buffer[m_top];
}

template<class T, int size>
bool Stack<T, size>::is_empty() const {
	return m_top == -1;
}

template<class T, int size>
int Stack<T, size>::size() const {
	return m_top + 1;
}

template<typename T>
void Display(T stk) {
	while (!stk.is_empty())
	{
		std::cout << stk.top() << " ";
		stk.pop();
	}
	std::cout << std::endl;
}

int main() {
	/*Stack s;
	std::cout << std::boolalpha;
	std::cout << "stack is empty: " << s.is_empty() << std::endl;
	std::cout << "stack size: " << s.size() << std::endl;
	s.pop();
	s.push(1);
	std::cout << "stack is empty: " << s.is_empty() << std::endl;
	std::cout << "stack size: " << s.size() << std::endl;*/
	/*
	* Can Above stak used for string as well?
	* ---------------------------------------
	* No way
	* ------
	* Then Need to implement using templates
	* --------------------------------------
	* Lets Do it.
	* -----------
	*/
	/*Stack<int> s;
	std::cout << std::boolalpha;
	std::cout << "stack is empty: " << s.is_empty() << std::endl;
	std::cout << "stack size: " << s.size() << std::endl;
	s.pop();
	s.push(1);
	std::cout << "stack is empty: " << s.is_empty() << std::endl;
	std::cout << "stack size: " << s.size() << std::endl;*/
	/*Stack<std::string> Str;
	std::cout << "stack is empty: " << Str.is_empty() << std::endl;
	std::cout << "stack size: " << Str.size() << std::endl;
	Str.pop();
	Str.push("Rajeev");
	std::cout << Str.top() << std::endl;
	std::cout << "stack is empty: " << Str.is_empty() << std::endl;
	std::cout << "stack size: " << Str.size() << std::endl;*/
	/*
	* That's Great
	* Now make size of stack as user input like std::array<int,5>
	*/
	Stack<int, 5> si;
	std::cout << std::boolalpha;
	std::cout << "stack is empty: " << si.is_empty() << std::endl;
	std::cout << "stack size: " << si.size() << std::endl;
	si.pop();
	si.push(1);
	si.push(3);
	std::cout << "Top: " << si.top() << std::endl;
	std::cout << "stack is empty: " << si.is_empty() << std::endl;
	std::cout << "stack size: " << si.size() << std::endl;
	std::cout << "Printing stack.." << std::endl;
	Display(si);
	std::cout << "stack size: " << si.size() << std::endl;

	//Now Move the Stack into its own cpp and h file

	//GETTING ERROR DURING LINKING
	return 0;
}