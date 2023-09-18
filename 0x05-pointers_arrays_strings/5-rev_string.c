#include "main.h"

/**
* rev_string - reveres string
* @s: pointer to string
*/
void rev_string(char *s)
{
	int i = 0, length;

	char temp;

	while (s[i])
		i++;
	length = i;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
