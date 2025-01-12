#include <iostream>
class A {
public:
	A() {
		std::cout << "A()" << std::endl;
	}
	~A() {
		std::cout << "~A()" << std::endl;
	}
};
class B {
public:
	B() {
		std::cout << "B()" << std::endl;
	}
	~B() {
		std::cout << "~B()" << std::endl;
	}
};
class Test {
	A* pA{};
	B b{};
	int* pInt{};
	char* pStr{};
	int* pArr{};
public:
	Test() {
		std::cout << "Test(): Acquire resources" << std::endl;
		pA = new A;
		pInt = new int;
		throw std::runtime_error("Failed to initialize");
		pStr = new char[1000];
		pArr = new int[1000];
	}
	~Test() {
		std::cout << "~Test(): Release resources" << std::endl;
		delete pA;
		delete pInt;
		delete[] pStr;
		delete[]pArr;
	}
};

int main() {
	try {
		Test t;
	}
	catch (std::runtime_error& ex) {
		std::cout << ex.what() << std::endl;
	}
	
	return 0;
}