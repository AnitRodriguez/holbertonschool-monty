#include "monty.h"

/**
 * _isdigit - checks if a string is all digits
 * @c: int to check
 * Return: 0 if it find something that it isn't a digit, 1 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
