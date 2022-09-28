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
