#include "Integer.h"
#include <iostream>

Integer operator +(int x, const Integer& y)
{
	Integer temp;
	temp.SetValue(x + y.GetValue());
	return temp;
}

std::ostream & operator <<(std::ostream& out, const Integer& a)
{
	out << a.GetValue();
	return out;
}
std::istream& operator >>(std::istream& input, Integer& a)
{
	int x;
	input >> x;
	a.SetValue(x);
	return input;
}

int main()
{
	Integer a(4), b(4);
	
	std::cin >> a;
	std::cout << a << std::endl;


	
	return 0;
}