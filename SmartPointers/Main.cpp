#include <iostream>
#include "Integer.h"
#include <memory>

class IntPtr
{
	Integer* m_p;
public:
	IntPtr(Integer *p):m_p(p){}
	~IntPtr()
	{
		delete m_p;
	}
	Integer* operator ->()
	{
		return m_p;
	}
	Integer& operator *()
	{
		return *m_p;
	}
};

void Process(std::shared_ptr<Integer> ptr)
{
	std::cout << ptr->GetValue() << std::endl;
}

void CreateInteger()
{
	std::shared_ptr<Integer> p(new Integer);
	p->SetValue(3);
	(*p).SetValue(4);

	Process(p);

	std::cout << p->GetValue() << std::endl;
}


int main()
{
	CreateInteger();

	return 0;
}