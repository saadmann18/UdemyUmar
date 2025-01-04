#include <iostream>
#include "Integer.h"

void CreateInteger()
{
	Integer* p = new Integer;
	p->SetValue(3);
	std::cout << p->GetValue() << std::endl;
	delete p;
}


int main()
{
	CreateInteger();

	return 0;
}