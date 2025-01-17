#include <iostream>

template <typename T>
class PrettyPrint {
	T* m_pData;
public:
	PrettyPrint(T *data): m_pData(data){}
	void Print() {
		std::cout << "{" << *m_pData << "}" << std::endl;
	}
	T* GetData() {
		return m_pData;
	}
};


template<>
class PrettyPrint<char*> {
	char* m_pData;
public:
	PrettyPrint(char *data): m_pData(data){}
	void Print() {
		std::cout << "{" << m_pData << "}" << std::endl;
	}
	char* GetData() {
		return m_pData;
	}
};

int main() {
	/*int data = 5;
	float f = 8.5;
	PrettyPrint<int> p1(&data);
	p1.Print();
	PrettyPrint<float> p2(&f);
	p2.Print();*/

	char* p{ "Hello World" };
	PrettyPrint<char*> p3(p);
	p3.Print();
	char* pData = p3.GetData();

	return 0;
}