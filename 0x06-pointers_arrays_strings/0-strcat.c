#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination
 * @src: the source of the strings
 *
 * Description - concatenates
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int now = 0, big = 0;

		while (dest[now++])
			big++;

		for (now = 0; src[now]; now++)
			dest[big++] = src[now];

		return (dest);
}
