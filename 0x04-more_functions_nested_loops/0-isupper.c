#include <stdio.h>

/**
* _isupper - check if char is uppercase
*
* Description: Alphabet
*
* @c: character
*
* Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
