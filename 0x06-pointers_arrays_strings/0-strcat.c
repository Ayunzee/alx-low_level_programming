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
	strcat(dest, src);
	printf("%s\n", dest);

	return (0);
}
