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
char n;
for (n = 'a' ; n <= 'z' ; n++)
{
if (n != 'q' && n != 'e')
{
	putchar(n);
}
}
putchar('\n');
return (0);
}
