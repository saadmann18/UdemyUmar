#include <iostream>
#include "Integer.h"

class Product
{
	Integer m_Id;
public:
	Product(const Integer& id) :m_Id(id)
	{
		std::cout << "Product Integer &" << std::endl;
	}
	~Product()
	{
		std::cout << "~Product()";
	}
	const Integer& GetInteger()const
	{
		return m_Id;
	}
	operator Integer()
	{
		return m_Id;
	}
};

int main()
{
	Product p{ 5 };
	//Integer id = p; 
	Integer id{ 5 };

	if (id == p.GetInteger())
		std::cout << "Id and Product matches 1" << std::endl;
	if (id == p)
		std::cout << "Id and Product matches 2" << std::endl;


	return 0;
}