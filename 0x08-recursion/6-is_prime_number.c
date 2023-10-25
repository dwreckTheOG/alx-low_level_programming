#include "main.h"

/**
 * is_prime_helper - Helper function to check if an integer is prime.
 *
 * @n: The integer to be checked.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Check if an integer is a prime number.
 *
 * @n: The integer to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
