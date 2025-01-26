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
		std::function<int(int)> f1;
		if (f1)
			std::cout << f1(3) << std::endl;
		else{
			std::cout << "No target to invoke!\n";
		}
			

		Max m{};
		std::function<int(int, int)> f2 = m;
		std::cout << f2(3, 5) << std::endl;

	}
	catch (const std::exception& ex) {
		std::cout << "Exception -> " << ex.what() << '\n';
	}
}