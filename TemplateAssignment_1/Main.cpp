/*Convert the following functions into templates: 

int Add(int x, int y); //Return the sum of two elements

int ArraySum(const int* pArr, size_t arrSize); //Returns the sum of array elements

int Max(const int* pArr, size_t arrSize); //Return the largest element in the array

std::pair<int, int> MinMax(const int* pArr, size_t arrSize); //Return the smallest and largest element in a pair

Take care to avoid copies of user - defined objects wherever applicable.*/

#include <iostream>

template <typename T>
T Add(T x, T y) {
	return x + y;
}
template <typename T>
T ArraySum(const T* pArr, size_t arrSize) {
	
	//std::cout << pArr << std::endl;

	T sum = 0;
	for (int i = 0; i < arrSize; ++i)
		sum += pArr[i];
	return sum;
}
template <typename T>
T Max(const T* pArr, size_t arrSize) {
	T max = pArr[0];
	for (int i = 0; i < arrSize; ++i) {
		if (pArr[i] > max)
			max = pArr[i];
	}
	return max;
}
template <typename T>
std::pair<T, T> MinMax(const T* pArr, size_t arrSize) {
	T max = pArr[0];
	for (int i = 0; i < arrSize; ++i) {
		if (pArr[i] > max)
			max = pArr[i];
	}
	T min = pArr[0];
	for (int i = 0; i < arrSize; ++i) {
		if (pArr[i] <  min)
			min = pArr[i];
	}
	
	return {min, max};
}

int main() {
	auto sum = Add(5 , 9);
	std::cout << "sum is: " << sum << std::endl;

	std::cout << "Enter array size: ";
	int arrSize;
	std::cin >> arrSize;

	float* p =  new float[arrSize]{}; // change type, template class will handle accordingly.

	int i = 0;
	while (i < arrSize) {
		std::cout << "Element no.: " << i + 1 << ": ";
		std::cin >> p[i];
		++i;
	}


	std::cout << "Your elements are: ";
	for (int i = 0; i < arrSize; ++i)
		std::cout << p[i] << ", ";
	//std::cout << p << std::endl;

	auto sum1 = ArraySum(p, arrSize);
	std::cout << "sum1 is: " << sum1 << std::endl;

	auto max = Max(p, arrSize);
	std::cout << "max is: " << max << std::endl;

	auto minmax = MinMax(p, arrSize);
	std::cout << "minmax min is: " << minmax.first << std::endl;
	std::cout << "minmax max is: " << minmax.second << std::endl;


	return 0;
}
