#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments to be passed
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argv -1);
	return (0);
}
