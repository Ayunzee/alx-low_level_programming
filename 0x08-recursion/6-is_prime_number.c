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
