#pragma once
#include "Account.h"
class Checking : public Account{
public:
	//Checking(const std::string& name, float balance);
	using Account::Account;
	~Checking();
	void Withdraw(float amount);

};

