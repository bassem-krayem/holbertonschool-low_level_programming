#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string that we need to manuplate it
 */

void puts_half(char *str)
{
	int length;
	int half_lingth;
	int i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	half_lingth = length / 2;

	for (i = half_lingth; i < length; i++)
	{
		_putchar(str[i]);
	}
}