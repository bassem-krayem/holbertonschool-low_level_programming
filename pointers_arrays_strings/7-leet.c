#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *s = str;
	char *letters = "aAeEoOtTlL";
	char *leet_code = "43071";
	int i;

	while (*s)
	{
		i = 0;
		while (letters[i])
		{
			if (*s == letters[i])
			{
				*s = leet_code[i];
				break;
			}
			i++;
		}
		s++;
	}

	return (str);
}
