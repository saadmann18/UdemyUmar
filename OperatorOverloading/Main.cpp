#include "Integer.h"
#include <iostream>

Integer operator +(int x, const Integer& y)
{
	Integer temp;
	temp.SetValue(x + y.GetValue());
	return temp;
}


int main()
{
	Integer a(4), b(4);
	
	Integer sum = 5 + b;

	std::cout << sum.GetValue() << std::endl;
	
	return 0;
}