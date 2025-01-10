#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

int main()
{
	Account *acc = new Savings("Saad", 100, 0.05f);

	delete acc;
	return 0;
}