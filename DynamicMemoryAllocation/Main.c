#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = malloc(sizeof(int));
	*p = 5;
	printf("%d\n", *p);
	free(p);
	p = NULL; //necessary to null the dangling pointer and is dangerous.
	return 0;
}