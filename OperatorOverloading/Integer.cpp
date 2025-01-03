 #include "Integer.h"
#include <iostream>
Integer::Integer()
{
	std::cout << "Integer()" << std::endl;
	m_pInt = new int(0);
}
Integer::Integer(int value)
{
	std::cout << "Integer(int)" << std::endl;
	m_pInt = new int(value);
}

// deep copy constructor
Integer::Integer(const Integer& obj)
{
	std::cout << "Integer(const Integer &)" << std::endl;
	m_pInt = new int(*obj.m_pInt);
}

Integer::Integer(Integer&& obj)
{
	std::cout << "Integer(Integer &&)" << std::endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}

Integer& Integer::operator=(const Integer& obj)
{
	std::cout << "Operator=(const Integer& obj)" << std::endl;
	if (this == &obj) //checking self assignment of object, i.e., a = a;
	{
		return *this; //*this is not a local object and we return that by reference
	}
	delete m_pInt;
	m_pInt = new int(*obj.m_pInt);
	return *this;
}

Integer& Integer::operator=(Integer&& obj)
{
	std::cout << "Operator=(Integer&& obj)" << std::endl;
	if (this == &obj)
	{
		return *this; 
	}
	delete m_pInt;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
	return *this;
}


int Integer::GetValue() const
{
	return *m_pInt;
}

void Integer::SetValue(int value)
{
	*m_pInt = value;
}

Integer Integer::operator+(const Integer& a) const
{
	Integer temp;
	*temp.m_pInt = *m_pInt + *a.m_pInt;
	return temp;
}

Integer& Integer::operator++()
{
	++(*m_pInt);
	return *this;
} 


/*Integer& Integer::operator++(int)
{
	(*m_pInt)++;
	return *this;
}*/

Integer Integer::operator++(int)
{
	Integer temp(*this); //Create a copy using copy constructor
	++(*m_pInt);
	return temp; //temp object is a temporary variable, we need to return by value and not by reference.
}

bool Integer::operator==(const Integer& obj) const
{
	return *m_pInt == *obj.m_pInt;
}

void Integer::operator()() 
{
	std::cout << *m_pInt << std::endl;
}

Integer::~Integer()
{
	std::cout << "~Integer()" << std::endl;
	delete m_pInt;
}
