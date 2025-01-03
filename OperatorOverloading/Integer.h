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

	friend std::istream& operator >>(std::istream& input, Integer& a);
	friend class Printer;

	~Integer(); 

};

class Printer
{
	//Printer class wants to access the private members	of Integer, declaring friend of Integer.
	// Discouraged because it allows to access the internal data of the class directly.
	// Can be a source of bugs.
	// friend classes and friend functions should be used only as a last resort to solve problems.
};