#include "main.h"
#include <stdlib.h>
/**
* _strdup - create array of size size and assign char c
* @str: size of array
* Description: create array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/
char *_strdup(char *str)
{
	int i = 0, size = 0;

	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);

	for (; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);


}
