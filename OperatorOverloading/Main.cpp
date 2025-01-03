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
	
	Integer sum1 = b + 5;
	Integer sum2 = 5 + b; //Global function overload needed.

	std::cout << sum1.GetValue() << std::endl;
	std::cout << sum2.GetValue() << std::endl;
	
	return 0;
}