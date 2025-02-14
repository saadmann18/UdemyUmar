#include <iostream>
class Stack {
	int m_buffer[500];
	int m_Top{ -1 };
public:
	void Push(int elem) {
		m_buffer[++m_Top] = elem;
	}
	void Pop() {
		--m_Top;
	}
	int Top()const {
		return m_buffer[m_Top];
	}
	bool IsEmpty() {
		return m_Top == -1;
	}
};
int main() {
	Stack s;
	s.Push(3);
	s.Push(1);
	s.Push(6);
	s.Push(9);

	while (!s.IsEmpty()) {
		std::cout << s.Top() << " ";
		s.Pop();
	}
	return 0;
}