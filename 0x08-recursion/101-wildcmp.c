#include "main.h"


/**
* move_past_star - string length
* @s: pointer
* Return: string length
*/
char *move_past_star(char *s)
{
	if (*s == '*')
		return (move_past_star(s + 1));
	else
		return (s);
}

/**
* inception - palindrome
* @s1: pointer
* @s2: start
* Return: 0 or 1
*/
int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}

/**
* wildcmp - is_palindrome
* @s1: pointer
* @s2: pointer
* Return: 1 or 0
*/
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
