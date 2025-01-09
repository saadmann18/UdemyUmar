#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

int main()
{
	Savings acc("Saad", 100, 0.05f);
	Transact(&acc);

	return 0;
}