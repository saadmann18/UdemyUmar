#include <iostream>
#include <vector>

template <typename T, int columns>
class PrettyPrint {
	T* m_pData;
public:
	PrettyPrint(T* data) : m_pData(data) {}
	void Print() {
		std::cout << "Columns: " << columns << std::endl;
		std::cout << "{" << *m_pData << "}" << std::endl;
	}
	T* GetData() {
		return m_pData;
	}
};

template <typename T>
class PrettyPrint<T, 80> {
	T* m_pData;
public:
	PrettyPrint(T* data) : m_pData(data) {}
	void Print() {
		std::cout << "using 80 Columns: " << std::endl;
		std::cout << "{" << *m_pData << "}" << std::endl;
	}
	T* GetData() {
		return m_pData;
	}
};

template<typename T>
class SmartPointer {
	T* m_ptr;
public:
	SmartPointer(T* ptr) :m_ptr(ptr) {}
	T* operator ->() {
		return m_ptr;
	}
	T& operator *() {
		return *m_ptr;
	}
	~SmartPointer() {
		delete m_ptr;
	}
};
//specialize SmartPointer class for Array types
template<typename T>
class SmartPointer<T[]> {
	T* m_ptr;
public:
	SmartPointer(T* ptr) :m_ptr(ptr) {}

	T& operator[] (int index) {
		return m_ptr[index];
	}
	~SmartPointer() {
		delete[] m_ptr;
	}
};

int main() {
	int data = 800;
	PrettyPrint<int, 80> p{ &data };
	p.Print();
	SmartPointer<int[]> s1{new int(3)};
	s1[0] = 5;
	std::cout << s1[0] << std::endl;

	return 0;
}