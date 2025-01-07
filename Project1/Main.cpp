#include <iostream>
#include "Account.h"
#include "Checking.h"
#include "Transaction.h"

int main()
{
	Checking acc("Saad", 100);
	Transact(&acc);



	return 0;
}