#include "main.h"
#include <stdio.h>

/**
* print_array - rints n elements of an array of integers
* @n: number of elements of the array to be printed
* @a: pointer to array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
