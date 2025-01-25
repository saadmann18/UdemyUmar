#include <iostream>

using Comparator = bool(*)(int, int); //Aliasing. Return type: Comparator, function pointer bool(*)(int, int)
template<typename T, int size>
void Sort(T(&arr)[size], Comparator comp) {//Passing comparator as predicate.
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1; ++j) {
			if (comp(arr[j] , arr[j + 1])) { 
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
int main() {
	int arr[]{ 1,6,8,4,0 };
	for (auto x : arr) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	Sort(arr, CompA);
	for (auto x : arr) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
}