#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
for (n = 48 ; n <= 57 ; n++)
{
	putchar(n);
if (n != 57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
