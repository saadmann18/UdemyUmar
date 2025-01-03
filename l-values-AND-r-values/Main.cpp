#include <iostream>

// Return r-value. Cannot come to the left hand side of the assignment function.
// Returns temporary
int Add(int x, int y)
{
	return x + y;
}

// Return l-value. Value will be assigned to the return type of the Transform function.
// Can come to the left hand side of the assignment function.
// returns persistent
int & Transform(int &x)
{
	x *= x;
	return x;
}

void Print(int& x) { std::cout << "Print(int&)" << std::endl; } // accepts an l-value reference
void Print(const int& x) { std::cout << "Print(const int&)" << std::endl; } // accepts a constant l-value reference
void Print(int&& x) { std::cout << "Print(int&&)" << std::endl; }  // accepts an r-value reference

int main()
{
	//x, y, z are l-values & 5, 10 & 8 are r-values
	int x = 5;
	int y = 10;
	int z = 8;

	//Expression returns r-value
	int result = (x + y) * z;

	//Expression returns l-value
	++x = 6;

	Transform(y) = x;
	int m = Transform(y);
	std::cout << "function: " << Transform(y) << std::endl;
	std::cout << "m: " << m << std::endl;


	int a = 10;
	Print(a); // calling by l-value
	Print(3); // calling by temporary, overloads the r-value reference

	const int& c = 5;

	return 0;
}