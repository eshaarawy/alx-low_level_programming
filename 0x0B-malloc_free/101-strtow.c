#include "main.h"
#include <stdlib.h>

/**
* word_count - Counts words in a string.
* @s: Input string.
* Return: Number of words.
*/
int word_count(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
		{
			n++;
		}
	}
	n++;
	return (n);
}

/**
* strtow - Splits a string into words.
* @str: Input string.
* Return: Array of words.
*/
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = word_count(str);
	if (n == 1)
		return (NULL);
	words = (char **)malloc(n * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (words[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(words[k]);
				free(words[n - 1]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				words[wc][l] = str[i + l];
			words[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
