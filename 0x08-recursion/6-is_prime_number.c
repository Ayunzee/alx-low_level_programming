#include "main.h"

/**
 * is_prime_number - returns 1 if digit is prime, o if not
 * @n: digit to check
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns prime numbers
 *@n: number to be checked
 *@start: where to start
 *
 * Return: 1or 0
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
