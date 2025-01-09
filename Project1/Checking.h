#pragma once
#include "Account.h"
class Checking : public Account{
public:
	//Checking(const std::string& name, float balance);
	using Account::Account; // derived class has the same parameters to initialize as base class
	~Checking();
	void Withdraw(float amount);

};

