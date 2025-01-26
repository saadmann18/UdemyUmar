#include <iostream>
#include <functional>

int Square(int x) {
	return x * x;
}
int* Alloc(size_t bytes);




int main() {
	std::function<int(int)> f1 = Square;
	//std::function<int* (size_t)> f2 = Alloc;
	//std::function<bool(int)> f3 = [](int x) {return x % 2 == 0; };
	f1(3);
	std::cout << f1(3) << std::endl;
	//f2(1024);
	//f3(3);
}