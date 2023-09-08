#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: Base 16
*
* Return: 0
*/

int main(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)

	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
