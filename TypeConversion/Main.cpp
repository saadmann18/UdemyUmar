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
	//share_ptr ref count is 2
}  //share_ptr ref count is 1

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

	const int x = 1;
	int* p = (int*) & x;

	return 0;
}