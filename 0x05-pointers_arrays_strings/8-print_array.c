#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements in an array
 * @a: the array
 * @n: the number to be returned
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int tmp;

	for (tmp = 0; tmp < n; tmp++)
	{
		if (tmp != n - 1)
			printf("%d, ", a[tmp]);
		else
			printf("%d", a[tmp]);
	}
	putchar(10);
}
