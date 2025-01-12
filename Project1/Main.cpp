#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include<typeinfo>

int main()
{
	Checking ch("Saad", 100, 50);
	try {
		Transact(ch);
	}
	catch (std::exception& ex) {
		std::cout << "Exception: " << ex.what() << '\n';
	}
	return 0;
}