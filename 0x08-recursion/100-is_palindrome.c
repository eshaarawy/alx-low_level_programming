#include "main.h"


/**
* _index - string length
* @s: pointer
* Return: string length
*/
int _index(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += _index(s + 1) + 1;
	return (n);
}

/**
* check - palindrome
* @s: pointer
* @start: start
* @end: end
* @mod: mod
* Return: 0 or 1
*/
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}

/**
* is_palindrome - is_palindrome
* @s: pointer
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int end = _index(s);

	return (check(s, 0, end - 1, end % 2));
}
