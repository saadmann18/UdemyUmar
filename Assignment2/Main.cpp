/*
void Add(int a, int b, int& result);    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int& result);    //Find factorial of a number and return that through a reference parameter
void Swap(int& a, int& b);            //Swap two numbers through reference arguments
*/



#include <iostream>

void Add(int a, int b, int& result)
{
	result = a + b;
}

void Factorial(int a, int& result)
{
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
}

void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int x = 5, y = 10, result = 0;
	Add(x, y, result);
	std::cout << "the sum is: " << result << std::endl;

	int resultF = 1;
	Factorial(x, resultF);
	std::cout << "the factorial is: " << resultF << std::endl;

	Swap(x, y);
	std::cout << "swapped:" << x << " " << y << std::endl;




	return 0;
}