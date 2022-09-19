#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse order
 * @s: reverses strings
 * @rev: recives the reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	putchar("%s", strrev(s));
	return (0);

}
