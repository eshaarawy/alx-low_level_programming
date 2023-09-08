#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: Alphabet
*
* Return: 0
*/

int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
			letter++;
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
