#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string that we need to manuplate it
 */

void puts_half(char *str)
{
	int length;
	int half_lingth;
	int total;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	total = length;
	half_lingth = total / 2;

	for (half_lingth = total / 2; half_lingth <= total; half_lingth++)
	{
		_putchar(str[half_lingth]);
	}
}