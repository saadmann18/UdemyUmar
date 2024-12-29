/*
int Add(int* a, int* b);    //Add two numbers and return the sum
void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
void Swap(int* a, int* b);  //Swap the value of two integers
void Factorial(int* a, int* result);       //Generate the factorial of a number and return that through the second pointer argument
*/

#include <iostream>

int Add(int* a, int* b)
{
	//main function code is commented here using multiline comments.
		/**/
	return *a + *b;
}


// void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
void AddVal(int* a, int* b, int* result)
{
	*result = *a + *b;
}

//void Swap(int* a, int* b);  //Swap the value of two integers
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//void Factorial(int* a, int* result);       //Generate the factorial of a number and return that through the second pointer argument

void Factorial(int* a, int* result)
{
	for (int i = 1; i <= *a; ++i) {
		*result *= i;
	}
}

int main()
{
	int x = 5, y = 10, z = 0, f = 1;
	int a = Add(&x, &y);
	std::cout << "The result is: " << a << std::endl;
	AddVal(&x, &y, &z);
	std::cout << "The result is: " << z << std::endl;
	Swap(&x, &y);
	std::cout << x << " " << y << std::endl;
	Swap(&x, &y);
	Factorial(&x, &f);
	std::cout << x << " " << f << std::endl;

}



