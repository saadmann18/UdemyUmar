#include <iostream>
#include <cstring>
#include <string>


const char* Combine(const char* pfirst, const char* plast)
{
	char* fullname = new char[strlen(pfirst) + strlen(plast) + 1]; //allocating memory in the heap solves the problem.
	strcpy(fullname, pfirst);
	strcat(fullname, plast);
	return fullname;
}

std::string Combine(const std::string& first, const std::string& last)
{
	std::string fullname = first + last;
	return fullname; //return by value.
}

int main() {
	/*char first[10];
	char last[10];
	std::cin.getline(first, 10);
	std::cin.getline(last, 10);

	const char* pFullName = Combine(first, last);

	std::cout << pFullName << std::endl; //returns garbage values

	delete[]pFullName;*/

	std::string first;
	std::string last;

	std::getline(std::cin, first);
	std::getline(std::cin, last);
	std::string fullname = Combine(first, last);

	std::cout << fullname << std::endl;


	//if using c-style print, raw string is needed. c_str() returns raw string which is terminated by null-charachter. 
	printf("%s", fullname.c_str());

	//initialize string
	std::string first1 = "Saad";
	std::string last("Mannan");

	//C++11 allows direct initialization:
	std::string name{ "Saad Mannan" };

	//Initialization with literals: (C++14)
	using namespace std::string_literals;
	//std::string n2 = "Saad Mannan"s;
	//More cleaner way is:
	auto n2 = "Saad Mannan"s;


	return 0;
}

void UsingStdString()
{
	//Initialize & assign
	std::string s = "Hello";
	s = "Hello";
	//Access
	s[0] = 'W';
	char ch = s[0];

	std::cout << s << std::endl;
	std::cin >> s;

	std::getline(std::cin, s);

	//Size
	s.length(); //takes constant time, raw string takes linear time

	//Insert & concatenate
	std::string s1{ "Hello" }, s2{ "World" };
	s = s1 + s2;

	s += s1;

	s.insert(6, "World");

	//Comparison
	if (s1 < s2) {}

	//Removal
	s.erase();
	s.erase(0, 5);
	s.clear();

	//search
	auto pos = s.find("World", 0);
	if (pos != std::string::npos) {
		//Found
	}
}