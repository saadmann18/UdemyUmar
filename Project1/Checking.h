#pragma once
#include "Account.h"
class Checking : public Account{
	float m_MinimumBalance;
public:
	//Checking(const std::string& name, float balance);
	using Account::Account; // derived class has the same parameters to initialize as base class
	Checking(const std::string& name, float balance, float minbalance);
	~Checking();
	void Withdraw(float amount) override;
	float GetMinimumBalance() const;

};

