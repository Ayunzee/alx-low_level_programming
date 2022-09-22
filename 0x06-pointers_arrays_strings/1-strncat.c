#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: the destination
 * @src: the source code
 * @n: integer to compare the strings
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int now = 0, big = 0;

	while (dest[now++])
		big++;

	for (now = 0; src[now] && now < n; now++)
		dest[big++] = src[now];

	return (dest);
}
