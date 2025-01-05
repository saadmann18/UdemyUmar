#include <iostream>
#include <cstring>


const char* Combine(const char* pfirst, const char* plast)
{
	char *fullname = new char[strlen(pfirst)+strlen(plast)]; //allocating memory in the heap solves the problem.
	strcpy(fullname, pfirst);
	strcat(fullname, plast);
	return fullname;
}

int main() {
	char first[10];
	char last[10];
	std::cin.getline(first, 10);
	std::cin.getline(last, 10);

	const char* pFullName = Combine(first, last);

	std::cout << pFullName << std::endl; //returns garbage values

	return 0;
}