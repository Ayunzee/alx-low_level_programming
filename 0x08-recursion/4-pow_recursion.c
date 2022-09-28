#include "main.h"

/**
 * _pow_recursion - raises anint to the power of anther
 * @x: the int
 * @y: the power
 *
 * Return: the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
