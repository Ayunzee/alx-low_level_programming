#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: the variable
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
