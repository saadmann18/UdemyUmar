#include <iostream>
#include <functional>

int Square(int x) {
	return x * x;
}
int Add(int x, int y) {
	return x + y;
}

struct  Max{
	int operator()(int x, int y)const {
		return x > y ? x : y;
	}
};




int main() {
	try {
		std::function<int(int)> f1 = Square;
		std::cout << f1(3) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << "Exception -> " << ex.what() << '\n';
	}
}