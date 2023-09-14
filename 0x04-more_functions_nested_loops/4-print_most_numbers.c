#include <stdio.h>

/**
* print_most_numbers - check if char is uppercase
*
* Description: Alphabet
*
*
* Return: 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		printf("%d", i);
	}
	printf("\n");
}
