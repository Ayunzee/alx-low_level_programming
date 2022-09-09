#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
{printf("Last digit of %d is %d and is greater than 5\n", n, n % 10); }
	else if (n % 10 == 0)
{printf("Last digit of %d is %d and is 0\n", n, n % 10); }
	else if (n % 10 < 6 && n % 10 != 0)
{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10); }
	return (0);
}
