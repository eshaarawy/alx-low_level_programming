#include "main.h"

/**
* _strlen - string length meow
* @s: pointer to string
* Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
