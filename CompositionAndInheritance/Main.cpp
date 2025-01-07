#include <iostream>

class Animal
{
public:
	void Eat() {
		std::cout << "Animal is eating" << std::endl;
	}
	void Run()
	{
		std::cout << "Animal running" << std::endl;
	}
	void Speak()
	{
		std::cout << "Animal Speaking" << std::endl;
	}
};

class Dog : public Animal {
public:
	void Eat()
	{
		std::cout << "Dog eating meat" << std::endl;
	}
	void Speak()
	{
		std::cout << "Dog barks!" << std::endl;
	}

};

int main() 
{
	Dog d;
	d.Eat();
	d.Run();
	d.Speak();
}