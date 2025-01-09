#pragma once
#include <string>
class Account
{
	std::string m_Name;
	int m_AccNo;
	static int s_ANGenerator; // keeps the count globally
protected:
	float m_Balance;
public:
	Account(const std::string &name, float balance);
	~Account();
	const std::string& GetName()const;
	float GetBalance()const;
	int GetAccountNo()const;

	virtual void AccumulateInterest();
	virtual void Withdraw(float amount);
	void Diposit(float amount);
	virtual float GetInterestRate()const;

};

