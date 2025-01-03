#include <iostream>
#include "factDef.h"

int main()
{
	int i = 5;
	int result = Factorial(i);
	std::cout << "Factorial of " << i << " is " << result << std::endl;
	return 0;
}