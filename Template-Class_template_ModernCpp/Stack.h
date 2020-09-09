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
