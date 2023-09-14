#include <stdio.h>

/**
* _isdigit - check if char is uppercase
*
* Description: Alphabet
*
* @c: character
*
* Return: 0
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
