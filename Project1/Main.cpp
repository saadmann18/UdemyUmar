#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include<typeinfo>

int main()
{
	Savings ch("Saad", 100, 0.05f);
	//Transact(&ch);
	Account* p = &ch;

	int i{};
	float f{};
	const std::type_info& ti = typeid(*p);
	std::cout << ti.name() << std::endl;
	 
	return 0;
}