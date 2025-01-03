#pragma once
class Integer
{
	int* m_pInt;
public:
	//Default constructor
	Integer();

	//Parametrized constructor
	Integer(int value);

	//copy constructor for deep copy
	Integer(const Integer &obj);

	//Move constructor for shallow copy
	Integer(Integer &&obj);

	//copy assignment
	Integer& operator=(const Integer& obj);

	//Move assignment
	Integer& operator=( Integer&& obj);

	int GetValue() const;
	void SetValue(int value);

	Integer operator+(const Integer& a) const; //doesnot modifiy the state of the object, so 'const' at end;
	Integer& operator++();
	Integer operator++(int);

	bool operator ==(const Integer& obj) const;

	//function call operator to print contents of the object
	void operator ()();

	~Integer(); 

};