#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: the string pointer
 * @c: first occurrence of this character
 *
 * Return: pointer to first occurrence or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
