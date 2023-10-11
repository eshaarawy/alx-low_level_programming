#include "function_pointers.h"

/**
* array_iterator - iterates over array
*
* @size: size of array
* @array: ptr to array
* @action: ptr to function
* Return: wka
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
