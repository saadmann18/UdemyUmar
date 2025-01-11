#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

int main()
{
	Checking ch("Saad", 100, 50);
	std::cout << ch.GetMinimumBalance();
	return 0;
}