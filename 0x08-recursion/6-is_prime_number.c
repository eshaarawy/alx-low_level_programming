#include "main.h"


/**
* is_prime_helper - prime number
* @n: number
* @divisor: divisor
* Return: x to the power of
*/
int is_prime_helper(int n, int divisor)
{
	if (divisor >= n && n > 1)
		return (1);
	else if (n % divisor == 0 || n <= 1)
		return (0);
	else
		return (is_prime_helper(n, divisor + 1));
}

/**
* is_prime_number - prime number
* @n: number
* Return: x to the power of
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
