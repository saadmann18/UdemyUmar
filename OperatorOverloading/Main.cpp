#include "Integer.h"
#include <iostream>

Integer Add(const Integer& a, const Integer& b) //return by value.
{
	Integer temp;
	temp.SetValue(a.GetValue() + b.GetValue());
	return temp; // copy constructor is called due to this return temp object by value!
}//in some cases, this temporary object may not get created. This is due to the compiler performing copy or move elision.

int main()
{
	Integer a(4), b(4);
	
	Integer sum = a + b;

	sum++;

	a == b ? std::cout << "True\n" : std::cout << "False\n";



	std::cout << sum.GetValue();
	
	return 0;
}