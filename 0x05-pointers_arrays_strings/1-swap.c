#include "main.h"

/**
* swap_int - swaps two integers values
* @a: pointer to first number
* @b: pointer to second number
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
