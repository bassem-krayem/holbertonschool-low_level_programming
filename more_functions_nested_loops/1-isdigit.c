#include "main.h"
/**
 * _isdigit - checks if digits from 0 to 9
 * @c: the character will be checked
 *
 * Return: Returns 1 if c is a digit.
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
