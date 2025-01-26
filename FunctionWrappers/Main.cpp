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
		// function pointer
		std::function<int(int)> f1;
		if (f1)
			std::cout << f1(3) << std::endl;
		else{
			std::cout << "No target to invoke!\n";
		}

		// function object
		Max m{};
		std::function<int(int, int)> f2 = m;
		std::cout << f2(3, 5) << std::endl;

		//lambda expression (also function object)
		std::function<bool(int)> f3 = [](int x) {return x % 2 == 0; };
		std::cout << "IsEven?" << f3(4) << '\n';

	}
	catch (const std::exception& ex) {
		std::cout << "Exception -> " << ex.what() << '\n';
	}
}