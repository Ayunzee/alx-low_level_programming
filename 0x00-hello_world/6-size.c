#include <stdio.h>
/**
 * main - prints the size of various types
 *
 * Description
 * Return: 0
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
printf("size of a char: %ld bytes(s)\n", sizeof(a));
printf("size of an int: %ld bytes(s)\n", sizeof(b));
printf("size of a long: %ld bytes(s)\n", sizeof(c));
printf("size of an long long: %ld bytes(s)\n", sizeof(d));
printf("size of a float: %ld bytes(s)\n", sizeof(e));
return (0);
}
