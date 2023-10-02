#include "main.h"
/**
 * _strcat - copy a string
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j;

	j = 0;
	while (j < 5 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < 5)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
