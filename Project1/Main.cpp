#include <iostream>
#include "Account.h"
#include "Checking.h"

int main()
{
	Checking acc("Saad", 1000);
	std::cout << "Initial balance: " << acc.GetBalance() << std::endl;
	acc.Withdraw(980);
	std::cout << "Balance: " << acc.GetBalance() << std::endl;



	return 0;
}