#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - create array of size size and assign char c
* @width: ptr to first array
* @height: ptr to second array
* Description: create array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(sizeof(int) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == 0)
		{
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}

	return (ptr);
}
