#include <iostream>

//using Comparator = bool(*)(int, int); //Aliasing. Return type: Comparator, function pointer bool(*)(int, int)
template<typename T, int size, typename Comparator>
void Sort(T(&arr)[size], Comparator comp) {//Passing comparator as predicate to Sort function template. 2nd argument is a Callback.
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1; ++j) {
			if (comp(arr[j] , arr[j + 1])) { //invoked through address
				T temp = std::move(arr[j]); 
				arr[j] = std::move(arr[j + 1]);
				arr[j + 1] = std::move(temp);
			}
		}
	}
}
//predicate 1: returns bool
bool CompA(int x, int y) {
	return x > y;
}
//predicate 2: returns bool
bool CompD(int x, int y) {
	return x < y;
}
struct Comp2 {
	bool operator()(int x, int y) {
		return x > y;
	}
};
int main() {
	CompA(3, 5);
	Comp2 comp;
	comp(3, 5);//comp.operator()(3, 5);
	int arr[]{ 1,6,8,4,0 };
	for (auto x : arr) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	Sort(arr, comp);
	for (auto x : arr) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
}