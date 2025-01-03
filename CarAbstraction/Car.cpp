#include "Car.h"
#include <iostream>
int Car::totalCount = 0;
Car::Car() :Car(0)
{
	std::cout << "Car()" << std::endl;
}

Car::~Car()
{
	std::cout << "~Car()" << std::endl;
}

Car::Car(float amount):Car(amount, 0)
{
	std::cout << "Car(float)" << std::endl;
}

Car::Car(float amount, int pass) // Common initialization for delegation of constructors (C++11)
{
	std::cout << "Car(float, int)" << std::endl;
	++totalCount;
	fuel = amount;
	speed = 0;
	passengers = 0;
}

void Car::FillFuel(float amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	speed++;
	fuel -= 0.5f;
}

void Car::Brake()
{
	speed = 0;
}

void Car::AddPassengers(int count)
{
	passengers = count;
}

void Car::Dashboard() const
{
	std::cout << "Fuel: " << fuel << std::endl << "speed: " << speed << std::endl << "Passengers: " << passengers << std::endl;
}

void Car::ShowCount()
{
}
