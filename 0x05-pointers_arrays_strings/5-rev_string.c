#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse order
 * @s: reverses strings
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, temp, lent = _strlen(s);

	for (i = 0; i < lent / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + lent - i - 1);
		*(s + lent - i - 1) = temp;
	}
}

/**
 * _strlen - returns the length
 * @s: strings
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int lent = 0;

	while (*(s + lent) != '\0')
		lent++;
	return (lent);
}
