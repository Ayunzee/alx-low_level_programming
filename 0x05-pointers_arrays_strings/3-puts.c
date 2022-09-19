#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the sting
 * @str: the inputed string
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;
i
	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
