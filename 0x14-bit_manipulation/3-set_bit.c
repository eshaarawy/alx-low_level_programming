#include "main.h"

/**
* set_bit - print binary representation of a number
* @n: int
* @index: int
*
* Return: None
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
