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
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
