#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 *@n: number whose sqrt is given
 *
 * Return: sqrt the number
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - returns the square root
 *@n: digit to be raised
 *@x: n raused to tghe power of x
 *
 *Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

