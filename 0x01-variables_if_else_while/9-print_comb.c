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
for (n = '0' ; n <= '9' ; n++)
{
	putchar(n);
}
for (n = '9' ; n >= '0' ; n--)
{
	putchar(n);
}
putchar(',');
putchar('\n');
return (0);
}
