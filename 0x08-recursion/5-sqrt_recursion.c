#include "main.h"

/**
* _sqrt_helper - helper
* @n: number
* @guess: wka
* Return: square root
*/

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (_sqrt_helper(n, guess + 1));
	else
		return (-1);
}


/**
* _sqrt_recursion - square root
* @n: number
* Return: square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}

