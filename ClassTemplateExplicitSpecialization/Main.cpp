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

int main() {
	int data = 5;
	float f = 8.5;
	PrettyPrint<int> p1(&data);
	p1.Print();
	PrettyPrint<float> p2(&f);
	p2.Print();
}