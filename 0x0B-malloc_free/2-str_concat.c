#include "main.h"
#include <stdlib.h>
/**
* str_concat - create array of size size and assign char c
* @s1: ptr to first array
* @s2: ptr to second array
* Description: create array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;

	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (; s1[size1] != '\0'; size1++)
	;

	for (; s2[size2] != '\0'; size2++)
	;

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < size2 + size1; i++)
	{
		ptr[i] = s2[i - size1];
	}

	return (ptr);
}
