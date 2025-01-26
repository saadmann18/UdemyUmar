#include <iostream>

int main() {
	int sum = [](int x, int y) {return (x + y); }(10, 5);
	int max = [](int a, int b) {return a > b ? a : b; }(10, 20);
	int min = [](int m, int n) {return m < n ? m : n; }(67, 59);
	std::cout << sum << std::endl;
	std::cout << max << std::endl;
	std::cout << min << std::endl;
}

