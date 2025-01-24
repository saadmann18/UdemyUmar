#include <iostream>
#include <vector>

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
//Specialize vectors with function specialization
template<>
void PrettyPrint<std::vector<int>>::Print() {
	std::cout << "{";
	for (const auto& x : *m_pData) {
		std::cout << x;
	}
	std::cout << "}" << std::endl;
}

/*template<>
class PrettyPrint<std::vector<int>> {
	std::vector<int>* m_pData;
public:
	PrettyPrint(std::vector<int>* data) : m_pData(data) {}
	void Print() {
		std::cout << "{";
		for (const auto& x : *m_pData) {
			std::cout << x;
		}
		std::cout << "}" << std::endl;
	}
	std::vector<int>* GetData() {
		return m_pData;
	}
};*/


int main() {
	/*int data = 5;
	float f = 8.5;
	PrettyPrint<int> p1(&data);
	p1.Print();
	PrettyPrint<float> p2(&f);
	p2.Print();*/

	/*char* p{"Hello World"};
	PrettyPrint<char*> p3(p);
	p3.Print();
	char* pData = p3.GetData();*/

	std::vector<int>v{ 1,2,3,4,5 };
	PrettyPrint<std::vector<int>> pv(&v);
	pv.Print();

	return 0;
}