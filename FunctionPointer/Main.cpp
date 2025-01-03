#include <iostream>
#include "func.h"

using namespace std;

int main()
{

	void (*fp1)();
	fp1 = display;
	(*fp1)();

	int (*fp2)(int, int);
	fp2 = min;
	cout << "min: " << (*fp2)(10, 5) << endl;

	int (*fp3)(int, int);
	fp3 = max;
	cout << "max: " << (*fp3)(10, 5) << endl;
	cout << "max: " << fp3(10, 5) << endl;

	return 0;
}