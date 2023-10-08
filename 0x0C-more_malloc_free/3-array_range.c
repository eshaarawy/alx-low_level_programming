#include <stdlib.h>
#include "main.h"

/**
* *array_range - allocates memory for an array
* @min: number of elements in the array
* @max: size of each element
*
* Return: pointer to allocated memory
*/
int *array_range(int min, int max)

{
	int len, i;

	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
