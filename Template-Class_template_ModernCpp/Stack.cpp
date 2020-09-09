#include "Stack.h"

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