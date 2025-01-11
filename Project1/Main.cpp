#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include<typeinfo>

int main()
{
	Savings ch("Saad", 100, 0.05f);
	Transact(&ch);
	return 0;
}