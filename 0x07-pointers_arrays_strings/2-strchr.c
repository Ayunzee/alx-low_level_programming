#include "main.h"

/**
 * _strchr - locatesa character in a string
 * @s: string to check
 * @c: character to check out for
 *
 * Return: a pointer to first occurence of c in s or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
