#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: Always 0.
*/
void times_table(void)
{
	int first, second, prod;

	for (first = 0; first < 10; first++)
	{
		_putchar(48);
		for (second = 1; second < 10; second++)
		{
			_putchar(',');
			_putchar(' ');
			prod = first * second;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
