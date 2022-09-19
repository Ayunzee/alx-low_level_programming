#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: the desyination of the cpied
 * @src: where it was copied from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int tmp = 0;

	while (*(src + tmp) != '\0')
	{
		*(dest + tmp) = *(src + tmp);
		tmp++;
	}
	*(dest + tmp) = '\0';

	return (dest);
}
