#include "main.h"

/**
* get_bit - print binary representation of a number
* @n: int
* @index: int
*
* Return: None
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
