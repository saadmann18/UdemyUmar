#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include<typeinfo>

int main()
{
	Checking ch("Saad", 100, 0.05f);
	//Transact(&ch);
	Account* p = &ch;

	int i{};
	float f{}; 
	const std::type_info& ti = typeid(*p);
	std::cout << ti.name() << std::endl;

	if (ti == typeid(Savings))
	{
		std::cout << "Pointing to a Savings object" << std::endl;
	}
	else
	{
		std::cout << "not Pointing to a Savings object" << std::endl;
	}
	return 0;
}