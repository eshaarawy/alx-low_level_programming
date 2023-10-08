#include "main.h"

/**
* *_calloc - allocates memory
* @nmemb: int
* @size: int
* Return: pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	char *m;

	unsigned int n;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
		return (NULL);
	m = ptr;
	n = sizeof(int) * nmemb;
	while (n--)
		*m++ = 0;
	return (ptr);
}
