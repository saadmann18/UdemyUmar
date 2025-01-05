#include <iostream>

class Point
{
public:
	Point(int x, int y){}
};

int mainn()
{
	{
		//std::unique_ptr<int> p{ new int{5} };
		auto p = std::make_unique<int>(5);
		auto pt = std::make_unique<Point>(3, 5);

		auto pArr = std::make_unique<int[]>(5); // only declaration is possible
		pArr[0] = 0; //initialization is possible through subscripting only
	}
	//std::make_shared for arrays was aded in C++20 standard
	{
		//std::unique_ptr<int> p{ new int{5} };
		auto p = std::make_shared<int>(5);
		auto pt = std::make_shared<Point>(3, 5);

		auto pArr = std::make_shared<int[]>(5); // only declaration is possible
		pArr[0] = 0; //initialization is possible through subscripting only
	}

}	