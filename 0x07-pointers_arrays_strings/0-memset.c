#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address to the memory
 * @b: char used
 * @n: byte to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
