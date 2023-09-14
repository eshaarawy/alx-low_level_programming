#include "main.h"

/**
* print_line - prints line of length n
*
* Description: Alphabet
* @n: lines
*
* Return: 0
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		printf("\n");
	}
}
