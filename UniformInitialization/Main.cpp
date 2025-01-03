#include <iostream>

using namespace std;

int main()
{
	int a1; // Uninitialized.
	int a2 = 0; // Copy initializaiton
	int a3(5); // Direct initialization
	cout << a3 << endl;

	string s1; // Uninitialized.
	string s2("C++"); // Direct initialization
	cout << s2 << endl;

	char d1[8]; // Uninitialized.
	char d2[8] = {'\0'}; // copy initialization // Aggregate initialization
	char d3[8] = { 'a', 'b', 'c', 'd'}; // copy initialization // Aggregate initialization
	char d4[8] = { "abcd" }; // copy initialization // Aggregate initialization
	cout << d2 << endl;
	cout << d3 << endl;
	cout << d4 << endl;

	/* Uniform initialization */

	int b1{}; // value initializaiton with zero.
	cout << b1 << endl; 

	int b2(); //Most vexing parse!

	int b3{ 5 }; // Direct initialization

	char e1[8]{}; //initialize array elements with default value
	char e2[8]{"Hello"};
	cout << e1 << endl;
	cout << sizeof(e1) << endl;
	cout << e2 << endl;

	//heap initialization

	//int* p1 = new int; //uninitialized.
	//int* p1 = new int{}; //uniform initialization.

	//char* p2 = new char[8] {}; //value initialization
	char* p2 = new char[8] {"Hello"}; //value initialization

	//cout << *p1 << endl;
	cout << *p2 << endl;


	/* Practice codes */

	cout << "Range based for-loop I" << endl;

	int arr[8]{ 1,2,3,4,5 }; // Direct initialization

	for (const auto &i : arr)
		cout << i << endl;

	cout << "Range based for-loop II" << endl;

	//int* beg = &arr[0];
/*int* beg = std::begin(arr);
	int* end = std::end(arr);

	while (beg != end)
	{
		cout << *beg << ' ';
		beg++;
	}*/	

	cout << "Loop internal implementation " << endl;
	auto begin = std::begin(arr);
	auto end = std::end(arr);
	for(;begin!=end;begin++)
	{
		auto v = *begin;
		cout << v << endl;
	}
}