#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: buffers the copied strings
 * @src: the source strings
 * @n: max bytes copied
 * Return: returns the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int hld;

	for (hld = 0; hld < n && src[hld] != '\0'; hld++)
		dest[hld] = src[hld];

	for (; hld < n; hld++)
		dest[hld] = '\0';

	return (dest);
}
