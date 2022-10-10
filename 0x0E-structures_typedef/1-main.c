#include <stdio.h>
#include "dog.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dof my_dog;

	inti_dog(&my_dog, "Django", 3.5, "Jay");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
