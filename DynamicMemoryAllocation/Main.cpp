#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void New()
{
	int* p = new int(5);
	*p = 6;
	std::cout << *p << std::endl;
	delete p;
	p = nullptr;
}
void NewArray()
{
	int* p = new int[5];
	for (int i = 0; i < 5; i++)
	{
		p[i] = i;
		std::cout << p[i] << std::endl;
	}
	delete []p;
}

void Strings()
{
	char* p = new char[4];
	strcpy_s(p, 4, "C++");
	std::cout << p << std::endl;
	delete[]p;

}

void TwoD()
{
	int* p1 = new int[3];
	int* p2 = new int[3];
	int** pData = new int* [2];
	pData[0] = p1;
	pData[1] = p2;

	pData[0][1] = 2;

	delete[]p1; //delete[] pData[0]
	delete[]p2; //delete[] pData[1]
	delete[]pData;



}


int main()
{
	int* p = (int*)calloc(1, sizeof(int));
	*p = 5;
	printf("%d\n", *p);
	free(p);
	p = NULL; //necessary to null the dangling pointer and is dangerous.

	//New();
	//NewArray();
	//Strings();
	TwoD();

	return 0;
}