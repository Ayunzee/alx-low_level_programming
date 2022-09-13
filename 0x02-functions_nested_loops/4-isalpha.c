#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 * @c: the int that will use the argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c<= 'z') || (c >= "A" && c <= 'z'z))
	{
		return(1);
	}
	else
		return (0);
}
