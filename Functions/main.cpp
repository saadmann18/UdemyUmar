#include <iostream>
#include "math.h"

int main()
{
	int x, y;
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> x >> y;
	int result = Add(x, y);
	std::cout << "The sum is: " << result << std::endl;
}