#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: strings whose length is to be computed
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
