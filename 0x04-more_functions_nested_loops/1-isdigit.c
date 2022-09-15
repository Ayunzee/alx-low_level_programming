#include "main.h"

/**
 * _isdigit - checks if the input is a digit
 * @c: tested character
 * Return: 1 if it is and 0 if it isnt
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
