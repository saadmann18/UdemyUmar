#include <iostream>
#include "func.h"

using namespace std;



int main()
{
	int result = Add(3, 5);
	cout << result << endl;
	Add(3.5, 5.6);
	const int x = 1;
	Print(&x);

	return 0;
}