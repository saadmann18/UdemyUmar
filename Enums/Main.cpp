#include<iostream>
enum class Color : long{ RED, GREEN, BLUE };

void FillColor(Color color)
{
	//Fill background with some color
	if(color == Color::RED){
		//Paint with red color
		std::cout << "RED" << std::endl;
	}
	else if (color == Color::GREEN){
		//paint with green color
		std::cout << "GREEN" << std::endl;
	}
	else if (color == Color::BLUE) {
		//paint with green color
		std::cout << "BLUE" << std::endl;
	}
}
//enum TrafficLight{RED, GREEN, BLUE}; cannot be done. needs scoped enum
enum class TrafficLight : char{ RED, GREEN, BLUE };
int main() {

	Color c = Color::RED;
	FillColor(c);
	FillColor(Color::GREEN);
	FillColor(Color::BLUE);
	//FillColor(6); // no implicit conversion
	FillColor(static_cast<Color>(2));
	int x = static_cast<int>(Color::RED);
	return 0;
}