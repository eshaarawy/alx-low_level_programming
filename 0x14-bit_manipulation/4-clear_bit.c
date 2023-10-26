#include "main.h"

/**
* clear_bit - print binary representation of a number
* @n: int
* @index: int
*
* Return: None
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
