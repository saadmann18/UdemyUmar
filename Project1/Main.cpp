#include <iostream>
#include "Account.h"

int main()
{
	Account acc("Saad", 5000);
	std::cout << "Initial balance: " << acc.GetBalance() << std::endl;
	acc.Diposit(1000);
	acc.Withdraw(500);
	std::cout << "Balance: " << acc.GetBalance() << std::endl;

	return 0;
}