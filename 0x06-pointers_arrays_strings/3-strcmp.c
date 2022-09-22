#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns 0, +ve or -ve on condition met
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, cmp = 0;

	while (1)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
			break;
		else if (s1[n] == '\0')
		{
			cmp = s2[n];
			break;
		}
		else if (s2[n] == '\0')
		{
			cmp = s1[n];
			break;
		}
		else if (s1[n] != s2[n])
		{
			cmp = s1[n] - s2[n];
			break;
		}
		else
			n++;
	}
	return (cmp);
}
