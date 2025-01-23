#include <iostream>
#include "Integer.h"

/*template<typename T>
void Print(std::initializer_list<T> args) {
	for (const auto& x : args) {
		std::cout << x << " ";
	}
}*/

//base case
void Print() { 
	std::cout << std::endl; 
}
//Template parameter pack
template<typename T, typename...Params>
//Function parameter pack
void Print(T &&a, Params&&... args) {
	//std::cout << sizeof...(args) << std::endl;
	//std::cout << sizeof...(Params) << std::endl;
	std::cout << a;
	if (sizeof...(args) != 0) {
		std::cout << ",";
	}
	Print(std::forward<Params>(args)...);
}

int main() {
	//Print({ 1,2.5,3,4,5 }); cant handle multiple types
	//Print( 1,2.5,3,"4");
	Integer val{ 1 };

	Print(0, val, Integer{ 2 });


	return 0;
}